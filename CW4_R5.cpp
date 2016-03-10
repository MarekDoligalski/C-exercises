// CW4_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"


int main()
{
	using namespace std;
	double KD=100.0;
	double KC=100.0;
	double KD1;
	
	do
	{
		cout << "Inwestycje Dafne" << endl;

		//for (int i = 0; i < 20; i++)
		{
			KD1 = 100.0 * 0.10;
			KD = KD + KD1;

			cout << KD << endl;
		};

		cout << "Inwestycje Cleo" << endl;

		//for (int i = 0; i < 20; i++)
		{
			KC = 0.05*KC + KC;
			cout << KC << endl;
		};
	}
while (KD > KC);
	
	cout << "Wyswietlanie wartosci w Tablicy" << endl;
	cout << "Ile wyswietlic wierszy?" << endl;

	int r;
	cin >> r;
	
 KD = 100.0;
 KC = 100.0;
	
	for (int i = 0; i<r; i++)
	{
		for (int j = 0;j<1; j++)
		{
			KD1 = 100.0 * 0.10;
			KD = KD + KD1;
			cout << KD << " ";

			KC = 0.05*KC + KC;
			cout << KC << " ";
		}
		cout << endl;
	};

	system("PAUSE");
    return 0;
}

