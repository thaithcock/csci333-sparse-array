#include "TwoDArray.h"
#include "assert.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r = 10, int c = 10, T def = T()){
 assert(r>0);
 assert(c>0);
 defaultValue = def;
 numCols = c;
 numRows = r;
 theRows = Node<T>*[](r);
 theCols = Node<T>*[](c);
}

template <typename T>
TwoDArray<T>::~TwoDArray<T>(){
 Node<T>* curr;
 Node<T>* next;
 for(int i = 0; i<r; i++){
  recurDelete(theRows[i]);
 }
 delete[] theRows;
 delete[] theCols;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){
 assert(r>=0);
 assert(c>=0);
 Node<T>* n;
 if(numCols<numRows){
  n = theCols[c]
  while(n->getRow()!=r) {
   n = n->getNextV();
  } 
 }
 else {
  n = theRows[r]
  while(n->getCol()!=c) {
   n = n->getNextC();
  }
 }
 return n->getValue();
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
 assert(r>=0);
 assert(c>=0);
 Node<T>* newNode = new Node<T>*(r, c, value);
 Node<T>** curr;

 curr = &theCols[c];
 while(*curr != 0 && (*curr)->getRow() < r){
  curr = &((*curr)->getNextV());
 }
 newNode->setNextV(**curr);
 *curr = newNode;

 curr = &theRows[r];
 while(*curr != 0 && (*curr)->getCol() < c){
  curr = &((*curr)->getNextH());
 }
 newNode->setNextH(**curr);
 *curr = newNode;
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){
 assert(r>=0);
 assert(r>=0);
 Node<T>** curr;

 curr = &theCols[c];
 while(*curr != 0 && (*curr)->getRow() < r){
  curr = &((*curr)->getNextV());
 }
 *curr->setNextV(**curr);

 curr = &theRows[r];
 while(*curr != 0 && (*curr)->getCol() < c){
  curr = &((*curr)->getNextH());
 }
 *curr->setNextH(**curr);
 delete *curr;
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

Node<T>* TwoDArray<T>::recurDelete(Node<T>* n) { //specialized function to delete ROWS of sparse array
 if(n->getNextH()==0) {
  return n;
 }
 else {
  delete recurDelete(n->getNextH());
 }
}

template class TwoDArray<int>;
template class TwoDArray<std::string>;
template class TwoDArray<double>;
template class TwoDArray<bool>;
