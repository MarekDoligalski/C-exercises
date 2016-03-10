// CW7_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

struct car
{
	std::string nazwa;
	int rok;
};

int main()
{
	using namespace std;

	int rozmiar;
	cout << "Podaj liczbe samochodow ";
	cin >> rozmiar;
	
	car *tablica = new car[rozmiar];

	for (int i = 0; i < rozmiar; i++)
	{
		cout << "Samochod " << i + 1 << endl;
		cin >> tablica[i].nazwa;
		cin >> tablica[i].rok;
	}

	cout << "Wyswietlanie" << endl;

	for (int i = 0; i < rozmiar; i++)
	{
		cout << "Samochod " << i + 1 << endl;
		cout << tablica[i].nazwa << endl;
		cout << tablica[i].rok;
		cout << endl;
	}

	delete[] tablica;

	system("PAUSE");

	return 0;
}

