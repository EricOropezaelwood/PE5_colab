CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: Animal

clean:
	rm Animal.o Animal

Animal:
	$(CXX) $(CXXFLAGS) main.cpp Animal.cpp -o Animal

	
