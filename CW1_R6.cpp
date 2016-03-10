// CW1_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"


int main()
{
	char znak='a';

	while (znak != '@')
	{
		std::cin.get(znak);

		if (isupper(znak))
		{
			znak=tolower(znak);
		}
		else if (islower(znak))
		{
			znak=toupper(znak);
		}
		else if (isdigit(znak))
		{
			continue;
		}
		std::cout << znak;
	};

	system("PAUSE");
    return 0;
}

