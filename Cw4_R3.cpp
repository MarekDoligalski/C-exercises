// Cw4_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;

	long long sekundy;
	int dni=86400;
	int godz=3600;	
	int minuty=60; 

	cout << "Podaj liczbe sekund" << endl;
	cin >> sekundy;
	cout << "Dni "<<sekundy / dni << endl;
	cout << "Godziny "<< ((sekundy%dni))/godz<<endl;
	cout << "Minuty " << (((sekundy%dni))%godz)/minuty <<endl;
	cout << "Sekundy " << (((sekundy%dni)) % godz) % minuty<<endl;
	system("PAUSE");
    return 0;
}

