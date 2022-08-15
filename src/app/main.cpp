#include <iostream>

#include "../lib/polymorphism/polymorphism.h"

int main(int argc, char **argv) {

    PMCTFuncOverload * p = new PMCTFuncOverload();

    std::cout << p->func(7).str() << std::endl;
    std::cout << p->func(9.132).str() << std::endl;
    std::cout << p->func(85,64).str() << std::endl;

    PMCTComplex c1(10, 5);
    PMCTComplex c2(2, 4);
    PMCTComplex c3 = c1 + c2;

    std::cout << "Complex: " << c1 << " + " << c2 << " = " << c3 << std::endl;

    PMRTBase* bptr;
    PMRTDerived d;
    bptr = &d;

    PMRTBase& rd = d;

    std::cout << "Base pointer" << std::endl;
    bptr->print();
    bptr->show();

    std::cout << "Base reference" << std::endl;
    rd.print();
    rd.show();

    std::cout << "Derived" << std::endl;
    d.print();
    d.show();

    delete p;
}