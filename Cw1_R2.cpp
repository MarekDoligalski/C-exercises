// Cw1_R2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void Ent()
{
	cout << "entliczek pentliczek" << endl;
};
void Czerw()
{
	cout << "czerwony stoliczek" << endl;
};
double Temp(double cel)
{
	cout << "zamiana na stopnie Farenhaita" << endl;
	cout << cel*1.8 + 32 << endl;
	return cel * 1.8 + 32;
};
double Lata(double rok)
{
	cout << "zmiana na jednostki astronomiczne" << endl;
	cout << rok * 63240 << endl;
	return rok * 63240;
}
void Czas(int g, int m)
{

	cout << "Czas " << g << ":" << m << endl;
};
int main()
{
	cout << "Marek" << endl;
	cout << "Doligalski" << endl;

	cout << "Podaj wartosc w milach morskich (liczba wymierna)" << endl;
	double LiczW;
	cin >> LiczW;
	cout << "Wartosc w meterach to " << LiczW * 1848 << endl;

	Ent();
	Ent();
	Czerw();
	Czerw();

	cout << "Podaj temperature w stopniach Celcjusza" << endl;
	double cel;
	cin >> cel;
	Temp(cel);

	cout << "Podaj lata swietlne" << endl;
	double rok;
	cin >> rok;
	Lata(rok);

	int g, m;
	cout << "Podaj godzine" << endl;
	cin >> g;
	cout << "Podaj minuty" << endl;
	cin >> m;
	Czas(g, m);

	system("PAUSE");
	return 0;
}
