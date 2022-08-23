//
// Created by shello on 06-14-22.
//

#include "Tree.h"
#include "NodeTree.h"
#include "iostream"

using namespace std;

Tree::Tree() {
    this->root= nullptr;
}

bool Tree::isEmpty()
{
    return this->root== nullptr;
}

void Tree::addTreeNode(int _value)
{
    //Funcion recursiva
    this->root = addTreeNodeRec(this->root, _value);
}

NodeTree* Tree::addTreeNodeRec(NodeTree* _root, int _value)
{
    if(_root == nullptr)
    {
        // NOTE: se puede hacer con dos lineas de codigo!!!!
        //NodeTree* newNode = new NodeTree(_value, nullptr, nullptr);
        //_root = newNode;

        _root = new NodeTree(_value, nullptr, nullptr);

    }else
        //Si es menor lo envio a la Izquierda LNode
        if(_value < _root->getValue())
        {
            _root->setLNode(addTreeNodeRec(_root->getLNode(), _value));
        }else
            //Si es mayor lo envio a la Derecha RNode
            if(_value > _root->getValue())
            {
                _root->setRNode(addTreeNodeRec(_root->getRNode(), _value));
            }//agregado by me
            else if(_value == _root->getValue())
                cout << "No agregamos este nodo porque el valor " << _value << " ya existe!" << endl;

    return _root;
}

void Tree::printTree()
{
    cout<<endl;
    printTreeRec(this->root);
}

void Tree::printTreeRec(NodeTree* _root)
{
    if(_root== nullptr)
        return;

    cout << "[ " << _root->getValue() << " ]" ;

    printTreeRec(_root->getLNode());
    printTreeRec(_root->getRNode());

}