// CW1_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;

	cout << "PODAJ 1 LICZBE CALKOWITA" << endl;
	int L1;
	cin >> L1;
	cout << "PODAJ 2 LICZBE CALKOWITA" << endl;
	int L2;
	cin >> L2;

	int suma=0;
	int L3;

	for (L3=L1; L3 <= L2; L3 = L3 + 1)
	{
		cout << L3 << endl;
		suma = suma + L3;
	}

	cout << "SUMA LICZB POMIEDZY "<< L1 << " i " << L2 << " to " << suma << endl;
	
	system("PAUSE");
    return 0;
}

