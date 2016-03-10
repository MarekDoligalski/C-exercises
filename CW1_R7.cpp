// CW1_R7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
double funk(double x, double y)
{
	return 2.0*x*y / (x + y);
}

int main()
{
	using namespace std;

	double	a=-1;
	double  b=-1;
	
	while (a != 0 && b != 0)
	{
		cin >> a;
		cin >> b;
		cout << funk(a, b);
	}
	cout << "KONIEC" << endl;
	system("PAUSE");
    return 0;
}

