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

    NodoArbol(email m, unsigned long int id);

    NodoArbol(NodoArbol *izq, NodoArbol *der);

    NodoArbol(NodoArbol *izq, NodoArbol *der, const email &dato);

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
//        if (der != NULL) {
//            der->print(true, identacion + (esDerecho ? "     " : "|    "));
//        }
//        cout << identacion;
//        if (esDerecho) {
//            cout << " /";
//        } else {
//            cout << " \\";
//        }
//        cout << "-- ";
//        cout << dato << endl;
//        if (izq != NULL) {
//            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
//        }
//    }
};




#endif //HASHENTRY_H