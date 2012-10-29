#include <iostream>
#include "gtest/gtest.h"
#include "TwoDArray.h"

TEST(TwoDArray, inits){
 TwoDArray<int>* intArray = new TwoDArray<int>(5,5,0);
 EXPECT_TRUE(intArray != 0);
 delete intArray;

 TwoDArray<std::string>* stringArray = new TwoDArray<std::string>(5,5,"Q");
 EXPECT_TRUE(stringArray != 0);
 delete stringArray;

 TwoDArray<double>* dArray = new TwoDArray<double>(5,5,0.0);
 EXPECT_TRUE(dArray != 0);
 delete dArray;
}

TEST(TwoDArray, insert){
 TwoDArray<std::string>* array = new TwoDArray<std::string>(3,7,"0");
 array->insert(0,0,"one");
 EXPECT_TRUE(array->access(0,0).compare("one"));
 array->insert(3,5,"two");
 EXPECT_TRUE(array->access(3,5).compare("two"));
 delete array;
}

TEST(TwoDArray, remove){
 TwoDArray<double>* array = new TwoDArray<double>(6,4,0.0);
 for(int i = 0; i < array->getNumRows(); i++){
  for(int j = 0; j < array->getNumCols(); j++){
   array->insert(i,j,1.0+i+j);
  }
 } //inserting values into all points
 array->remove(2,3);
 array->remove(6,4);
 EXPECT_EQ(array->access(2,3), 0.0);
 EXPECT_EQ(array->access(6,4), 0.0);
}

TEST(TwoDArray, getNumCols){
 TwoDArray<std::string>* array = new TwoDArray<std::string>(5,7,"def");
 EXPECT_EQ(array->getNumCols(), 7);
 delete array;
}

TEST(TwoDArray, getNumRows){
 TwoDArray<std::string>* array = new TwoDArray<std::string>(3,5,"def");
 EXPECT_EQ(array->getNumRows(), 3);
 delete array;
}
