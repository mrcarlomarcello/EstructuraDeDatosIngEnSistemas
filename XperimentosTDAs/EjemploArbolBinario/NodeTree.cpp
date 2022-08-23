//
// Created by shello on 06-14-22.
//

#include "NodeTree.h"

//Constructores
NodeTree::NodeTree() : value(-1), LNode(nullptr), RNode(nullptr){}

NodeTree::NodeTree(int _value, NodeTree* _LNode, NodeTree* _RNode)
                : value(_value), LNode(_LNode), RNode(_RNode){}


//Setters
void NodeTree::setValue(int _value)
{
    this->value=_value;
}
void NodeTree::setRNode(NodeTree* _RNode)
{
    this->RNode=_RNode;
}
void NodeTree::setLNode(NodeTree* _LNode)
{
    this->LNode = _LNode;
}

//Getters
int NodeTree::getValue()
{
    return this->value;
}
NodeTree* NodeTree::getRNode()
{
    return this->RNode;
}
NodeTree* NodeTree::getLNode()
{
    return this->LNode;
}
