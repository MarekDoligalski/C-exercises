#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const int n=3;

void wylosujTablice(int t[][n],int l1,int l2)
{
    for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    t[i][j]=l1 + rand() % (l2 + 1 - l1);
                }
        }
}

void wyswietlTablice(int t[][n])
{
    for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    cout<<t[i][j]<<"\t";
                }
            cout<<endl;
        }
        cout<<endl;
}

int ileWierszy(int t[][n])
{
int p=0;
int np=0;
int w=0;

for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(t[i][j]%2==0)
                    {
                        p++;
                    }
                if(t[i][j]%2)
                    {
                        np++;
                    }
            }
            if(p>np)
                {
                    w++;
                }
            p=0;
            np=0;
        }
    return w;
}

void wynikWierszy(int z[][n])
{
    cout<<ileWierszy(z)<<endl;
    cout<<endl;
}

int main(int argc, char *argv[])
{
    srand(static_cast<int>(time(NULL)));

    int a[n][n];
    int b[n][n];
    int l1;
    int l2;

    cout<<"Wpisz zakres"<<endl;
    do
    {
        cin>>l1>>l2;
    }
    while(l1>=l2);

    cout<<"Wyswietl tablice"<<endl;

    wylosujTablice(a,l1,l2);
    wylosujTablice(b,l1,l2);

    wyswietlTablice(a);
    ileWierszy(a);
    wynikWierszy(a);

    wyswietlTablice(b);
    ileWierszy(b);
    wynikWierszy(b);

    if(ileWierszy(a)>ileWierszy(b))
        {
            cout<<"A ma wiecej wierszy parzystych";
        }
    else if(ileWierszy(b)>ileWierszy(a))
        {
            cout<<"B ma wiecej wierszy parzystych";
        }
    else
        {
            cout<<"A i B maja tyle samo wierszy parzystych";
        }
  return 0;
}
