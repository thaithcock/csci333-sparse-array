#include "Node.h"

template<typename T>
Node<T>::Node(T v) {
 value = v;
}

template<typename T>
Node<T>::~Node() {
 //TODO destructor
}

template<typename T>
T Node<T>::getValue() {
 return value;
}

template<typename T>
void Node<T>::setNextV(Node* n) {
 vPoint = n;
}

template<typename T>
void Node<T>::setNextH(Node* n) {
 hPoint = n;
}

Node* Node<T>::getNextV() {
 return vPoint;
}

Node* Node<T>::getNextH() {
 return hPoint;
}

template class Node<int>;
template class Node<std::string>;
template class Node<double>;
template class Node<bool>;
