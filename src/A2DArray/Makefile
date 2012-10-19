BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

test: localTest.cpp TwoDArray.o
	$(CPP) $(CPPFLAGS) -o $@ $^
TwoDArray: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CPPFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o
	rm -f *~
