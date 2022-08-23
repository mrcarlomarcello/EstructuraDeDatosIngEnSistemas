//
// Created by shello on 06-07-22.
//

#include "Node.h"

//Constructores!!!
Node::Node() : value(-1), nextNode(nullptr) , prevNode(nullptr){
}
Node::Node(int _value, Node* _nextNode, Node* _prevNode){
    this->value=_value;
    this->nextNode = _nextNode;
    this->prevNode = _prevNode;
}

//Setters!!
void Node::setValue(int _value){
    this->value=_value;
}
void Node::setNextNode(Node* _nextNode){
    this->nextNode = _nextNode;
}
void Node::setPrevNode(Node* _prevNode){
    this->prevNode = _prevNode;
}

//Getters!!
int Node::getValue(){
    return this->value;
}
Node* Node::getNextNode(){
    return this->nextNode;
}
Node* Node::getPrevNode(){
    return this->prevNode;
}
