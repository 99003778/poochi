#include <iostream>
#include "calculator.h"
int main()
{
        Calculator<int> intCalc(2, 1);
        Calculator<float> floatCalc(2.4, 1.2);
        Calculator<double> doubleCalc(3.1, 0.2);
        

        cout << "Int results:" << endl;
        intCalc.displayResult();
        
        cout << endl << "Float results:" << endl;
        floatCalc.displayResult();
        
        cout << endl << "Double results:" << endl;
        doubleCalc.displayResult();
        return 0;
}
