//
// Created by shello on 06-07-22.
//

#include "ListaCircularDoble.h"
#include"iostream"

//constructor
ListaCircularDoble::ListaCircularDoble(){
    this->first = nullptr;
    this->last = nullptr;
    this->internalCounter=0;
    this->maxNode=-1;
}

ListaCircularDoble::ListaCircularDoble(int _max){
    this->first = nullptr;
    this->last = nullptr;
    this->internalCounter=0;
    this->maxNode= _max;
}

bool ListaCircularDoble::isEmpty() {
    return this->first== nullptr;
}

void ListaCircularDoble::addElement(int _value){

    if(this->internalCounter==this->maxNode){
        cout << "La lista está llena" << endl;
        cout << "el valor de " << _value << " no fue agregado!" << endl;
        return;
    }

    Node* newNode = new Node(_value, nullptr, nullptr);

    if(isEmpty()){
        first = newNode;
        last = newNode;
        first->setPrevNode(last);
        last->setNextNode(first);
    }
    else{
        newNode->setPrevNode(last);
        newNode->setNextNode(first);
        last->setNextNode(newNode);

        last = newNode;
        first->setPrevNode(last);
    }
    //incrementamos el counter
    this->internalCounter++;
}

bool ListaCircularDoble::deleteElement(int _value){
    if(isEmpty())
        return false;

    Node * actualNode = this->first;

    do{
        if(actualNode->getValue() == _value)
        {
            if(actualNode == this->first && actualNode ==this->last){
                first = last = nullptr;
            }else
            if(actualNode == this->first)
            {
                this->first = actualNode->getNextNode();
                this->first->setPrevNode(last);
                this->last->setNextNode(first);
            }
            else if(actualNode == this->last)
            {
                this->last = this->last->getPrevNode();
                this->last->setNextNode(this->first);
                this->first->setPrevNode(last);
            }
            else{
                actualNode->getPrevNode()->setNextNode(actualNode->getNextNode());
                actualNode->getNextNode()->setPrevNode(actualNode->getPrevNode());
            }
            delete actualNode;
            //reducimos el internalcounter
            this->internalCounter--;
            return true;
        }
        actualNode =actualNode->getNextNode();

    }while (actualNode != this->first);

    return false;
}

void ListaCircularDoble::printList(){
    if(isEmpty()){
        cout << "Empty list" << endl;
        return;
    }

    Node* actualNode = this->first;

    do{
        cout << " [ " << actualNode->getValue() << " ] ";
        actualNode = actualNode->getNextNode();
    }while(actualNode != first);

    cout << endl;
}

int ListaCircularDoble::returnCounter(){
    return this->internalCounter;
}

void ListaCircularDoble::insertElementAt(int _pos, int _value){

    if(this->internalCounter==this->maxNode || _pos >= this->internalCounter){
        cout << "La lista está llena o elegiste una posición no correcta." << endl;
        cout << "el valor de " << _value << " no fue agregado!" << endl;
        return;
    }

    Node* newNode = new Node(_value, nullptr, nullptr);
    Node* actual = this->first;
    int positionCounter = 0;

    while(positionCounter != _pos){
        actual = actual->getNextNode();
        positionCounter++;
    }

    if(positionCounter == _pos){
        newNode->setNextNode(actual);
        newNode->setPrevNode(actual->getPrevNode());
        actual->getPrevNode()->setNextNode(newNode);
        actual->setPrevNode(newNode);

        //incrementamos el counter
        this->internalCounter++;
    }
}
