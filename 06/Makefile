PROGRAMS = main main2
TESTS = 

OBJECTS = median.o grade.o Student_info.o
OBJ = $(OBJECTS) main.o
HFILES = $(OBJECTS:%.o=%.h)
LIBRARIES = cppunit

CXX = g++
CPPFLAGS += -Wall -O2
LDFLAGS = $(LIBRARIES:%=-l%)

.PHONY: all clean test

all: $(PROGRAMS)

test: $(TESTS) all
	./main <../data/grades
	./main2 <../data/grades


main: $(OBJ) $(HFILES)
	$(CXX) $(OBJ) $(LDFLAGS) -o $@

main2: main2.o $(OBJECTS) $(HFILES)
	$(CXX) $(OBJECTS) $< $(LDFLAGS) -o $@

%.o: %.cpp %.h Student_info.h
	$(CXX) -c $(CPPFLAGS) $<

clean:
	rm -f *.o $(PROGRAMS) $(TESTS)
