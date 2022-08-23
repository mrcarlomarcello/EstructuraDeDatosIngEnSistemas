
#pragma once

#ifndef NODE_H
#define NODE_H


class Node {

private:
    int value;
    Node* nextNode;

public:
    Node();
    Node(int, Node*);
    void setNodeValue(int);
    void setNextNodeDir(Node*);

    int getValue();
    Node* getNextNode();
};


#endif //NODE_H
