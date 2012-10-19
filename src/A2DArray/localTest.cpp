#include "TwoDArray.h"
#include <iostream>

int main() {
 TwoDArray<int>* array = new TwoDArray<int>(5,5,1);
 array->print();
 return 0;
}
