#include <iostream>
#include <stdio.h>
using namespace std;
class LaguAyam
{
private:
    int n;
public:
    void tampil()
    {
        cout<<"Anak Ayam Turun 5 "<<endl;
        for (int n=5;n>0;n--)
    {
        if(n>1)
        {
            cout<<"Anak Ayam turun "<<n<<" ,Mati Satu Tinggal "<<n-1<<endl;
        }
            else if(n=1)
            {
                cout<<"Anak Ayam turun 1, Mati Satu Tinggal induknya "<<endl;
            }
    }
    }
};

    int main()
{

    printf("Program looping anak ayam\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    cout<<"masukan bilangan bulat positif :";
    LaguAyam a;
    a.tampil();
    return 0;
}
