#ifndef HASHENTRY_H
#define HASHENTRY_H

#include <iostream>
using namespace std;

#include "email.cpp"


class NodoArbol {
private:

    NodoArbol *izq, *der;
    email dato;
public:

    NodoArbol(email dato, unsigned long int id);

    email getDato() const;

    void setDato(email dato);

    void put(email d);

    void put(NodoArbol *nodo);

    email search(unsigned long int id);

    NodoArbol *remover(email param);

    void preorder();

    void inorder();

    void postorder();

    void print(bool esDerecho, string identacion) {
        if (der != NULL) {
            der->print(true, identacion + (esDerecho ? "     " : "|    "));
        }
        cout << identacion;
        if (esDerecho) {
            cout << " /";
        } else {
            cout << " \\";
        }
        cout << "-- ";
        cout << dato << endl;
        if (izq != NULL) {
            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
        }
    }
};



NodoArbol::NodoArbol(email dato, unsigned long int id) : dato(dato) {
    dato.id = id;
    izq = NULL;
    der = NULL;
}



void NodoArbol::put(email m, unsigned long int id) {

    if (m.date == dato.date)
        throw 1;
    else if (m.date < dato.date) { // va a la izq
        if (izq == NULL)
            izq = new NodoArbol(m, id);
        else
            izq->put(m);
    } else { // va a la der
        if (der == NULL)
            der = new NodoArbol(m, id);
        else
            der->put(m);
    }
}

/*template<class T>
void NodoArbol::put(NodoArbol *nodo) {

    if (nodo->getDato() == dato)
        throw 1;
    else if (nodo->getDato() < dato) { // va a la izq
        if (izq == NULL)
            izq = nodo;
        else
            izq->put(nodo);
    } else { // va a la der
        if (der == NULL)
            der = nodo;
        else
            der->put(nodo);
    }
}
*/

email NodoArbol::search(unsigned long int id) {
    if (id == dato.id) {
        return dato;
    } else if (id < dato.id) {
        if (izq == NULL)
            throw 3;
        else
            return izq->search(id);
    } else {
        if (der == NULL)
            throw 3;
        else
            return der->search(id);
    }
}


NodoArbol *NodoArbol::remover(email d) {
    NodoArbol *aux;
    if (d == dato) {
        if (der != NULL) {
            der->put(izq);
            return der;
        }
        return izq;
    } else if (d < dato) {
        if (izq == NULL)
            throw 3;
        else {
            aux = izq;
            izq = izq->remover(d);
            if (izq != aux)
                delete aux;
        }
    } else {
        if (der == NULL)
            throw 3;
        else {
            aux = der;
            der = der->remover(d);
            if (der != aux)
                delete aux;
        }
    }
    return this;
}


email NodoArbol::getDato() const {
    return dato;
}


void NodoArbol::setDato(email dato) {
    NodoArbol::dato = dato;
}


void NodoArbol::preorder() {
    cout << dato << ", ";
    if (izq != NULL) izq->preorder();
    if (der != NULL) der->preorder();
}


void NodoArbol::inorder() {
    if (izq != NULL) izq->inorder();
    cout << dato << ", ";
    if (der != NULL) der->inorder();
}


void NodoArbol::postorder() {
    if (izq != NULL) izq->postorder();
    if (der != NULL) der->postorder();
    cout << dato << ", ";
}


#endif //HASHENTRY_H