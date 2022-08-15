//
// Created by Ibrahim ERTURK on 15.08.2022.
//

#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

#include <iostream>
#include <sstream>

class PMCTFuncOverload
{
    public:
    PMCTFuncOverload(){}
    ~PMCTFuncOverload(){}

    // function with 1 int parameter
    std::ostringstream func(int x);
      
    // function with same name but 1 double parameter
    std::ostringstream func(double x);
      
    // function with same name and 2 int parameters
    std::ostringstream func(int x, int y);

};

class PMCTComplex
{
    double real, imag;

public:
    PMCTComplex( double real = 0., double imag = 0.);
    PMCTComplex operator+(const PMCTComplex&) const;
    friend std::ostream& operator << (std::ostream &os, const PMCTComplex &c);
    friend std::istream& operator >> (std::istream &is,  PMCTComplex &c);
};

class PMRTBase
{
public:
    virtual void print();
    void show();
};
   
class PMRTDerived : public PMRTBase
{
public:
    void print();
    void show();
};

#endif // POLYMORPHISM_H
