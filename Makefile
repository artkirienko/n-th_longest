CC=g++
CFLAGS=-c -std=c++11
LDFLAGS=
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=n-th_longest

all: $(SOURCES) $(EXECUTABLE) clean_o
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean_o:
	rm *.o

clean:
	rm n-th_longest
