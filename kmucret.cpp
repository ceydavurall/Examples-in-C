#include <iostream>
using namespace std;
// ilk 100 KM'ye kadar 0.5 TL/KM
// 100 KM'den Sonra 0.2 TL/KM
const double yuzalti=0.5;
const double yuzustu=0.2;
int kilometre;
double ucretyuzalti, ucretyuzustu, toplamucret;
int main(){
cout << "Gidilen KM'yi giriniz: ";
cin >> kilometre;
if(kilometre<=100){
ucretyuzalti=kilometre*yuzalti;
ucretyuzustu = 0; }
else{
ucretyuzalti=100*yuzalti;
ucretyuzustu=(kilometre-100)*yuzustu; }
toplamucret=ucretyuzalti+ucretyuzustu;
cout << "\nToplam Ucret= " << toplamucret << "TL" << "\n"; }
