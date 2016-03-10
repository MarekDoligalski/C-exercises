// CW2_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"


int main()
{
	const int n = 5;
	double tab[n];
	double srednia=0;
	double wynik=0;
	int licz = 0;
	double zmienna=0;
	bool prawda = 0;

	std::cout << "Podaj datki" << std::endl;
	
		for (int i = 0; i < n; i++)
		{
			std::cin >> zmienna;
			if(zmienna==isalpha(zmienna))
			{	
				prawda=prawda+1;
				break;	
			}
			else
			{
				tab[i] = zmienna;
				srednia = srednia + tab[i];
				licz++;
				wynik = srednia / licz;
			}
		};

	
	if (prawda == 0)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << tab[i];
			std::cout << wynik << std::endl;
		};
	}
	else
	{	
		std::cout << std::endl;
		std::cout << "PA" << std::endl;
	}
	system("PAUSE");
    return 0;
}

