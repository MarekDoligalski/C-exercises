// Cw7_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	const double galon = 3.875;
	const double mila = 62.14;

	double benz;
	double gaz;
	double gal;

	cout << "Ile zuzyto litrow benzyny na kilometr?" << endl;
	cin >> benz;
	gaz = benz/galon;
	gal = gaz/mila;
	cout << "zuzyto " << gal << " galonow na mile" << endl;

	system("PAUSE");
    return 0;
}

