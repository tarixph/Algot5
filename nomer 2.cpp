#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main (){
    int bil,jum,i;
    printf("Program mencari bilangan prima dari 1 sampai 100\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    cout<<"masukan bilangan bulat positif :";
    cin>>bil;
    jum = 0;
    for (i=1;i<=bil;i++)
        if (bil%i==0)
        jum++;
    if (jum==2)
        cout<<"bilangan tersebut adalah bilangan prima \n";
    else
        cout<<"bukan bilangan prima\n";
    return 0;
}
