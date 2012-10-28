#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__

template <typename T>
class TwoDArray {
 private:
  T** theArray;
  T defaultValue;
  int numRows;
  int numCols;
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
