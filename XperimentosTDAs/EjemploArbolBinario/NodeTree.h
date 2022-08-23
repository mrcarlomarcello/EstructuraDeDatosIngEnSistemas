//
// Created by shello on 06-14-22.
//
#pragma once

#ifndef NODETREE_H
#define NODETREE_H


class NodeTree {

private:
    int value;
    NodeTree* RNode;
    NodeTree* LNode;

public:
    //constructor
    NodeTree();
    NodeTree(int, NodeTree*, NodeTree*);

    //funciones
    void setValue(int);
    void setRNode(NodeTree*);
    void setLNode(NodeTree*);

    int getValue();
    NodeTree* getRNode();
    NodeTree* getLNode();
};


#endif //NODETREE_H
