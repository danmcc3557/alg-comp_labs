#pragma once

class BinaryTreeNode
{
	public:
		BinaryTreeNode(int theData);
	private:
		BinaryTreeNode* leftPtr;
		int data;
		BinaryTreeNode* rightPTr;
};