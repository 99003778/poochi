#ifndef __OPERAIION_H_
#define __OPERAIION_H_
#include<iostream>
using namespace std;
template <typename T>
class operation
{
private :
      T num1;
      T num2;
      T a;
      T b;  

public: 
    operation();
    operation(T n1,T n2);
    T add(T n1,T n2);    
    T subtract(T n1,T n2);
    T multiply(T n1,T n2);
    T division(T n1,T n2);
       
};
using namespace std;
template <typename T>
operation<T>::operation()
{}
template <typename T>
operation<T>::operation(T n1,T n2):num1(n1), num2(n2)
{}
template <typename T>
T operation<T>::add(T n1,T n2)
{    
    std::cout<<n1+n2<<endl;
    return n1+n2;
    
} 
template <typename T>
T operation<T>::subtract(T n1,T n2)
{   std::cout<<n1-n2<<endl;
    return n1-n2;
}
template <typename T>
T operation<T>::multiply(T n1,T n2)
{    std::cout<<n1*n2<<endl;
    return n1*n2;
}
template <typename T>
T operation<T>::division(T n1,T n2)
{   
    std::cout<<n1/n2<<endl;
    return n1/n2;
}



#endif