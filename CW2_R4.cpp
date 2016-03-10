// CW2_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"


int main()
{
	using namespace std;
	
	string name;
	string dessert;

	cout << "Podaj imie" << endl;
	getline(cin, name);
	
	cout << "Podaj deser" << endl;
	getline(cin, dessert);

	cout << "Mam dla Ciebie " << dessert << endl;
	cout << name << endl;

	system("PAUSE");
    return 0;
}

