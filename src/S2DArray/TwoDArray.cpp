#include "TwoDArray.h"
#include "assert.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r = 10, int c = 10, T def = T()){
 assert(r>0);
 assert(c>0);
 defaultValue = def;
 numCols = c;
 numRows = r;
 theRows = Node*[](r);
 theCols = Node*[](c);
}

template <typename T>
TwoDArray<T>::~TwoDArray<T>(){
 //TODO destructor
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
 //TODO access function
 return T();
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
 //TODO insert function
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
 //TODO remove function
}

template <typename T>
void TwoDArray<T>::print(){
 for(int i=0; i<numRows; i++){  //number of rows (height) each iteration is a new vertical position

  if(i==0)
   std::cout << "{ ";
  else
   std::cout << "  ";

  std::cout << "[ ";
  for(int j=0; j<numCols; j++){ //number of columns (width) each iteration is a new horizontal position
   std::cout << access(i,j); // Replaced direct array access with public method because easier than rewriting
   if(j<numCols-1)
    std::cout << " , ";
  }
  std::cout << " ]";
  
  if(i==numRows-1)
   std::cout << " }";
  else
   std::cout << ",";

  std::cout << std::endl;
 }

}

template <typename T>
int TwoDArray<T>::getNumRows(){
 return numRows;
}

template <typename T>
int TwoDArray<T>::getNumCols(){
 return numCols;
}

template class TwoDArray<int>;
template class TwoDArray<std::string>;
template class TwoDArray<double>;
template class TwoDArray<bool>;


