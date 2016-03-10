// Cw2_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

int main()
{
	using namespace std;
	cout << "WYLICZ BMI" << endl;
	
	const double metry=0.348;
	const double kilogramy = 2.2;
	
	int cale;
	int stopy;
	int funty;

	double wagaBMI;
	double wzrostBMI;
	
	cout << "Podaj wzrost w calach istopach" << endl;
	cout << "Podaj cale" << endl;
	cin >> cale;
	cout << "Podaj stopy" << endl;
	cin >> stopy;
	cout << "Podaj wage w funtach" << endl;
	cin >> funty;
	cout << "Konwersja" << endl;
	cout << "Wysokosc w metrach" << (stopy/12+ stopy % 12 + cale)*metry << endl;
	wzrostBMI = (stopy / 12 + cale)*metry;
	cout << "Waga w kilogramach" << (funty / kilogramy) << endl;
	wagaBMI = (funty / kilogramy);

	cout << "BMI wynosi " << wagaBMI / (wzrostBMI*wzrostBMI);
	
		system("PAUSE");
    return 0;
}

