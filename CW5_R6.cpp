// CW5_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"

int main()
{
	using namespace std;

	cout << "podaj kwote do opodatkowania" << endl;
	double i;
	double podatek;
	double prog4 = 0.0;
	double prog3 = 0.0;
	double prog2 = 0.0;
	double prog1 = 0.0;
	do 
	{
		cin >> i;
		if (i < 5000)
		{
			prog1 = 0 * i;
		}
		else if (i > 5000 && i <= 10000)
		{
			prog2 = i*0.1;
		}
		else if (i > 10000 && i <= 20000)
		{
			prog3 = 10000 * 0.1 + (i - 10000)*0.15;
		}
		else if (i > 20000)
		{
			 prog4 = 10000 * 0.1 + 20000 * 0.15 + (i - 20000)*0.2;
		}
		podatek = prog1 + prog2 + prog3 + prog4;
		
		cout << podatek << endl;
	} while (i > 0.0); //&& i != isalpha(i));
	
	system("PAUSE");
    return 0;
}

