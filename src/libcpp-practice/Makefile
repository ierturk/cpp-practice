
all: libcpp-practice.a

libcpp-practice.a: polymorphism/polymorphism.o
	ar rcs $@ $^

polymorphism.o: polymorphism/polymorphism.cpp
		$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f *.o polymorphism/*.o libcpp-practice.a
