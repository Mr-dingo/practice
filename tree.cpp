#pragma once

#include <iostream>
#include <vector>
#include "tree.h"

template <typename T>
Node<T>::Node():m_data(T()),m_left(nullptr),m_right(nullptr),m_parent(nullptr){

}
template <typename T>
Node<T>::Node(T t):m_data(t),m_left(nullptr),m_right(nullptr),m_parent(nullptr){

}
template <typename T>
Node<T>::~Node(){

}
template <typename T>
void Node<T>::makeLeftNode(T arg){
    Node<T> *new_left_node = new Node<T>(arg);
    new_left_node->m_parent=this;
    m_left=new_left_node;
}
template <typename T>
void Node<T>::makeRightNode(T arg){
    Node<T> *new_right_node = new Node<T>(arg);
    new_right_node->m_parent=this;
    m_right=new_right_node;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Tree<T>& tree){
    using treeQueue = std::vector<Tree<T> >;
    
    return os;
}
template <typename T>
BSTree<T>::BSTree()
{
    m_root=nullptr;
}
template <typename T>
BSTree<T>::~BSTree(){
}
template <typename T>
bool insert(T arg){
}
template <typename T>
bool remove(T arg){
}
template <typename T>
bool find(T arg){
}
template <typename T>
bool visit(T arg){
}
template <typename T>
bool preorder(T arg){
}
