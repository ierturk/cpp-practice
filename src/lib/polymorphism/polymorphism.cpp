#include "polymorphism.h"

// function with 1 int parameter
std::ostringstream PMCTFuncOverload::func(int x)
{
    std::ostringstream os;
    os << "value of x is " << x;
    return os;
}
    
// function with same name but 1 double parameter
std::ostringstream PMCTFuncOverload::func(double x)
{
    std::ostringstream os;
    os << "value of x is " << x;
    return os;
}
    
// function with same name and 2 int parameters
std::ostringstream PMCTFuncOverload::func(int x, int y)
{
    std::ostringstream os;
    os << "value of x and y is " << x << ", " << y;
    return os;
}

// define constructor
PMCTComplex::PMCTComplex( double r, double i )
{
      real = r; imag = i;
}

// define overloaded + (plus) operator
PMCTComplex PMCTComplex::operator+ (const PMCTComplex& c) const
{
      PMCTComplex result;
      result.real = (this->real + c.real);
      result.imag = (this->imag + c.imag);
      return result;
}

std::ostream& operator << (std::ostream &os, const PMCTComplex &c)
{
    os << c.real << " +" << c.imag << "i";
    return os;
}
 
std::istream& operator >> (std::istream &in,  PMCTComplex &c)
{
    std::cout << "Enter Real Part ";
    in >> c.real;
    std::cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

void PMRTBase::print()
{
    std::cout << "print base class" << std::endl; 
}

void PMRTBase::show()
{
    std::cout << "show base class" << std::endl;
}

void PMRTDerived::print()
{
    std::cout << "print derived class" << std::endl;
}

void PMRTDerived::show()
{
    std::cout<< "show derived class" << std::endl;
}
