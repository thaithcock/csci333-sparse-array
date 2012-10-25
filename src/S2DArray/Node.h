#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node* vPoint;
  Node* hPoint;
 public:
  Node<T>(T v);
  ~Node<T>();
  T getValue();
  void setVPoint(Node* n);
  void setHPoint(Node* n);
  Node* getNextV();
  Node* getNextH();
};
