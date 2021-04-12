#include <iostream>
#include "AddFraction.h"
using namespace std;

int main()
{
    int a, b,c,d;
cout << "\nEnter the numerator for 1st number : ";
cin >> a;
cout << "\nEnter the denominator for 1st number : ";
cin >> b;
cout << "\nEnter the numerator for 2nd number : ";
cin >> c;
cout << "\nEnter the denominator for 2nd number : ";
cin >> d;
AddFraction<int> intCalc(a,b,c,d);
intCalc.displayResult();
    return 0;
}