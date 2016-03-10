// CW7_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

struct pizza
{
	std::string nazwa;
		int srednica;
		double waga;
};

int main()
{
	using namespace std;
	
	pizza placek;
	cout << "Podaj nazwe placka" << endl;
	cin >> placek.nazwa;
	cout << endl;
	cout << "Podaj srednice" << endl;
	cin >> placek.srednica;
	cout << endl;
	cout << "Podaj wage" << endl;
	cin >> placek.waga;
	cout << endl;
	
	cout << "Nazwa: " << placek.nazwa << endl;
	cout << "Srednica: " << placek.srednica << endl;
	cout << "Waga: " << placek.waga << endl;

	system("PAUSE");
    return 0;
}

