#include <stdio.h>

void kutu_ciz( int satir, int sutun )
{
     int sut;
     for ( ; satir > 0; satir--)
     {
        for (sut = sutun; sut > 0; sut--)
          printf("X");

          printf("\n");
     }
}

int main(){
int satir;
int sutun;
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("Sutun sayisini giriniz:");
    scanf("%d",&sutun);
    kutu_ciz(satir,sutun);
 return 0;
}
