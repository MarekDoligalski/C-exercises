#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int n=3;
//const string nazwa = "ocena.txt";

struct rekord
{
    string imie;
    double ocena;
};

void wyswietlTablice(rekord t[n])
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<" imie: "<<t[i].imie<<endl;
        cout<<i<<" ocena: "<<t[i].ocena<<endl;
    }
}

double zwrocSrednia(rekord t[n], char pierwszaLitera)
{
    double sumaOcen=0.0;
    double licznikOcen=0.0;
    double srednia=0.0;

    for(int i=0; i<n; i++)
    {
        if (t[i].imie[0]==pierwszaLitera)
        {
            sumaOcen+=t[i].ocena;
            licznikOcen++;
        }
    }
    if(licznikOcen==0)
        {
          srednia=0.0;
        }
        else
            {
                 srednia=sumaOcen/licznikOcen;
            }
    return srednia;
}

void wyswietlimiona(rekord t[n], double wartosc)
{
    for(int i=0; i<n; i++)
    {
        if(t[i].ocena<wartosc)
        {
            cout<< t[i].imie;
        }
    }
}

//void wczytajzpliku

int main()
{
rekord A[n];
rekord B[n];

double srednia;

ifstream plk("ocena.txt");

for (int i=0; i<n; i++)
{
    if (plk.eof())
    {
        break;
    }
    plk>> A[i].imie;
    plk>> A[i].ocena;
    plk.ignore();
}

for (int i=0; i<n; i++)
{
if (plk.eof())
    {
        break;
    }
    plk>> B[i].imie;
    plk>> B[i].ocena;
    plk.ignore();
}
plk.close();

wyswietlTablice(A);
wyswietlTablice(B);

cout<<zwrocSrednia(A,'b');
cout<<zwrocSrednia(B,'o');


//cout<<zwrocSrednia(A,'b');
    return 0;
}
