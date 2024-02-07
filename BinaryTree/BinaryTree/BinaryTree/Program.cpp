#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
    BinaryTree tree;

    tree.InsertNode(tree.root, 5);
    tree.InsertNode(tree.root, 3);
    tree.InsertNode(tree.root, 8);
    tree.InsertNode(tree.root, 2);
    tree.InsertNode(tree.root, 4);
    tree.InsertNode(tree.root, 7);
    tree.InsertNode(tree.root, 9);

    cout << "In-Order Traversal: ";
    tree.InOrderTraversal(tree.root);
    cout << endl;

    return 0;
}