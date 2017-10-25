#include <string>
#include <vector>
#include "email.h"

#ifndef MAILMANAGER_H
#define MAILMANAGER_H

using namespace std;


class MailManager {
private:
    // Propiedades y metodos privados de la clase

public:
    MailManager();

    // Métodos de uso
    void addMail(email m); //crea un email

    void deleteMail(unsigned long id); //borra el email

    vector<email> getSortedByDate(); //obtener los de una fecha puntual

    vector<email> getSortedByDate(string desde, string hasta); //obtener los que estan entre dos fechas

    vector<email> getSortedByFrom(); //los ordena por emisor

    vector<email> getByFrom(string from);  //busca los mails de un emisor

    vector<email> getByQuery(string query);  //query = consulta
};


#endif // MAILMANAGER_H

