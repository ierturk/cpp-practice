# HEADERS = program.h headers.h

CXX = g++
CXXFLAGS = -std=c++11 -g -Wall -Wextra -Werror -pedantic $(INC_PARAMS)
LDFLAGS = -Lsrc/libcpp-practice
INC_DIR = src/libcpp-practice/polymorphism
INC_PARAMS = $(foreach d, $(INC_DIR), -I$d)

EntryPoint: src/EntryPoint.o
	CXX='$(CXX)' CXXFLAGS='-fPIC $(CXXFLAGS)' make -C src/libcpp-practice
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) -lcpp-practice

clean:
	-rm -f src/EntryPoint.o
	-rm -f EntryPoint
	make -C src/libcpp-practice clean