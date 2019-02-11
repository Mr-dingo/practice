#pragma once

template <typename T>
class Node{
public:
    Node();
    ~Node();
    void add(T t);    
    void remove();
private:
    void setLeft(T arg);
    void setRight(T arg);
private:
    T m_data;
    Node * m_left;
    Node * m_right;
    Node * m_parent;
};


template <typename T>
class Tree{
public:
    Tree();
    ~Tree();
    void insert(T arg);
    void remove(T arg);
    void find(T arg);

private:
    
private:
    Node<T> * m_root;
    Node<T> * m_current_node;
};