
#include "Node.h"

Node::Node():  value(-1), nextNode(nullptr){}

Node::Node(int _value, Node* _nextNode)
    : value(_value), nextNode(_nextNode){}

void Node::setNodeValue(int _value) {
    this->value = _value;
}

void Node::setNextNodeDir(Node* _nextNode) {
    this->nextNode = _nextNode;
}

int Node::getValue() {
    return this->value;
}

Node* Node::getNextNode() {
    return this->nextNode;
}