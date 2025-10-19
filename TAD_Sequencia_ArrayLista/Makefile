# use 'make' para compilar

CXX = g++
CXXFLAGS := -Iinclude_cpp -std=c++17 -Wall

TARGET = TestSequence

OBJECTS = ListSequence.o TestSequence.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

ListSequence.o: ListSequence.cpp Sequence.h Node.h
	$(CXX) $(CXXFLAGS) -c ListSequence.cpp

TestSequence.o: TestSequence.cpp Sequence.h Node.h
	$(CXX) $(CXXFLAGS) -c TestSequence.cpp

clean:
	rm -f $(OBJECTS) $(TARGET)
z