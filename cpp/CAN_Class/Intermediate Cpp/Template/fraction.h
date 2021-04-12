#ifndef __ADDFRACTION_H
#define __ADDFRACTION_H
using namespace std;

template <class T>
class AddFraction
{
private:
        T numerator1,denominator1,numerator2,denominator2;
        
public:
        AddFraction(T a,T b,T c,T d)
        {
                numerator1 = a;
                denominator1= b;
                numerator2 = c;
                denominator2 =d;
        }        
        void displayResult()
        {
            cout << "Addition is: " << add() << endl;
            
        }        
        float add()
        { 
            
          return float((numerator1*denominator2)+(numerator2*denominator1))/float(denominator1*denominator2); 
        }        
        
};
#endif
