//
// Created by shello on 06-07-22.
//
#pragma once

#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H

#include "Node.h"

using namespace std;

class ListaCircularDoble {


private:
    //Variables
    Node* first;
    Node* last;

    int internalCounter;
    int maxNode;
    int pruebaDeEntero;
    float variableExtra;
    double variableDobleExtra;

    //Funciones
    bool isEmpty();

public:

    //constructor
    ListaCircularDoble();
    ListaCircularDoble(int);
    //constructor pendiente
    //ahora llevamos un int de capacidad maxima en el nodo
    //no Permitir agregar nodos despues de su máxima capacidad

    //funciones
    void addElement(int);
    bool deleteElement(int);
    void printList();

    //Funciones Pendientes (pos, valor del nodo)
    void insertElementAt(int, int);
    int returnCounter();

};


#endif //LISTACIRCULARDOBLE_H
