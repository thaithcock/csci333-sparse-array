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
  void setNextV(Node* n);
  void setNextH(Node* n);
  Node* getNextV();
  Node* getNextH();
};

#endif
