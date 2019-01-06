#include<stdio.h>
#include<string.h>
#include<ctype.h>
char a[100];
int b,c;

int main()
{

    printf("Program Pembalik Kata\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");

printf("masukkan kata = ");
gets(a);
strrev(a);
printf("balikkan kata = %s",a);
}
