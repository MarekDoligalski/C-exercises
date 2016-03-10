// CW5_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

int main()
{
	using namespace std;

	string miesiac[12] = { "styczen", "luty", "marzec", "kwiecien", "maj","czerwiec","lipeic", "sierpien", "wrzesien", "pazdziernik","listopad","grudzien" };
	int sprzedaz[12];
	int suma = 0;

	cout << "Podaj sprzedaz w miesiacu" << endl;

	for (int i = 0; i < 12; i++)
	{
		cout << miesiac[i] << endl;
		cin >> sprzedaz[i];
	};

	cout << "Suma sprzedazy" << endl;

	for (int i = 0; i < 12; i++)
	{
		suma = suma + sprzedaz[i];
	};
	cout << "SUMA SPRZEDAZ W CALYM ROKU WYNOSI " << suma << endl;
	system("PAUSE");
    return 0;
}

