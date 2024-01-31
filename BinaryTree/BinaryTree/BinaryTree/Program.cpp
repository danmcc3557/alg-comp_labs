#include "Node.h"
#include "BinaryTree.h"
#include <iostream>

int main()
{
	BinaryTree tree;
	tree.InsertNode(2);
	tree.InsertNode(4);
	tree.InsertNode(4);
	tree.InsertNode(1);
	tree.InsertNode(9);
	std::cout << tree.toString() << std::endl;
	return 0;
}