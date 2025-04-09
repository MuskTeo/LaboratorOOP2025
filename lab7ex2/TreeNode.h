#ifndef TREENODE_H
#define TREENODE_H

#include <cstddef>

template<typename T>
class TreeNode {
public:
    T value;
    TreeNode<T>** children;
    int childCount;
    int capacity;

    TreeNode(const T& val)
        : value(val), children(nullptr), childCount(0), capacity(0) {}

    ~TreeNode() {
        for (int i = 0; i < childCount; ++i)
            delete children[i];
        delete[] children;
    }

    void add_child(TreeNode<T>* child) {
        if (childCount == capacity) {
            int newCapacity = capacity == 0 ? 2 : capacity * 2;
            TreeNode<T>** newChildren = new TreeNode<T>*[newCapacity];
            for (int i = 0; i < childCount; ++i)
                newChildren[i] = children[i];
            delete[] children;
            children = newChildren;
            capacity = newCapacity;
        }
        children[childCount++] = child;
    }
};

#endif // TREENODE_H
