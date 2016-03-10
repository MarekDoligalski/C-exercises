// CW1_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	
	char imie[30];
	char nazwisko[30];
	int ocena;
	int wiek;

	cout << "Jak masz na imie?" << endl;
	cin.getline(imie,30);
	
	cout << "Jak masz na nazwisko?" << endl;
	cin.getline(nazwisko, 30);
	
	cout << "Podaj ocene" << endl;
	cin >> ocena;
	
	cout << "Podaj wiek" << endl;
	cin >> wiek;

	cout << "Wyswietlanie informacji" << endl;
	cout <<"Imie "<< imie << endl;
	cout <<"Nazwisko "<< nazwisko << endl;
	cout << "Ocena " << ocena - 1 << endl;
	cout << "Wiek " << wiek << endl;
	cout << "Koniec " << endl;

	system("PAUSE");

    return 0;
}

