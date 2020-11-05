#include <stdio.h>

int artik_yil(int); /* fonksiyon prototipi */

void main()
{
  int yil;

  printf("Bir yil girin: ");
  scanf("%d",&yil);

  if( artik_yil(yil) ) 
      printf("%d artik yil\n",yil);
  else
      printf("%d artik yil degil\n",yil);
}

/* yil artýl yýl ise 1 aksi halde 0 gönderir */
int artik_yil(int yil)
{
  if(  yil % 4   == 0 &&
       yil % 100 != 0 ||
       yil % 400 == 0  ) return 1;
  else return 0;
}
