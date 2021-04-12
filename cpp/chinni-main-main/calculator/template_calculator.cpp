#include <iostream>
#include "calculator.h"
int main()
{
        int num1,num2;
        cin >> num1;
        cin>> num2;
        float num_float1,num_float2;
        cin>>num_float1;
        cin>>num_float2;
        double num_double1,num_double2;
        cin>>num_double1;
        cin>> num_double2;
        Calculator<int> intCalc(num1,num2);
        Calculator<float> floatCalc(num_float1,num_float2);
        Calculator<double> doubleCalc(num_double1,num_double2);
        

        cout << "Int results:" << endl;
        intCalc.displayResult();
        
        cout << endl << "Float results:" << endl;
        floatCalc.displayResult();
        
        cout << endl << "Double results:" << endl;
        doubleCalc.displayResult();
        return 0;
}
