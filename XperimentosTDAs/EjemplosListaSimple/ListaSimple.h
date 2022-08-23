//
// Created by shello on 06-01-22.
//
#pragma once
#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Node.h"



class ListaSimple {
private:
    Node* start;
    bool isItEmpty();
    bool disordered;

public:
    ListaSimple();
    void addElement(int);
    void printList();
    void printAddress();

    bool deleteElement(int);

    // returna la cantidad de elementos de la lista
    int obtenerCant();

    // returna la suma de los elementos
    int sumaElementos();

    //Ordena la lista
    //No la pidio

    void ordenarLista();

    //Agrega un nuevo elemento de forma ordenada
    //considerando que viene ordenada y lista vacia
    void agregarElementoOrdenado(int);




};


#endif //LISTASIMPLE_H
