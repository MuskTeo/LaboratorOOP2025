
#include "Tree.h"

#include <cstddef>

template<typename T>
Tree<T>::Tree() : root(nullptr) {}

template<typename T>
Tree<T>::~Tree() {
    delete root;
}

template<typename T>
TreeNode<T>* Tree<T>::add_node(TreeNode<T>* parent, const T& value) {
    TreeNode<T>* node = new TreeNode<T>(value);
    if (!parent) root = node;
    else parent->add_child(node);
    return node;
}

template<typename T>
TreeNode<T>* Tree<T>::get_node(TreeNode<T>* parent) {
    return parent ? parent : root;
}

template<typename T>
void Tree<T>::delete_node(TreeNode<T>* node) {
    if (node == root) root = nullptr;
    delete node;
}

template<typename T>
TreeNode<T>* Tree<T>::find(TreeNode<T>* node, const T& val, bool (*cmp)(const T&, const T&)) {
    if (!node) return nullptr;
    if (cmp(node->value, val)) return node;
    for (int i = 0; i < node->childCount; ++i) {
        TreeNode<T>* found = find(node->children[i], val, cmp);
        if (found) return found;
    }
    return nullptr;
}

template<typename T>
void Tree<T>::insert(TreeNode<T>* parent, int index, const T& value) {
    if (!parent || index < 0 || index > parent->childCount) return;

    TreeNode<T>* node = new TreeNode<T>(value);
    TreeNode<T>** newChildren = new TreeNode<T>*[parent->capacity + 1];

    for (int i = 0; i < index; ++i)
        newChildren[i] = parent->children[i];

    newChildren[index] = node;

    for (int i = index; i < parent->childCount; ++i)
        newChildren[i + 1] = parent->children[i];

    delete[] parent->children;
    parent->children = newChildren;
    ++parent->childCount;
    ++parent->capacity;
}

template<typename T>
void Tree<T>::sort(TreeNode<T>* node, bool (*cmp)(const T&, const T&)) {
    if (!node || node->childCount < 2) return;

    for (int i = 0; i < node->childCount - 1; ++i) {
        for (int j = i + 1; j < node->childCount; ++j) {
            bool shouldSwap = cmp ?
                cmp(node->children[j]->value, node->children[i]->value) :
                (node->children[j]->value < node->children[i]->value);

            if (shouldSwap) {
                TreeNode<T>* temp = node->children[i];
                node->children[i] = node->children[j];
                node->children[j] = temp;
            }
        }
    }
}

template<typename T>
int Tree<T>::count(TreeNode<T>* node) {
    if (!node) node = root;
    if (!node) return 0;

    int total = node->childCount;
    for (int i = 0; i < node->childCount; ++i) {
        total += count(node->children[i]);
    }
    return total;
}
template class Tree<int>;
