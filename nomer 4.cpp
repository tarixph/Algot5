#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    int x,y,i,c;
     printf("Program Bilangan genap dari 1 sampai 20\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    cout<<"masukan batas awal :";
    cin>>x;
    cout<<"masukan batas akhir :";
    cin>>y;
    for (i=x;i<y;i++) {
        c=i%2;
        if (c==0)
            cout<<i<<",";
    }
    return 0;
}

