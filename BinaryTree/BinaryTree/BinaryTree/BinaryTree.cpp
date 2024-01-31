#include "BinaryTree.h"
#include "Node.h"
#include <iostream>
#include <string>


BinaryTree::BinaryTree()
{
    root = nullptr;
}

void BinaryTree::InsertNode(int value)
{
    BinaryTreeNode* toInsert = new BinaryTreeNode(value);
    if (root == nullptr)
    {
        root = toInsert;
    }

}


std::string BinaryTree::toString()
{
    if (root == nullptr)
    {
        return "Empty tree";
    }
    else
    {
        return "Root value: " + std::to_string(root->theData);
    }
}