BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

TwoDArray_test:
	make $(BUILD)/A2DArray_test
	make $(BUILD)/V2DArray_test

$(BUILD)/A2DArray_test: TwoDArray_test.cpp $(SRC)/A2DArray/TwoDArray.o $(GTEST_MAINA)
	cp $(SRC)/A2DArray/TwoDArray.h .
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o $@ $^ $(GTEST_MAINA)
	rm ./TwoDArray.h

$(BUILD)/V2DArray_test: TwoDArray_test.cpp
	cp $(SRC)/V2DArray/TwoDArray.h .
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o $@ $^ $(GTEST_MAINA)
	rm ./TwoDArray.h

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f *.h
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


