//
// Created by shello on 06-07-22.
//

#ifndef NODE_H
#define NODE_H

class Node {

private:
    //estoy cambiando las variables a como las uso en python
    int value;
    int globalCounter;
    Node* nextNode;
    Node* prevNode;

public:
    Node();
    Node(int, Node*, Node*);

    void setValue(int);
    void setNextNode(Node*);
    void setPrevNode(Node*);

    int getValue();
    Node* getNextNode();
    Node* getPrevNode();
};


#endif //NODE_H
