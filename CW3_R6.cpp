// CW3_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	char znak;
	bool p = true;


	

	
	do
	{
		cout << "Wybierz z menu" << endl;
		cout << "a - dodawanie" << endl;
		cout << "b - odejmowanie" << endl;
		cout << "c- mnozenie" << endl;
		cout << "d - dzielenie" << endl;
		
		cin >> znak;
		switch (znak)
		{
		case 'a': cout << "dodawaj dodawanie" << endl;
			break;
		case 'b': cout << "odejmuj odejmowanie" << endl;
			break;
		case 'c':cout << "mnoz mnozenie" << endl;
			break;
		case 'd':cout << "dziel dzielenie" << endl;
			break;
		default: cout << "wybierz jeszcze raz" << endl;
			p = false;
		}
	} while (p == false);
	system("PAUSE");


    return 0;
}

