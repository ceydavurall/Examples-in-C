#include <iostream>
using namespace std;
int main(){
int a[5]={2,7,0,3,9};
for (int i=0;i<=4;i++)
cout << "a(" << i << ")= " << a[i] << endl;
int toplam=0;
for(int j=0;j<=4;j++){
toplam=toplam+a[j]; // toplam+=a(j) de olabilir
}
cout << "TOPLAM= " << toplam << endl;
return 0;
}
