#include "TwoDArray.h"
#include <iostream>

int main() {
 TwoDArray<int>* array = new TwoDArray<int>(5,5,1);
 array->print();

 TwoDArray<std::string> array2 = TwoDArray<std::string>(6,4,"dog");
 array2.print();
 return 0;
}
