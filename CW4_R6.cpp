// CW4_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

struct prog
{
	char imie[10];
	char nazwisko[10];
	char pseudo[10];
	int pref;

};

int main()

{
	const int n = 2;
	prog tab[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> tab[i].imie;
		std::cin >> tab[i].nazwisko;
		std::cin >> tab[i].pseudo;
		std::cin >> tab[i].pref;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << tab[i].imie<<std::endl;
		std::cout << tab[i].nazwisko<<std::endl;
		std::cout << tab[i].pseudo<<std::endl;;
		std::cout << tab[i].pref<< std::endl;
	}
	
	std::cout << "Wybierz z menu" << std::endl;
	char znak;
	std::cin >> znak;
	switch (znak)
	{
	case 'a': std::cout << "Pokaz imiona" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << tab[i].imie << std::endl;
		}
	case 'b': std::cout << "Pokaz nazwisko" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << tab[i].nazwisko << std::endl;
		}
	case 'c': std::cout << "Pokaz pseudo" << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << tab[i].pseudo << std::endl;
		}
	case 'd': std::cout << "Pokaz wg preferencji" << std::endl;
		for (int i = 0; i < n; i++)
		{
			if (tab[i].pref == 0)
			{
				std::cout << tab[i].imie << std::endl;
			}
			else if (tab[i].pref == 1)
			{
				std::cout << tab[i].nazwisko << std::endl;
			}
			else if (tab[i].pref == 2)
			{
				std::cout << tab[i].pseudo << std::endl;
			}

		}

		std::cout << "PA PA" << std::endl;
		system("PAUSE");
	}
    return 0;
}

