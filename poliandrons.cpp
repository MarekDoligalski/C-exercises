
    #include <iostream>
#include <cstdlib>
#include <cstdlib>  // zawiera funkcje rand i srand
#include <ctime> //zawiera funkcjê time
using namespace std;

const int n = 5;   // liczba wierszy i kolumn w tablicy
const int g =2;
int palindr [n];
int main()
{int a[n][n];
srand( time( NULL ) );
int i, j;
int temp;
int licznik;
temp=n/2;
for (i=0;i<n;i++)
    for (j=0;j<n;j++)
        a[i][j] =( rand()%g)+0;
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
cout<<a[i][j]<<endl;}}
for (i=0;i<n;i++)
    {palindr[i]=a[i][i];}
        licznik=0;
        for (i=0;i<temp;i++)
        {if (palindr[i]==palindr[n-i-1])
        licznik++;}
        if (licznik ==temp)
        {cout << "Glowna Przekatna jest Palindrem"<<endl;}
//sprawdzenie która wartoœc z wiersza jest najwieksza

for (i=0;i<n;i++)
    {licznik=0;
        for (j=0;j<n;j++)
        palindr[j]=a[i][j];

        for (i=0;i<temp;i++)
        {if (palindr[i]==palindr[n-i-1])
            licznik++;}
        if (licznik ==temp)
        cout << "Wiersz "<<i+1<<" jest Palindrem"<<endl;}
/*
for (j=0;j<n;j++)
    {for (i=0;i<n;i++)
        palindr[i]=a[i][j];
            if (palindr[0]==palindr[n-1])
                {if (palindr[1]==palindr[n-2])
                    cout << "Kolumna "<<j+1<<" jest Palindrem"<<endl;}}*/
//druk tablicy
for (i=0;i<n;i++)
    {for (j=0;j<n;j++)
        cout << a [i][j]<<"\t";
        cout << endl;}
        cout << endl;
    return 0;
}
