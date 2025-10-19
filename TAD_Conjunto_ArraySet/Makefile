#use 'make' para compilar

CXX = g++
CXXFLAGS := -Iinclude_cpp -std=c++17 -Wall

TARGET = main

OBJECTS = ArraySet.o main.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

ArraySet.o: ArraySet.cpp Set.hpp
	$(CXX) $(CXXFLAGS) -c ArraySet.cpp

main.o: main.cpp Set.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -f $(OBJECTS) $(TARGET)