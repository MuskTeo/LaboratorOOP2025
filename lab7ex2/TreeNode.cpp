#include "TreeNode.h"
#include <cstddef>

template<typename T>
TreeNode<T>::TreeNode(const T& val)
    : value(val), children(nullptr), childCount(0), capacity(0) {}

template<typename T>
TreeNode<T>::~TreeNode() {
    for (int i = 0; i < childCount; ++i) {
        delete children[i];
    }
    delete[] children;
}

template<typename T>
void TreeNode<T>::add_child(TreeNode<T>* child) {
    if (childCount == capacity) {
        int newCapacity = capacity == 0 ? 2 : capacity * 2;
        TreeNode<T>** newChildren = new TreeNode<T>*[newCapacity];
        for (int i = 0; i < childCount; ++i) {
            newChildren[i] = children[i];
        }
        delete[] children;
        children = newChildren;
        capacity = newCapacity;
    }
    children[childCount++] = child;
}
template class TreeNode<int>;