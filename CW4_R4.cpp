// CW4_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cstring"
#include "iostream"


int main()

{
	using namespace std;

	char imie[20];
	char nazwisko[20];
	
	cout << "Podaj nazwisko" << endl;
	cin >> nazwisko;
	cout << "Podaj imie" << endl;
	cin >> imie;

	strcat_s(nazwisko, ", ");
	strcat_s(nazwisko, imie);
	cout << nazwisko << endl;

	system("PAUSE");
    return 0;
}

