// CW10_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "array"
#include "iostream"


int main()
{
	using namespace std;
	array<double, 4>arr;

	cout << "PODAJ 3 WARTOSCI KTORE ZOSTANA ZAPISANE DO TABLICY ARRAY" << endl;
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	
	cout << "WYSWIETLANIE WARTOSCI TABLICY ZE SREDNIA WARTOSCI" << endl;
	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << (arr[0] + arr[1] + arr[2]) / 3 << endl;

	system("PAUSE");
    return 0;
}

