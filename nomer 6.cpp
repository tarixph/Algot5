#include <stdio.h>
#include <conio.h>

int main()
{

    printf("Program perpangkatan x dan y\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");

int X,Y,hasil;
printf("masukan nilai X: ");scanf("%i",&X);
printf("masukan nilai Pangkat Y: ");scanf("%i",&Y);
printf("\n");
hasil=X;
for(int i=1;i<Y;++i){
        hasil=hasil*X;
printf("%i*%i=%i\n",hasil,X,hasil*X);
}
printf("\n hasil:%i",hasil*X);
getch();
}
