// CW3_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"
#include "cstring"


int main()
{
	using namespace std;

	char imie[20];
	char nazwisko[20];
	string napis;

	cout << "Podaj imie" << endl;
	cin >> imie;
	cout << "Podaj nazwisko" << endl;
	cin >> nazwisko;
	cout << endl;

	napis = nazwisko;
	napis += ", ";
	napis += imie;

	cout << napis <<endl;

	system("PAUSE");

    return 0;
}

