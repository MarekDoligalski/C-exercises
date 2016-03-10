// CW9_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  "string"
#include "iostream"


int main()
{
	using namespace std;
	string slowo;
	int licznik=0;

	cout << "Podawaj slowa az do wczytania slowa /gotowe/"<<endl;

	while (slowo != "gotowe")
	{
		cin >> slowo;
		licznik++;
	}

	cout << "wyswietlono " << licznik << " slow(a)" << endl;
	system("PAUSE");

    return 0;
}

