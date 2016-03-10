// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;
	int litry;
	int km;
	float uz;
	cout << "Podaj ile przejechano kilometrow" << endl;
	
	cin >> km;
	cout << "Podaj ile zuzyto litrów paliwa" << endl;
	cin >> litry;
	cout << "Zuzycie paliwa na kilometr wynioslo " << endl;
	
	uz = float(litry) / float(km);
	cout << uz;
	system("PAUSE");                                                      
		return 0;
	}
