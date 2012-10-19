BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

A2DArray_test: A2DArray_test.cpp $(SRC)/A2DArray/TwoDArray.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o A2DArray_test A2DArray_test.cpp $(SRC)/A2DArray/TwoDArray.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f A2DArray_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


