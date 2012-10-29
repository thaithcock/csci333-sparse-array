BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

test: localTest.cpp TwoDArray.o
	$(CPP) $(CPPFLAGS) -o $@ $^
TwoDArray: TwoDArray.h TwoDArray.cpp Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c TwoDArray.cpp

clean:
	rm -f *.o
	rm -f *~
