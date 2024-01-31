#include "Node.h"
#include "BinaryTree.h"
#include <iostream>

int main()
{
	BinaryTree tree;
	tree.InsertNode(2);
	std::cout << tree.toString() << std::endl;
	return 0;
}