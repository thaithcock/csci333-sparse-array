#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* vPoint;
  Node<T>* hPoint;
  int row;
  int col;
 public:
  Node<T>(int r, int c, T v);
  ~Node<T>();
  T getValue();
  void setNextV(Node<T>& n);
  void setNextH(Node<T>& n);
  Node<T>*& getNextV();
  Node<T>*& getNextH();
  int getRow();
  int getCol();
};

#endif
