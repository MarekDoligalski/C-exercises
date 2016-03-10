// CW8_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	
	char slowo[80];
	int licznik=0;

	cout << "Wstawiaj slowa. Slowo /gotowe/ konczy program" << endl;

	while (strcmp(slowo, "gotowe") != 0)
	{
		cin >> slowo;
		licznik++;
	}

	cout << "Wpisano " << licznik << " slow" << endl;
	system("PAUSE");

    return 0;
}

