CXX = g++
CXXFLAGS = -Wall -g
TARGET = floydwarshall_program
OBJ = main.o floydwarshall.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp floydwarshall.h
	$(CXX) $(CXXFLAGS) -c main.cpp

floydwarshall.o: floydwarshall.cpp floydwarshall.h
	$(CXX) $(CXXFLAGS) -c floydwarshall.cpp

clean:
	rm -f $(OBJ) $(TARGET)
