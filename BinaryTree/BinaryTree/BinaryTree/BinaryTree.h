#pragma once
#include "Node.h"

class BinaryTree 
{
public:
    BinaryTreeNode* root;

    BinaryTree();

    void InsertNode(BinaryTreeNode*& currentNode, int toInsert);

    void InOrderTraversal(BinaryTreeNode* currentNode);

    void DeleteNode(BinaryTreeNode* currentNode, int toDelete);
};
