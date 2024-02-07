#pragma once
#include "Node.h"

class BinaryTree 
{
public:
    BinaryTreeNode* root;

    BinaryTree();

    void InsertNode(BinaryTreeNode*& currentNode, int value);

    void InOrderTraversal(BinaryTreeNode* currentNode);
};
