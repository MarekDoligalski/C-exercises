// CW10_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	cout << "PROGRAM RYSUJE CHOINKE" << endl;
	cout << "PODAJ WYSOKOSC CHOINKI" << endl;

	int rozmiar;
	cin >> rozmiar;
	int kol = 0;

	

	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0 ; j < rozmiar-kol; j++)
		{
			cout << " ";
		}
		for (int x = 0; x < kol; x++)
		{
			cout << "H";
		}
		   cout << "H";
		   kol++;
		   cout << endl;
	}

	system("PAUSE");
    return 0;
}

