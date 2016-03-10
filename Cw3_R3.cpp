// Cw3_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	
	const double minuty=1.0/60; 
	const double sekundy=1.0/360; 
	const double stopnie=1.0;

	double stopien;
	double minuta;
	double sekunda;

	
	cout << "Podaj dlugosc w stopniach, minutach i sekundach" << endl;
	cout << "Podaj stopnie" << endl;
	cin >> stopien;
	cout << "Podaj minuty" << endl;
	cin >> minuta;
	cout << "Podaj seknudy" << endl;
	cin >> sekunda;

	cout << "Dlugosc w stopniach to: " << stopien + minuta*minuty + sekunda*sekundy;
	
	system("PAUSE");

    return 0;
}

