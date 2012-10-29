#include "Node.h"

template<typename T>
Node<T>::Node(int r, int c, T v) {
 value = v;
 row = r;
 col = c;
}

template<typename T>
Node<T>::~Node() {
 //Everything is on stack?
}

template<typename T>
T Node<T>::getValue() {
 return value;
}

template<typename T>
void Node<T>::setNextV(Node<T>& n) {
 vPoint = n;
}

template<typename T>
void Node<T>::setNextH(Node<T>& n) {
 hPoint = n;
}

Node<T>*& Node<T>::getNextV() {
 return vPoint;
}

Node<T>*& Node<T>::getNextH() {
 return hPoint;
}

int Node<T>::getRow() {
 return row;
}

int Node<T>::getCol() {
 return col;
}

template class Node<int>;
template class Node<std::string>;
template class Node<double>;
template class Node<bool>;
