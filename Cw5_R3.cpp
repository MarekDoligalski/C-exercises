// Cw5_R3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
	using namespace std;


	long long ludSW;
	long long ludP;

	cout << "Podaj liczbe ludnosci swiata" << endl;
	cin >> ludSW;
	cout << "Podaj liczbe ludnosci Polski" << endl;
	cin >> ludP;
	
	long double Pproc = (ludP * 100);
	long double SWproc = Pproc / ludSW;
	cout << SWproc;
	system("PAUSE");
    return 0;
}

