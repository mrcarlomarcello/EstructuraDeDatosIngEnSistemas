//
// Created by shello on 06-14-22.
//
#pragma once

#ifndef TREE_H
#define TREE_H

#include "NodeTree.h"

class Tree {

private:
    NodeTree* root;
    bool isEmpty();

    //funciones recursivas "utilitarias" -> usamos *rec* para recursivo/revursive
    NodeTree* addTreeNodeRec(NodeTree*, int);
    void printTreeRec(NodeTree*);



public:

    //constructor
    Tree();

    //functions
    void addTreeNode(int);
    NodeTree* searchNode(int);

    void printTree();

};


#endif //TREE_H
