// CW6_R6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

struct sponsor
{
	std::string nazwisko;
	double kwota;
};

int main()

{
	using namespace std;

	cout << "Ilu jest sponsor�w  - Podaj liczbe" << endl;
	int n;
	cin >> n;
	sponsor *tab = new sponsor[n];
	
	cout << "Podaj dane sponsorow" << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> tab[i].nazwisko;
		cin >> tab[i].kwota;
		cout << "Podaj dane nastepnego sponosora" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (tab[i].kwota > 10000)
		{
			cout << "najlepsi za najlepszych" << endl;
			cout << tab[i].nazwisko << endl;
			cout << tab[i].kwota << endl;
		}
		if (tab[i].kwota > 5000 && tab[i].kwota <= 10000)
		{
			cout << "sredni ze srednich" << endl;
			cout << tab[i].nazwisko << endl;
			cout << tab[i].kwota << endl;
		}

		if (tab[i].kwota >= 0 && tab[i].kwota <= 5000)
		{
			cout << "biedak nie sponsor" << endl;
			cout << tab[i].nazwisko << endl;
			cout << tab[i].kwota << endl;
		}
	}
	delete[] tab;
	system("PAUSE");
	return 0;
}

