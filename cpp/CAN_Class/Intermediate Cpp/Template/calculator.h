#ifndef __CALCULATOR_H
#define __CALCULATOR_H
using namespace std;

template <class T>
class Calculator
{
private:
        T num1, num2;
        
public:
        Calculator(T n1, T n2)
        {
                num1 = n2;
                num2 = n1;
        }        
        void displayResult()
        {
            cout << "Addition is: " << add() << endl;
            cout << "Subtraction is: " << subtract() << endl;
            cout << "Product is: " << multiply() << endl;
            cout << "Division is: " << divide() << endl;
        }        
        T add()
        { 
          return num1 + num2; 
        }        
        T subtract()
        { 
          return num1 - num2; 
        }        
        T multiply()
        { 
          return num1 * num2; 
        }        
        T divide()
        { 
          return num1 / num2; 
        }
};
template <class T>
class complex
{
  private:
    T real, imag;
  public:
    complex()
    {
      real = 0;
      imag = 0;
    }
    complex(T r, T i)
    {
      real = r;
      imag = i;
    }
};
#endif