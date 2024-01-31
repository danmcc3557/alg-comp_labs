#pragma once

class BinaryTreeNode
{
	public:
		BinaryTreeNode(int);
	private:
		BinaryTreeNode* leftPtr;
		int theData;
		BinaryTreeNode* rightPTr;
};