// Cw1_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
int main()
{

	const int cale = 30;
	int wzrost;

	cout << "Podaj wzrost w centymetrach" << endl;
	cin >> wzrost;
	cout << "Twoj wzrost to " << wzrost / cale << " cale i " << wzrost%cale << " stopy" << endl;

	system("PAUSE");
    return 0;
}

