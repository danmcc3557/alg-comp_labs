#pragma once
#include "Node.h""
#include <iostream>



class BinaryTree
{
	public:
		BinaryTree();
		void InsertNode(int);
		std::string toString();
	private:
		BinaryTreeNode* root;

};