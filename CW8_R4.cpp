// CW8_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

struct pizza
{
	std::string nazwa;
	double waga;
	int srednica;
};

int main()

{
	using namespace std;
	pizza *placek = new pizza;
	
	cout << "PODAJ NAZWE" << endl;
	cin >> placek->nazwa;

	cout << "PODAJ SREDNICE" << endl;
	cin >> placek->srednica;

	cout << "PODAJ WAGA" << endl;
	cin >> placek->waga;

	cout << "SREDNICA: " << placek->srednica << endl;
	cout << "NAZWA: " << placek->nazwa << endl;
	cout << "PODAJ WAGA: " << placek->waga << endl;

	delete placek;
	
	system("PAUSE");

    return 0;
}

