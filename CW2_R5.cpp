// CW2_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "array"

int main()
{
	using namespace std;
	array<long double, 100>tab;

	tab[1] = tab[0] = 1.0;
	//int i = 0;
	for (int i = 2; i < 100; i++)
	{
		tab[i] = i * tab[i - 1];
	};
	for (int i = 0; i < 100; i++)
	{
		cout <<i<<"! = "<< tab[i];
		cout << endl;
	};
	system("PAUSE");
    return 0;
}

