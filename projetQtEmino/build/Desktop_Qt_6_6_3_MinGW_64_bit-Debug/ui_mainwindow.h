/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *header;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bouttonacceuil;
    QPushButton *buttongererProduit;
    QPushButton *buttongererClient;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStackedWidget *stackedwidgetmainbody;
    QWidget *pageacceuil;
    QLabel *label;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QWidget *pagegererproduits;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidgetgererproduit;
    QWidget *pageafficherproduits;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *menutri;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_6;
    QLabel *label_29;
    QLineEdit *inputnomproduit_2;
    QLabel *label_24;
    QDateEdit *inputdateexpiration_2;
    QLabel *label_28;
    QLineEdit *inputquantitedisponible_2;
    QLabel *label_26;
    QLineEdit *inputhumidite_2;
    QLabel *label_27;
    QLineEdit *inputtemperature_2;
    QLabel *label_25;
    QDateEdit *inputdatedebut_2;
    QTableView *tableauproduits;
    QWidget *pageajoutproduit;
    QLabel *label_11;
    QLineEdit *inputsupprimer;
    QPushButton *bouttonconfirmersupprimerproduit;
    QLabel *label_12;
    QWidget *pagemodifierproduit;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *idproduitmodif;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *intputnommodif;
    QDateEdit *intputdateexpirationmodif;
    QLineEdit *inputquantitedisponiblemodif;
    QLineEdit *inputhumiditemodif;
    QLineEdit *inputtemperaturemodif;
    QDateEdit *intputdatedebutmodif;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QWidget *pagestatistiques;
    QLabel *label_22;
    QFrame *frameoperationsproduits;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bouttonafficherproduits;
    QPushButton *bouttonajouterproduit;
    QPushButton *bouttonmodifierproduit;
    QPushButton *bouttonsupprimerproduit;
    QPushButton *bouttonstatistiques;
    QPushButton *bouttonhistorique;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1256, 729);
        MainWindow->setMinimumSize(QSize(1028, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:lightgreen;}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        header = new QFrame(centralwidget);
        header->setObjectName("header");
        header->setMinimumSize(QSize(180, 50));
        header->setStyleSheet(QString::fromUtf8("ackground-color: #edf7e6;         /* Light green inside background */\n"
"border: 2px solid rgb(68, 150, 109); /* Green border */\n"
"border-radius: 15px;                /* Rounded corners with 15px radius */\n"
""));
        header->setFrameShape(QFrame::Shape::StyledPanel);
        header->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(header);
        verticalLayout_3->setObjectName("verticalLayout_3");
        bouttonacceuil = new QPushButton(header);
        bouttonacceuil->setObjectName("bouttonacceuil");
        bouttonacceuil->setMinimumSize(QSize(0, 40));
        bouttonacceuil->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(bouttonacceuil);

        buttongererProduit = new QPushButton(header);
        buttongererProduit->setObjectName("buttongererProduit");
        buttongererProduit->setMinimumSize(QSize(0, 40));
        buttongererProduit->setStyleSheet(QString::fromUtf8(""));
        buttongererProduit->setAutoExclusive(true);

        verticalLayout_3->addWidget(buttongererProduit);

        buttongererClient = new QPushButton(header);
        buttongererClient->setObjectName("buttongererClient");
        buttongererClient->setMinimumSize(QSize(0, 35));
        buttongererClient->setStyleSheet(QString::fromUtf8(""));
        buttongererClient->setAutoExclusive(true);

        verticalLayout_3->addWidget(buttongererClient);

        pushButton_2 = new QPushButton(header);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(header);
        pushButton->setObjectName("pushButton");
        pushButton->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton);

        pushButton_3 = new QPushButton(header);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_3->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(header);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_4->setAutoExclusive(true);

        verticalLayout_3->addWidget(pushButton_4);


        horizontalLayout->addWidget(header);

        stackedwidgetmainbody = new QStackedWidget(centralwidget);
        stackedwidgetmainbody->setObjectName("stackedwidgetmainbody");
        stackedwidgetmainbody->setStyleSheet(QString::fromUtf8("ackground-color: #edf7e6;         /* Light green inside background */\n"
"border: 2px solid rgb(68, 150, 109); /* Green border */\n"
"border-radius: 15px;                /* Rounded corners with 15px radius */\n"
""));
        pageacceuil = new QWidget();
        pageacceuil->setObjectName("pageacceuil");
        label = new QLabel(pageacceuil);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 721, 511));
        label->setStyleSheet(QString::fromUtf8("border: 1 solid blue;\n"
"border-radius:25px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_4 = new QFrame(pageacceuil);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(199, 276, 750, 101));
        frame_4->setMinimumSize(QSize(750, 0));
        frame_4->setMaximumSize(QSize(900, 16777215));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedwidgetmainbody->addWidget(pageacceuil);
        pagegererproduits = new QWidget();
        pagegererproduits->setObjectName("pagegererproduits");
        verticalLayout_2 = new QVBoxLayout(pagegererproduits);
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidgetgererproduit = new QStackedWidget(pagegererproduits);
        stackedWidgetgererproduit->setObjectName("stackedWidgetgererproduit");
        stackedWidgetgererproduit->setMaximumSize(QSize(16777215, 16777215));
        stackedWidgetgererproduit->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"border:1 solid lightgreen;\n"
"border-radius:25px;\n"
"background-color: #edf7e6;\n"
"}"));
        pageafficherproduits = new QWidget();
        pageafficherproduits->setObjectName("pageafficherproduits");
        verticalLayout_5 = new QVBoxLayout(pageafficherproduits);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frame_5 = new QFrame(pageafficherproduits);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 50));
        frame_5->setMaximumSize(QSize(16777215, 70));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        menutri = new QComboBox(frame_5);
        menutri->addItem(QString());
        menutri->addItem(QString());
        menutri->addItem(QString());
        menutri->setObjectName("menutri");
        menutri->setMinimumSize(QSize(100, 0));
        menutri->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(menutri);


        verticalLayout_5->addWidget(frame_5);

        frame_7 = new QFrame(pageafficherproduits);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1 solid lightgreen;\n"
"border-radius:25px;\n"
"background-color: #edf7e6;\n"
"}\n"
""));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_6 = new QFrame(frame_7);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(180, 0));
        frame_6->setMaximumSize(QSize(350, 16777215));
        frame_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(50, 0));
        pushButton_6->setMaximumSize(QSize(16777215, 16777215));
        pushButton_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:1 solid lightgreen;\n"
"border-radius:25px;\n"
"background-color: #edf7e6;\n"
"}\n"
"QPushButton::hover{\n"
"background-color:rgb(135, 131, 255)\n"
"}"));

        verticalLayout_6->addWidget(pushButton_6);

        label_29 = new QLabel(frame_6);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("align-text:center;"));
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_29);

        inputnomproduit_2 = new QLineEdit(frame_6);
        inputnomproduit_2->setObjectName("inputnomproduit_2");
        inputnomproduit_2->setMinimumSize(QSize(100, 30));
        inputnomproduit_2->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_6->addWidget(inputnomproduit_2);

        label_24 = new QLabel(frame_6);
        label_24->setObjectName("label_24");
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_24);

        inputdateexpiration_2 = new QDateEdit(frame_6);
        inputdateexpiration_2->setObjectName("inputdateexpiration_2");
        inputdateexpiration_2->setMinimumSize(QSize(0, 30));

        verticalLayout_6->addWidget(inputdateexpiration_2);

        label_28 = new QLabel(frame_6);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_28);

        inputquantitedisponible_2 = new QLineEdit(frame_6);
        inputquantitedisponible_2->setObjectName("inputquantitedisponible_2");

        verticalLayout_6->addWidget(inputquantitedisponible_2);

        label_26 = new QLabel(frame_6);
        label_26->setObjectName("label_26");
        label_26->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_26);

        inputhumidite_2 = new QLineEdit(frame_6);
        inputhumidite_2->setObjectName("inputhumidite_2");

        verticalLayout_6->addWidget(inputhumidite_2);

        label_27 = new QLabel(frame_6);
        label_27->setObjectName("label_27");
        label_27->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_27);

        inputtemperature_2 = new QLineEdit(frame_6);
        inputtemperature_2->setObjectName("inputtemperature_2");

        verticalLayout_6->addWidget(inputtemperature_2);

        label_25 = new QLabel(frame_6);
        label_25->setObjectName("label_25");
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_25);

        inputdatedebut_2 = new QDateEdit(frame_6);
        inputdatedebut_2->setObjectName("inputdatedebut_2");

        verticalLayout_6->addWidget(inputdatedebut_2);


        horizontalLayout_2->addWidget(frame_6);

        tableauproduits = new QTableView(frame_7);
        tableauproduits->setObjectName("tableauproduits");
        tableauproduits->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:rgb(20, 5, 104);\n"
"color:white; }"));
        tableauproduits->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(tableauproduits);


        verticalLayout_5->addWidget(frame_7);

        stackedWidgetgererproduit->addWidget(pageafficherproduits);
        pageajoutproduit = new QWidget();
        pageajoutproduit->setObjectName("pageajoutproduit");
        label_11 = new QLabel(pageajoutproduit);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(190, 190, 101, 51));
        inputsupprimer = new QLineEdit(pageajoutproduit);
        inputsupprimer->setObjectName("inputsupprimer");
        inputsupprimer->setGeometry(QRect(310, 190, 181, 51));
        bouttonconfirmersupprimerproduit = new QPushButton(pageajoutproduit);
        bouttonconfirmersupprimerproduit->setObjectName("bouttonconfirmersupprimerproduit");
        bouttonconfirmersupprimerproduit->setGeometry(QRect(510, 190, 141, 51));
        label_12 = new QLabel(pageajoutproduit);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(90, 130, 371, 41));
        label_12->setStyleSheet(QString::fromUtf8("border:1 solid lightgreen;\n"
"border-radius:25px;\n"
"background-color: #edf7e6;"));
        stackedWidgetgererproduit->addWidget(pageajoutproduit);
        pagemodifierproduit = new QWidget();
        pagemodifierproduit->setObjectName("pagemodifierproduit");
        label_20 = new QLabel(pagemodifierproduit);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 120, 101, 31));
        label_21 = new QLabel(pagemodifierproduit);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(20, 80, 311, 20));
        idproduitmodif = new QLineEdit(pagemodifierproduit);
        idproduitmodif->setObjectName("idproduitmodif");
        idproduitmodif->setGeometry(QRect(110, 120, 201, 31));
        frame = new QFrame(pagemodifierproduit);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(450, 70, 171, 311));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");

        verticalLayout->addWidget(label_17);

        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");

        verticalLayout->addWidget(label_18);

        label_19 = new QLabel(frame);
        label_19->setObjectName("label_19");

        verticalLayout->addWidget(label_19);

        frame_2 = new QFrame(pagemodifierproduit);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(650, 70, 241, 311));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        intputnommodif = new QLineEdit(frame_2);
        intputnommodif->setObjectName("intputnommodif");

        verticalLayout_4->addWidget(intputnommodif);

        intputdateexpirationmodif = new QDateEdit(frame_2);
        intputdateexpirationmodif->setObjectName("intputdateexpirationmodif");

        verticalLayout_4->addWidget(intputdateexpirationmodif);

        inputquantitedisponiblemodif = new QLineEdit(frame_2);
        inputquantitedisponiblemodif->setObjectName("inputquantitedisponiblemodif");

        verticalLayout_4->addWidget(inputquantitedisponiblemodif);

        inputhumiditemodif = new QLineEdit(frame_2);
        inputhumiditemodif->setObjectName("inputhumiditemodif");

        verticalLayout_4->addWidget(inputhumiditemodif);

        inputtemperaturemodif = new QLineEdit(frame_2);
        inputtemperaturemodif->setObjectName("inputtemperaturemodif");

        verticalLayout_4->addWidget(inputtemperaturemodif);

        intputdatedebutmodif = new QDateEdit(frame_2);
        intputdatedebutmodif->setObjectName("intputdatedebutmodif");

        verticalLayout_4->addWidget(intputdatedebutmodif);

        pushButton_5 = new QPushButton(pagemodifierproduit);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(600, 400, 151, 29));
        pushButton_7 = new QPushButton(pagemodifierproduit);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(330, 120, 93, 29));
        stackedWidgetgererproduit->addWidget(pagemodifierproduit);
        pagestatistiques = new QWidget();
        pagestatistiques->setObjectName("pagestatistiques");
        label_22 = new QLabel(pagestatistiques);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(510, 160, 111, 121));
        stackedWidgetgererproduit->addWidget(pagestatistiques);

        verticalLayout_2->addWidget(stackedWidgetgererproduit);

        frameoperationsproduits = new QFrame(pagegererproduits);
        frameoperationsproduits->setObjectName("frameoperationsproduits");
        frameoperationsproduits->setMinimumSize(QSize(0, 50));
        frameoperationsproduits->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1 solid lightgreen;\n"
"border-radius:25px;\n"
"background-color: #edf7e6;\n"
"}"));
        frameoperationsproduits->setFrameShape(QFrame::Shape::StyledPanel);
        frameoperationsproduits->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameoperationsproduits);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        bouttonafficherproduits = new QPushButton(frameoperationsproduits);
        bouttonafficherproduits->setObjectName("bouttonafficherproduits");
        bouttonafficherproduits->setMinimumSize(QSize(120, 0));
        bouttonafficherproduits->setMaximumSize(QSize(120, 50));
        bouttonafficherproduits->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonafficherproduits);

        bouttonajouterproduit = new QPushButton(frameoperationsproduits);
        bouttonajouterproduit->setObjectName("bouttonajouterproduit");
        bouttonajouterproduit->setMinimumSize(QSize(100, 0));
        bouttonajouterproduit->setMaximumSize(QSize(120, 80));
        bouttonajouterproduit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonajouterproduit);

        bouttonmodifierproduit = new QPushButton(frameoperationsproduits);
        bouttonmodifierproduit->setObjectName("bouttonmodifierproduit");
        bouttonmodifierproduit->setMinimumSize(QSize(120, 0));
        bouttonmodifierproduit->setMaximumSize(QSize(120, 80));
        bouttonmodifierproduit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonmodifierproduit);

        bouttonsupprimerproduit = new QPushButton(frameoperationsproduits);
        bouttonsupprimerproduit->setObjectName("bouttonsupprimerproduit");
        bouttonsupprimerproduit->setMinimumSize(QSize(120, 0));
        bouttonsupprimerproduit->setMaximumSize(QSize(120, 80));
        bouttonsupprimerproduit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonsupprimerproduit);

        bouttonstatistiques = new QPushButton(frameoperationsproduits);
        bouttonstatistiques->setObjectName("bouttonstatistiques");
        bouttonstatistiques->setMinimumSize(QSize(120, 0));
        bouttonstatistiques->setMaximumSize(QSize(120, 80));
        bouttonstatistiques->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonstatistiques);

        bouttonhistorique = new QPushButton(frameoperationsproduits);
        bouttonhistorique->setObjectName("bouttonhistorique");
        bouttonhistorique->setMinimumSize(QSize(120, 0));
        bouttonhistorique->setMaximumSize(QSize(120, 80));
        bouttonhistorique->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{background-color:whitesmoke;\n"
"color:black;\n"
"border-radius:15px;\n"
"border:1 solid lightgray}\n"
"\n"
"QPushButton::hover{\n"
"background-color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:lightblue;\n"
"}"));

        horizontalLayout_3->addWidget(bouttonhistorique);


        verticalLayout_2->addWidget(frameoperationsproduits);

        stackedwidgetmainbody->addWidget(pagegererproduits);

        horizontalLayout->addWidget(stackedwidgetmainbody);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedwidgetmainbody->setCurrentIndex(1);
        stackedWidgetgererproduit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bouttonacceuil->setText(QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        buttongererProduit->setText(QCoreApplication::translate("MainWindow", "GERER PRODUIT", nullptr));
        buttongererClient->setText(QCoreApplication::translate("MainWindow", "GERER CLIENT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "G\303\251rer ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "G\303\251rer", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "G\303\251rer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "G\303\251rer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom de l'Application", nullptr));
        menutri->setItemText(0, QCoreApplication::translate("MainWindow", "tri", nullptr));
        menutri->setItemText(1, QCoreApplication::translate("MainWindow", "nom", nullptr));
        menutri->setItemText(2, QString());

        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "DateExpiration", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 Disponible", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Date Debut", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ID Produit", nullptr));
        bouttonconfirmersupprimerproduit->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Veuillez introduire l'ID Produit \303\240 supprimer :", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "ID Produit", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Veuillez introduire ID du produit \303\240 modifi\303\251", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Date Expiration", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 Disponible", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Temperature", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Date Debut", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "envoyer", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "STATISTIQUES", nullptr));
        bouttonafficherproduits->setText(QCoreApplication::translate("MainWindow", "Afficher Produits", nullptr));
        bouttonajouterproduit->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        bouttonmodifierproduit->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        bouttonsupprimerproduit->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        bouttonstatistiques->setText(QCoreApplication::translate("MainWindow", "Statistiques", nullptr));
        bouttonhistorique->setText(QCoreApplication::translate("MainWindow", "Historique", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
