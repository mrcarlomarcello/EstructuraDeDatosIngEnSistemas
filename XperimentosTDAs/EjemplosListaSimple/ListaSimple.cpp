//
// Created by shello on 06-01-22.
//

#include "ListaSimple.h"
#include "iostream"

using namespace std;

ListaSimple::ListaSimple() : start(nullptr){}

bool ListaSimple::isItEmpty() {
    return (this->start == nullptr);
}

void ListaSimple::addElement(int _value) {
    Node* newNode = new Node(_value, nullptr);

    if(isItEmpty())
        this->start = newNode;
    else{
        Node* actualNode = start;

        while(actualNode->getNextNode() != nullptr)
            actualNode = actualNode->getNextNode();

        actualNode->setNextNodeDir(newNode);
    }

    cout << "Nodo Agregado! " << endl;

}

void ListaSimple::printList() {
    if(isItEmpty())
    {
        cout << "No hay elementos en la lista" << endl;
        return;
    }else{
        Node* actualNode = start;
        while(actualNode != nullptr){
            cout << " [ " << actualNode->getValue() << " ] " ;
            actualNode =actualNode->getNextNode();
        }
        cout << endl;
    }


}

void ListaSimple::printAddress() {
    if(isItEmpty())
    {
        cout << "No hay elementos en la lista" << endl;
        return;
    }else{
        Node* actualNode = start;
        while(actualNode != nullptr){
            cout << " [" << actualNode << "] " ;
            actualNode =actualNode->getNextNode();
        }
        cout << endl;
    }


}

bool ListaSimple::deleteElement(int _value) {

    if(isItEmpty()){
        cout << "Imposible eliminar: Lista vacia!\n";
        return false;
    }

    Node* actualNode = this->start;
    Node* anteriorNode = nullptr;

    while(actualNode != nullptr)
    {
        if(actualNode->getValue() == _value)
        {
            if(actualNode == this->start)
            {
                start = start->getNextNode();
                delete actualNode;
            }
            else
            {
                anteriorNode->setNextNodeDir(actualNode->getNextNode());
                delete actualNode;
            }
            return true;
        }
        anteriorNode = actualNode;
        actualNode = actualNode->getNextNode();
    }
    cout << "Imposible eliminar. Nodo no existe." << endl;

    return false;
}

int ListaSimple::obtenerCant() {

    if(isItEmpty())
        return 0;

    int cont = 1;
    Node* actualNode = start;

    while(actualNode->getNextNode() != nullptr)
    {
        cont++;
        actualNode = actualNode->getNextNode();
    }

    return cont;
}

int ListaSimple::sumaElementos(){

    if(isItEmpty())
        return 0;

    int cant = 0;

    Node* actualNode = start;
    cant += actualNode->getValue();

    while(actualNode->getNextNode() != nullptr)
    {
        actualNode = actualNode->getNextNode();
        cant += actualNode->getValue();
    }

    return cant;
}