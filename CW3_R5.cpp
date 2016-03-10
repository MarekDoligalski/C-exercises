// CW3_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;

	cout << "PODAJ LICZBY" << endl;
	int liczba=-1;
	int suma = 0;
	
	while (liczba != 0)
	{
		cin >> liczba;
		suma = suma + liczba;
		cout << endl;
		cout << "SUMA = " <<suma << endl;;
	}

	system("PAUSE");
    return 0;
}

