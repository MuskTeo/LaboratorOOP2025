#include <iostream>
#include "Tree.h"

bool cmp(const int& a, const int& b) {
    return a == b;
}

bool less_than(const int& a, const int& b) {
    return a < b;
}

int main() {
    Tree<int> tree;
    TreeNode<int>* root = tree.add_node(nullptr, 10);
    TreeNode<int>* c1 = tree.add_node(root, 5);
    TreeNode<int>* c2 = tree.add_node(root, 15);

    tree.insert(c1, 0, 3);
    tree.insert(c1, 1, 7);
    tree.insert(c2, 0, 12);
    tree.insert(c2, 1, 18);

    TreeNode<int>* found = tree.find(root, 7, cmp);
    if (found) std::cout << "Found node with value 7\n";

    tree.sort(c2, less_than);
    std::cout << "Children of node 15 after sort: ";
    for (int i = 0; i < c2->childCount; ++i) {
        std::cout << c2->children[i]->value << " ";
    }
    std::cout << "\n";

    std::cout << "Total nodes in tree: " << tree.count() << "\n";

    return 0;
}
