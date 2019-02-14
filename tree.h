#pragma once
#include <iostream>

template <typename T>
class Node{
public:
    Node();
    Node(T t);
    ~Node();
    void makeLeftNode(T arg);
    void makeRightNode(T arg);
private:

private:
    T m_data;
    Node * m_left;
    Node * m_right;
    Node * m_parent;
};

template <typename T>
class Tree{
public:
    friend std::ostream& operator <<(std::ostream& os, const Tree<T>& tree);
    virtual bool insert(T arg)=0;
    virtual bool remove(T arg)=0;
    virtual Node<T>* find(T arg)=0;

};

template <typename T>
class BSTree : public Tree<T>{
public:
    BSTree();
    ~BSTree();
    virtual bool insert(T arg);
    virtual bool remove(T arg);
    virtual Node<T>* find(T arg);

private:
    void visit();
    void preorder();
private:
    Node<T> * m_root;
    Node<T> * m_current_node;

};