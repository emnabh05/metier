#include "connection.h"

Connection::Connection() {}

bool Connection::createconnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("source2a33"); // Nom de la source de données
    db.setUserName("emna"); // Nom de l'utilisateur
    db.setPassword("emna2004"); // Mot de passe de l'utilisateur

    if (db.open()) {
        test = true; // Connexion réussie
    }

    return test;
}


