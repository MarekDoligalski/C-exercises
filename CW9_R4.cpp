// CW9_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

struct baton
{
	std::string nazwa;
	int kalorie;
	double waga;

};
int main()
{
	using namespace std;

	baton *Batony = new baton[3];
	cout << "PODAJ INFORMACJE O 1 POZYCJI" << endl;
	cout << "PODAJ KALORIE" << endl;
	cin >> Batony[0].kalorie;
	cout << "PODAJ NAZWE" << endl;
	cin >> Batony[0].nazwa;
	cout << "PODAJ WAGE" << endl;
	cin >> Batony[0].waga;

	cout << "PODAJ INFORMACJE O 2 POZYCJI" << endl;
	cout << "PODAJ KALORIE" << endl;
	cin >> Batony[1].kalorie;
	cout << "PODAJ NAZWE" << endl;
	cin >> Batony[1].nazwa;
	cout << "PODAJ WAGE" << endl;
	cin >> Batony[1].waga;

	cout << "PODAJ INFORMACJE O 3 POZYCJI" << endl;
	cout << "PODAJ KALORIE" << endl;
	cin >> Batony[2].kalorie;
	cout << "PODAJ NAZWE" << endl;
	cin >> Batony[2].nazwa;
	cout << "PODAJ WAGE" << endl;
	cin >> Batony[2].waga;
	cout << "WYSWIETLANIE DANYCH" << endl;

	cout << Batony[2].kalorie << endl;

	delete []Batony;
	system("PAUSE");

    return 0;
}

