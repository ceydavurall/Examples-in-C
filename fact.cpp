#include <iostream>
using namespace std;
int main(){
int x, carp;
carp=1;
cout << "Hangi sayinin faktoryeli hesaplanacak? "; cin >> x;
a:
if (x>1){
carp=carp*x;
x--;
goto a;}
cout << "Hesaplanan Faktoryel= " << carp<< endl;
return 0; }
