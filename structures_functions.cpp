#include <iostream>
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//int i=0, j=0;
struct Re
{
     int e;
     char z;
};
const int n=3;
//const int d=0;
//const int g=100;
int main()
{
    int suma[n];
    Re T[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        T[i][j].e = 0+rand()%(20+1-0);
        T[i][j].z = 65+rand()%(90+1-65);
        }
    }
cout<<"ZEROWANIE WEKTORA SUMY"<<endl;
    for(int i=0;i<n;i++)
    {
            suma[i]=0;
    }
cout<<"ZLICZANIE SUMY WIERSZY"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        {
            cout << T[i][j].e<<T[i][j].z<<"\t";
            suma[i]+=T[i][j].e;
        }
            cout<<endl;
}
cout<<"PODMIENIANIE ZNAKOW"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(suma[i]%2==0)
        {
            T[i][j].z='@';
        }
    }
}

cout<<"WYSWIETLANIE TABLICY"<<endl;

        cout<<endl;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)

            cout << T[i][j].e<<T[i][j].z<<"\t";

            cout<<suma[i];
            cout<<endl;
        }
cout<<"WYSZUKIWANIE NAJWIEKSZEJ WARTOSCI LICZBOWEJ NA DRUGIEJ PRZEKATNEJ"<<endl;
int najW;
int is;
najW=T[0][n-1-0].e;

    for(int i=0;i<n;i++)
    {
        if(T[i][n-1-i].e > najW)
        {
            najW=T[i][n-1-i].e;
            is=i;
        }
    }
    najW=T[is][n-1-is].e;
    cout<<najW<<endl;
cout<<"LOSOWANIE KOLUMNY"<<endl;
//int losK;
int K=rand()%n;
cout<<K<<endl;
cout<<T[n-1][K].e<<endl;
//losK=T[n-1][K].e;
cout<<"ZAMIANA REKORDOW MIEJSCAMI"<<endl;
int temp=0;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                {
                    temp=T[is][n-1-is].e;
                    T[is][n-1-is].e=T[n-1][K].e;
                    T[n-1][K].e=temp;
                }
    }
//    cout<<losK<<" "<<najW<<endl;

    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
                {   //temp=losK;
                    //losK=najW;
                    //najW=temp;
            cout << T[i][j].e<<T[i][j].z<<"\t";
            }cout<<endl;}

    return 0;
}
