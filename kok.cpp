#include <iostream>
#include <cmath>
using namespace std;
int main() {
int a=1;
int b=-10;
int c=21;
float x1,x2,delta;
delta=b*b-4*a*c;
if (delta>0.0) {
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;
cout << "x1= " << x1 << "\n";
cout << "x2= " << x2 << "\n"; }
else if (delta==0.0) {
x1=-b/2*a;
cout << "x1= " << x1 <<"\n"; }
else
cout << "Gercek kok yoktur." << "\n";
return 0;
}
