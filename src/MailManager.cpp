#include "MailManager.h"

/**
 * Constructor
 */
MailManager::MailManager() {

}


/**
 * Agrega un mail al gestor
 * @param m mail a agregar
 */
void MailManager::addMail(email m) {

}

/**
 * Elimina un mail del gestor
 * @param id identificador del mail a borrar
 */
void MailManager::deleteMail(unsigned long id) {

}

/**
 * Devuelve una lista de mails ordenados por fecha
 * @return
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
 * @return
 */
vector<email> MailManager::getSortedByDate(string desde, string hasta) {
    vector<email> ret;
    return ret;
}

/**
 * Devuelve una lista de mails ordenados por Remitente
 * @return
 */
vector<email> MailManager::getSortedByFrom() {
    vector<email> ret;
    return ret;
}


/**
 * Devuelve una lista de mails de un determinado destinatario
 * @param from
 * @return
 */
vector<email> MailManager::getByFrom(string from) {
    vector<email> ret;
    return ret;
}

/**
 * Devuelve una lista de mails que contengan las palabras de 'query'
 * en su asunto o en su contenido
 * @param query
 * @return
 */
vector<email> MailManager::getByQuery(string query) {
    vector<email> ret;
    return ret;
}