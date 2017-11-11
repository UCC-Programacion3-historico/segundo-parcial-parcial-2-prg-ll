#ifndef HASHMAP_H
#define HASHMAP_H

#include "Nodo.h"

class ArbolBinario {
private:
    NodoArbol *raiz;
public:
    ArbolBinario();

    void put(email m, unsigned long int id);

    email search(unsigned long int id);

    void remover(unsigned long int id);

    void preorder();

    void inorder();

    void postorder();

    ~ArbolBinario();

    bool esVacio();

    void print();

};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */

ArbolBinario::ArbolBinario() {
    raiz = NULL;
}


/**
 * Destructor del Arbol
 */

ArbolBinario::~ArbolBinario() {

}


/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */

email ArbolBinario::search(unsigned long int id) {

    if (raiz == NULL) {
        throw 3;
    } else {
        return raiz->search(id);
    }
}


/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */

void ArbolBinario::put(email m, unsigned long int id) {
    if (raiz == NULL) {
        raiz = new NodoArbol(m, id);
    } else {
        raiz->put(m, id);
    }
}


/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */

void ArbolBinario::remover(unsigned long int id) {
    email *tmp;

    tmp = search(id);

    NodoArbol *aux;
    if (raiz == NULL) {
        throw 6;
    } else {

        aux = raiz;
        raiz = raiz->remover(tmp);
        if (raiz != aux)
            delete aux;
    }
}


/**
 * Informa si un árbol esta vacío
 * @return
 */

bool ArbolBinario::esVacio() {
    return raiz == NULL;
}


/**
 * Recorre un árbol en preorden
 */

void ArbolBinario::preorder() {
    if (raiz != NULL) {
        raiz->preorder();
    }
}


/**
 * Recorre un árbol en orden
 */

void ArbolBinario::inorder() {
    if (raiz != NULL) {
        raiz->inorder();
    }
}


/**
 * Recorre un árbol en postorden
 */

void ArbolBinario::postorder() {
    if (raiz != NULL) {
        raiz->postorder();
    }
}


/**
 * Muestra un árbol por consola
 */

void ArbolBinario::print() {

    if (raiz != NULL) {
        raiz->print(false, "");
    }
}


#endif //HASHMAP_H