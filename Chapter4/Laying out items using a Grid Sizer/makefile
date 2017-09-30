CXX = g++

CXXFLAGS = -c -g -Wall -O2 -std=gnu++17 `wx-config --cxxflags`

CXXLIBS = *.o `wx-config --libs`

TARGET = Using\ Grid\ Layout

all:
	$(CXX) $(CXXFLAGS) *.cpp
	$(CXX) $(CXXLIBS) -o $(TARGET)

clean:
	rm -f *.o $(TARGET)

run:
	./$(TARGET)
