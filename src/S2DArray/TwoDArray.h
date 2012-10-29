#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__
#include <iostream>
#include "Node.h"

template <typename T>
class TwoDArray {
 private:
  Node<T>* theRows;
  Node<T>* theCols;
  T defaultValue;
  int numRows;
  int numCols;
  Node<T>* recurDelete(Node<T>* n);
 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  T access(int r, int c);
  void insert(int r, int c, T value);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif
