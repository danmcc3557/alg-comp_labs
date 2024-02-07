#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree() 
{
    root = nullptr;
}

void BinaryTree::InsertNode(BinaryTreeNode*& currentNode, int value)
{
    if (currentNode == nullptr)
    {
        currentNode = new BinaryTreeNode(value);
    }
    else
    {
        if (value < currentNode->data)
        {
            InsertNode(currentNode->left, value);
        }
        else if (value > currentNode->data)
        {
            InsertNode(currentNode->right, value);
        }
    }
}

void BinaryTree::InOrderTraversal(BinaryTreeNode* currentNode) 
{
    if (currentNode != nullptr) 
    {
        InOrderTraversal(currentNode->left);
        cout << currentNode->data << " ";
        InOrderTraversal(currentNode->right);
    }
}