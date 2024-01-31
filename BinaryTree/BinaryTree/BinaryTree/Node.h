#pragma once

class BinaryTreeNode
{
	public:
		BinaryTreeNode(int);
		int theData;
	private:
		BinaryTreeNode* leftPtr;
		BinaryTreeNode* rightPTr;
};