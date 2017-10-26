#include "MailManager.h"

/**
 * Constructor
 */
MailManager::MailManager() {
    this->FirstMail = nullptr;
}


/**
 * Agrega un mail al gestor
 * @param m mail a agregar
 */
void MailManager::addMail(email m) {
    //auto *NM = new <email> (m, FirstMail);
    //int cont = 0;
    email *aux = FirstMail;

    auto *NM = new <email> (m.id, m.from, m.to, m.date, m.subject, m.content, FirstMail); //NM = New Mail
    FirstMail = NM;
    aux->getNext();
}


/**
 * Elimina un mail del gestor
 * @param id identificador del mail a borrar
 */
void MailManager::deleteMail(unsigned long id) {
    email *aux =  FirstMail;

    while (aux->id != id -1 && aux->getNext() != nullptr){
        aux->getNext();
    }

    email*tmp = aux->getNext();
    aux->setNext(tmp->getNext());
    delete[] tmp;

}


/**
 * Devuelve una lista de mails ordenados por fecha
 * @return lista de mails ordenados
 */
vector<email> MailManager::getSortedByDate() {
    vector<email> ret;
    return ret;
}


/**
 * Devuelve una lista de mails oredenados por fecha que estan en el rango
 * desde - hasta
 * @param desde Fecha desde donde buscar
 * @param hasta Fecha hasta donde buscar
 * @return lista de mails ordenados
 */
vector<email> MailManager::getSortedByDate(string desde, string hasta) {
    vector<email> ret;
    return ret;
}


/**
 * Devuelve una lista de mails ordenados por Remitente
 * @return lista de mails ordenados
 */
vector<email> MailManager::getSortedByFrom() {
    vector<email> ret;
    return ret;
}


/**
 * Devuelve una lista de mails de un determinado remitente
 * @param from String con direccion del remitente
 * @return lista de mails del remitente
 */
vector<email> MailManager::getByFrom(string from) {
    vector<email> ret;
    return ret;
}


/**
 * Devuelve una lista de mails que contengan las palabras de 'query'
 * en su asunto o en su contenido
 * @param query String con palabra/s a buscar
 * @return lista de mails que contienen dicha/s palabra/s
 */
vector<email> MailManager::getByQuery(string query) {
    vector<email> ret;
    return ret;
}