#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree() 
{
    root = nullptr;
}

void BinaryTree::InsertNode(BinaryTreeNode*& currentNode, int toInsert)
{
    if (currentNode == nullptr)
    {
        currentNode = new BinaryTreeNode(toInsert);
    }
    else
    {
        if (toInsert < currentNode->data)
        {
            InsertNode(currentNode->left, toInsert);
        }
        else if (toInsert > currentNode->data)
        {
            InsertNode(currentNode->right, toInsert);
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

void BinaryTree::DeleteNode(BinaryTreeNode* currentNode, int toDelete)
{
    if (toDelete > currentNode->data)
    {
        DeleteNode(currentNode->right, toDelete);
    }
    else if (toDelete < currentNode->data)
    {
        DeleteNode(currentNode->left, toDelete);
    }
    else 
    {
        if (currentNode->left == nullptr && currentNode->right == nullptr)
        {
            delete currentNode;
            currentNode = nullptr;
        }
        else if (currentNode->left != nullptr && currentNode->right != nullptr)
        {
            if (currentNode->left->data > toDelete)
            {
                
            else
            {
                
            }
        }
        else 
        {
            BinaryTreeNode* childNode = nullptr;

            if (currentNode->left != nullptr)
            {
                childNode = currentNode->left;
            }
            else
            {
                childNode = currentNode->right;
            }
            currentNode = childNode;
        }
        }
    }
}