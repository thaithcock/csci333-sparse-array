#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__
#include <vector>
#include <iostream>

template <typename T>
class TwoDArray {
 private:
  std::vector< std::vector<T> > theArray;
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
