#include <iostream>
#include "ListaSimple.h"
#include "iostream"

using namespace std;
int main() {
    cout << "Hello, World!" << endl;

    ListaSimple ls;


    //Obtener Cantidad
    cout << "Cantidad en lista: " << ls.obtenerCant() << endl;
    cout << "La suma de Elementos en lista: " << ls.sumaElementos() << endl;


    ls.addElement(1);
    ls.addElement(2);
    ls.addElement(3);
    ls.addElement(1);
    ls.addElement(3);
    ls.addElement(5);
    ls.addElement(10);

    //Obtener Cantidad
    cout << "Cantidad en lista: " << ls.obtenerCant() << endl;
    cout << "La suma de Elementos en lista: " << ls.sumaElementos() << endl;

    ls.printList();
    ls.printAddress();

    ls.deleteElement(10);

    ls.printList();
    ls.printAddress();

    //Obtener Cantidad
    cout << "Cantidad de Elementos en lista: " << ls.obtenerCant() << endl;
    cout << "La suma de Elementos en lista: " << ls.sumaElementos() << endl;

    
    return 0;
}
