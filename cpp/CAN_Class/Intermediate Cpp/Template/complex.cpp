#include <iostream>
#include "complex.h"
using namespace std;
int main(){
   complex<double> a;
   cin >> a.real >> a.imag;
   cout << a.real << " + I * " << a.imag << "\n";
}