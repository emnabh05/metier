#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "produits.h"
#include <QSqlQuery>
#include <QRegularExpressionValidator>
#include <QIntValidator>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    produits p;
    ui->setupUi(this);
    ui->tableauproduits->setModel(p.afficherProduits());
    ui->tableauproduits->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    afficherstatistiquesproduits();
    chartView = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttongererProduit_clicked()
{
    produits p;
    ui->stackedwidgetmainbody->setCurrentWidget(ui->pagegererproduits);
    ui->tableauproduits->setModel(p.afficherProduits());
}

void MainWindow::afficherstatistiquesproduits() {
    QStringList categories = {"Produits Ajoutés"};
    QVector<int> nbrproduits(categories.size(), 0);

    // Get today's date
    QDate currentDate = QDate::currentDate();


    QSqlQuery query;
    query.prepare(R"(
        SELECT COUNT(*) AS count
        FROM Produits
        WHERE DATE(dateajout) = :date
    )");
    query.bindValue(":date", currentDate.toString("yyyy-MM-dd"));

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to retrieve data for statistics: " );
        return;
    }

    if (query.next()) {
        nbrproduits[0] = query.value("count").toInt();
    }

    if (chartView) {
        QChart *chart = chartView->chart();
        chart->removeAllSeries();

        QBarSeries *series = new QBarSeries();
        QBarSet *set = new QBarSet("Produits Ajoutés");
        *set << nbrproduits[0];
        series->append(set);
        chart->addSeries(series);

        QValueAxis *axisY = qobject_cast<QValueAxis *>(chart->axisY());
        if (axisY) {
            axisY->setRange(0, nbrproduits[0] + 5);
        }

        QBarCategoryAxis *axisX = qobject_cast<QBarCategoryAxis *>(chart->axisX());
        if (axisX) {
            axisX->clear();
            axisX->append(categories);
        }
    } else {
        QBarSeries *series = new QBarSeries();
        QBarSet *set = new QBarSet("Produits Ajoutés");
        *set << nbrproduits[0];
        series->append(set);

        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Produits Ajoutés");
        chart->setAnimationOptions(QChart::SeriesAnimations);

        QBarCategoryAxis *axisX = new QBarCategoryAxis();
        axisX->append(categories);
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

        QValueAxis *axisY = new QValueAxis();
        axisY->setRange(0, nbrproduits[0] + 5);
        chart->addAxis(axisY, Qt::AlignLeft);
        series->attachAxis(axisY);

        chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        if (!ui->pagestatistiques->layout()) {
            ui->pagestatistiques->setLayout(new QVBoxLayout());
        }
        ui->pagestatistiques->layout()->addWidget(chartView);
    }
}





void MainWindow::on_bouttonstatistiques_clicked()
{
    ui->stackedWidgetgererproduit->setCurrentWidget(ui->pagestatistiques);
    afficherstatistiquesproduits();
}

void MainWindow::on_bouttonajouterproduit_clicked()
{
    ui->stackedWidgetgererproduit->setCurrentWidget(ui->pageajoutproduit);
}

void MainWindow::on_bouttonacceuil_clicked()
{
    ui->stackedwidgetmainbody->setCurrentWidget(ui->pageacceuil);
}

void MainWindow::on_bouttonafficherproduits_clicked()
{
    ui->stackedWidgetgererproduit->setCurrentWidget(ui->pageafficherproduits);
}

void MainWindow::on_bouttonmodifierproduit_clicked()
{
    ui->stackedWidgetgererproduit->setCurrentWidget(ui->pagemodifierproduit);
}

void MainWindow::on_bouttonconfirmerajout_clicked()
{
    QString nomProduit = ui->inputnomproduit_2->text();
    QDate dateExpiration = ui->inputdateexpiration_2->date();
    int quantiteDisponible = ui->inputquantitedisponible_2->text().toInt();
    int humidite = ui->inputhumidite_2->text().toInt();
    QDate dateDebut = ui->inputdatedebut_2->date();
    int temperature = ui->inputtemperature_2->text().toInt();

    if (nomProduit.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Nom du produit est requis.");
        return;
    }

    if (!dateExpiration.isValid() || dateExpiration <= dateDebut) {
        QMessageBox::warning(this, "Erreur", "Date d'expiration invalide.");
        return;
    }

    produits produitToAdd(nomProduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut);
    if (produitToAdd.ajouterProduit(produitToAdd)) {
        QMessageBox::information(this, "Succès", "Produit ajouté avec succès!");
        ui->tableauproduits->setModel(produits().afficherProduits());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout.");
    }
}

// tri function
void MainWindow::on_menutri_currentIndexChanged(int index)
{
    produits p;
    QSqlQueryModel* model = p.trierProduits(index);
    ui->tableauproduits->setModel(model);
}

// confirmer la suppression
void MainWindow::on_bouttonconfirmersupprimerproduit_clicked()
{
    produits p;
    int idproduit = ui->inputsupprimer->text().toInt();
    if (p.supprimerProduits(idproduit)) {
        QMessageBox::information(this, "Succès", "Produit supprimé!");
    } else {
        QMessageBox::warning(this, "Erreur", "Échec de suppression.");
    }
}

//modifier produit
void MainWindow::on_pushButton_5_clicked()
{
    produits p;
    int idproduit = ui->idproduitmodif->text().toInt();
    QString nomproduit = ui->intputnommodif->text();
    QDate dateExpiration = ui->intputdateexpirationmodif->date();
    int quantiteDisponible = ui->inputquantitedisponiblemodif->text().toInt();
    int humidite = ui->inputhumiditemodif->text().toInt();
    int temperature = ui->inputtemperaturemodif->text().toInt();
    QDate dateDebut = ui->intputdatedebutmodif->date();
    QDate dateajout = QDate::currentDate();  // Set current date as the modification date

    if (p.modifierProduits(idproduit, nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut, dateajout)) {
        QMessageBox::information(this, "Succès", "Produit modifié.");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de modification.");
    }
}

// afficher produit a modifier
void MainWindow::on_pushButton_7_clicked()
{
    produits p;
    int idproduitmodif = ui->idproduitmodif->text().toInt();
    if (idproduitmodif <= 0) {
        QMessageBox::warning(this, "Erreur", "ID produit invalide.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT nomproduit, dateExpiration, quantiteDisponible, humidite, temperature, dateDebut FROM Produits WHERE idproduit = :idproduit");
    query.bindValue(":idproduit", idproduitmodif);

    if (query.exec() && query.next()) {
        ui->intputnommodif->setText(query.value("nomproduit").toString());
        ui->intputdateexpirationmodif->setDate(query.value("dateExpiration").toDate());
        ui->inputquantitedisponiblemodif->setText(query.value("quantiteDisponible").toString());
        ui->inputhumiditemodif->setText(query.value("humidite").toString());
        ui->inputtemperaturemodif->setText(query.value("temperature").toString());
        ui->intputdatedebutmodif->setDate(query.value("dateDebut").toDate());
    } else {
        QMessageBox::information(this, "Erreur", "Produit introuvable.");
    }
}
void MainWindow::on_buttongererClient_clicked(){}
void MainWindow::on_pushButton_6_clicked(){}
