#include <iostream>
using namespace std;
int sayi[3];
int i,b,gecici;
main(){
do
{
cout << i+1 << ". sayiyi giriniz: ";
cin >> sayi[i];
i++;
}
while(i<3);
for (i=0;i<2;i++)
{
for(b=i+1;b<3;b++)
{
if (sayi[i]>sayi[b])
{
gecici=sayi[i];
sayi[i]=sayi[b];
sayi[b]=gecici;
}
}
}
cout << "\n";
cout << "Artan Siralama" << "\n";
for(i=0;i<3;i++)
{
cout << sayi[i] << "\n";
}
}
