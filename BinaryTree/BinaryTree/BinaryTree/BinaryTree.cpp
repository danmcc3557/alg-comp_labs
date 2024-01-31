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
    else
    {
        BinaryTreeNode* current = root;
        while (true)
        {
            if (value < current->theData)
            {
                if (current->leftPtr == nullptr)
                {
                    current->leftPtr = toInsert;
                    break;
                }
                else
                {
                    current = current->leftPtr;
                }
            }
            else if (value > current->theData)
            {
                if (current->rightPtr == nullptr)
                {
                    current->rightPtr = toInsert;
                    break;
                }
                else
                {
                    current = current->rightPtr;
                }
            }
            else
            {
                break;
            }
        }
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
        std::string output = "Root value: " + std::to_string(root->theData) + "\nLeft value:" + std::to_string(root->leftPtr->theData) + "\nRight value:" + std::to_string(root->rightPtr->theData);
        return output;
    }
}