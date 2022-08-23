#include <iostream>
#include "ListaCircularDoble.h"


int main() {

    std::cout << "Hello, World!" << std::endl;

    ListaCircularDoble list;

    list.printList();
    cout << "Tamaño de la Lista " << list.returnCounter() << endl;

    list.addElement(10);
    list.addElement(11);
    list.addElement(12);
    list.addElement(13);
    list.addElement(14);
    list.addElement(15);

    list.printList();
    cout << "Tamaño de la Lista " << list.returnCounter() << endl;

    list.deleteElement(11);

    list.printList();
    cout << "Tamaño de la Lista " << list.returnCounter() << endl;

    list.deleteElement(10);
    list.deleteElement(12);
    list.deleteElement(13);

    list.printList();
    cout << "Tamaño de la Lista " << list.returnCounter() << endl;

    list.deleteElement(14);
    list.deleteElement(15);

    list.printList();
    cout << "Tamaño de la Lista " << list.returnCounter() << endl;

    //Inicio de Segunda parte
    ListaCircularDoble* listaConTope = new ListaCircularDoble(5);
    //ListaCircularDoble listaConTope;

    cout << "Tamaño de la Lista 2 - " << listaConTope->returnCounter() << endl;

    listaConTope->addElement(1);
    listaConTope->addElement(2);
    listaConTope->addElement(3);
    listaConTope->addElement(4);
    listaConTope->addElement(5);
    listaConTope->addElement(6);

    listaConTope->printList();
    cout << "Tamaño de la Lista 2 - " << listaConTope->returnCounter() << endl;

    cout << "Esta lista tiene " << listaConTope->returnCounter() << " Elementos " << endl;

    listaConTope->deleteElement(4);
    listaConTope->insertElementAt(3,6);

    cout << "Borre el elemento 4 y en la posicion (3) ingresé el 6" << endl;
    listaConTope->printList();
    cout << "Tamaño de la Lista 2 - " << listaConTope->returnCounter() << endl;

    return 0;
}
