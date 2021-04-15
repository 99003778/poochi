#ifndef __FRACTION_H_

#define __FRACTION_H__

#include <iostream>

#include <math.h>

using namespace std;

template <typename T>

class Fraction

{

private:

T numerator;

T denominator;

public:

Fraction();

Fraction(T num,T den);

~Fraction();

Fraction operator+(const Fraction& ref);

Fraction operator-(const Fraction& ref);

Fraction operator*(const Fraction& ref);

Fraction operator/(const Fraction& ref);

T return_numerator_value();

T return_denominator_value();

void printF();

};

template <typename T>

Fraction<T>::Fraction(){}

template <typename T>

Fraction<T>::Fraction(T num,T den):numerator(num),denominator(den)

{

}

template <typename T>

Fraction<T>::~Fraction()

{

}

template <typename T>

Fraction<T> Fraction<T>::operator+(const Fraction& ref)

{

Fraction<T> r;

r.numerator=(numerator*ref.denominator)+(denominator*ref.numerator);

r.denominator=denominator*ref.denominator;

return(r);

}

template <typename T>

Fraction<T> Fraction<T>::operator-(const Fraction& ref)

{

Fraction<T> r;

r.numerator=(numerator*ref.denominator)-(denominator*ref.numerator);

r.denominator=denominator*ref.denominator;

return(r);

}

template <typename T>

Fraction<T> Fraction<T>::operator*(const Fraction& ref)

{

Fraction<T> r;

r.numerator=numerator*ref.numerator;

r.denominator=denominator*ref.denominator;

return(r);

}

template <typename T>

Fraction<T> Fraction<T>::operator/(const Fraction& ref)

{

Fraction<T> r;

r.numerator=numerator*ref.denominator;

r.denominator=denominator*ref.numerator;

return(r);

}

template<typename T>

void Fraction<T>::printF(){

cout<<numerator<<"/"<<denominator<<endl;

}

template <typename T>

T Fraction<T>::return_denominator_value()

{

return denominator;

}

template <typename T>

T Fraction<T>::return_numerator_value()

{

return numerator;

}

#endif

 