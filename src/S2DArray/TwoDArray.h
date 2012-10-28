#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__
#include <iostream>
#include "Node.h"

template <typename T>
class TwoDArray {
 private:
  Node* theRows;
  Node* theCols;
  T defaultValue;
  int numRows;
  int numCols;
 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif
