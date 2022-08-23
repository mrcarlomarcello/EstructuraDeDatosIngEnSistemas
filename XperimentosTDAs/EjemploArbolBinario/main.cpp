#include <iostream>
#include "Tree.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Tree myLittleTree;

    myLittleTree.addTreeNode(60);
    myLittleTree.addTreeNode(20);
    myLittleTree.addTreeNode(85);
    myLittleTree.addTreeNode(45);
    myLittleTree.addTreeNode(21);
    myLittleTree.addTreeNode(30);
    myLittleTree.addTreeNode(66);
    myLittleTree.addTreeNode(20);
    myLittleTree.addTreeNode(92);
    myLittleTree.addTreeNode(20);

    myLittleTree.printTree();


    return 0;
}
