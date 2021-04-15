#ifndef __COMPLEX_H_
#define __COMPLEX_H_
#include<iostream>
#include<stdlib.h>
using namespace std;
template <typename T>
class complex
{   
   T real;   
   T imag;
   public:
   complex();
   complex(const T ,const T );
   complex operator +(complex  &obj) ;
   complex operator -(complex &obj) ;
   complex operator *(complex &obj);
   complex operator /(complex &obj);   
   T return_real_value();
   T return_imag_value();  
   void display();  

};
using namespace std;
template<typename J>
complex<J>::complex()
{
    real=0;
    imag=0;
};
template <typename J>
complex<J>::complex(J x,J y):real(x),imag(y)
{};
template<typename J>
complex<J>complex<J>::operator/(complex<J>&obj)
{
    complex<J> c3;
    J denominator;
    denominator=obj.real*obj.real+obj.imag*obj.imag;
    J T1;
    J T2;
    T1 = real*obj.real+imag*obj.imag;
    T1 = T1/denominator;
    T2 = imag*obj.real-real*obj.imag;
    T2 = T2/denominator;
    c3.real=T1;
    c3.imag=T2;
    return c3;

};
template<typename J>
complex<J>complex<J>::operator*(complex<J>&obj)
{
complex<J> c3;
c3.real=(real*obj.real)-(imag*obj.imag);
c3.imag=(real*obj.imag+imag*obj.imag);
return c3;
};
template<typename J>
complex<J>complex<J>::operator-(complex<J>&obj)
{
   complex<J> c3;
   c3.real=real-obj.real;
   c3.imag=imag-obj.imag;
   return c3;
};
template<typename J>
complex<J>complex<J>::operator+(complex<J>&obj)
{
    complex<J> c3;
    c3.real=real+obj.real;
    c3.imag=imag+obj.imag;
    return c3;
};
template<typename J>
void complex<J>::display()
{
    cout<<"Real "<<real<<" "<<"Imaginary "<<imag;
}
template <typename J>
J complex<J>::return_real_value()
{
    return real;

}
template <typename J>
J complex<J>::return_imag_value()
{
    return imag;

}

#endif
