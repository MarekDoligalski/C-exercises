// CW7_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cctype"
#include "string"


int main()
{
	using namespace std;
	cout << "Podawaj slowa: " << endl;
	char znak;
	int spol = 0;
	int samo = 0;

	do {
		cin.get(znak);
		if (isalpha(znak))
		{
			if (znak == 'a')
			{
				//cout << "to nie a" << endl;
				samo++;
			}
			else
				//cout << "to a" << endl;
			spol++;
		}
	} 
	while (znak != 'q');
		
		cout << "spol " << spol << endl;
		cout << "samo " << samo << endl;

	system("PAUSE");
	return 0;
}