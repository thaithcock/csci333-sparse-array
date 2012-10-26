#include <iostream>
#include "gtest/gtest.h"
#include "TwoDArray.h"

TEST(TwoDArray, intInit){
 TwoDArray<int>* intArray = new TwoDArray<int>(5,5,0);
 EXPECT_TRUE(intArray != 0);
}

TEST(TwoDArray, stringInit){
 TwoDArray<std::string>* stringArray = new TwoDArray<std::string>(5,5,"Q");
 EXPECT_TRUE(stringArray != 0);
}

TEST(TwoDArray, doubleInit){
 TwoDArray<double>* dArray = new TwoDArray<double>(5,5,0.0);
 EXPECT_TRUE(dArray != 0);
}

TEST(TwoDArray, getNumCols){
 TwoDArray<std::string>* array = new TwoDArray<std::string>(5,7,"def");
 EXPECT_EQ(array->getNumCols(), 7);
}

TEST(TwoDArray, getNumRows){
 TwoDArray<std::string>* array = new TwoDArray<std::string>(3,5,"def");
 EXPECT_EQ(array->getNumRows(), 3);
}
