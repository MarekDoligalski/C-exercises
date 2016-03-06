// Listy.cpp : Defines the entry point for the console application.
//
//#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct elementListy
{
	int liczba;
	string nazwa;
	elementListy *wsk_n;
};

elementListy* glowa;
elementListy* ogon;
elementListy* glowa_druga_lista;
elementListy* ogon_druga_lista;

int maxwiek;

string najstarsza(elementListy* wskElementListy, int &wiek) {
	elementListy* max_adres = wskElementListy;
	int max = wskElementListy->liczba;

	while (wskElementListy != NULL){
		if (wskElementListy->liczba > max){
			max = wskElementListy->liczba;
			max_adres = wskElementListy;
		}
		wskElementListy = wskElementListy->wsk_n;
	}

	wiek = max;

	return max_adres->nazwa;
}

void wyswietl() {
	cout << "najstarsza osoba to:" << endl;
	cout << najstarsza(glowa, maxwiek) << endl;
	cout << "ma lat: " << maxwiek << endl;
}

void wyswietl_liste(elementListy *adres)
{
	while (adres != NULL)
	{
		cout << (*adres).liczba << endl;
		cout << (*adres).nazwa << endl;
		adres = adres->wsk_n;
	}
}
void wstaw_element(elementListy *gdzie, elementListy *co)
{
	elementListy *temp;
	temp = gdzie->wsk_n;
	gdzie->wsk_n = co;
	co->wsk_n = temp;
}

int _tmain()
{
	elementListy *aktualny, *poprzedni, *tmp, *wsk_n;
	int licz;
	int ile_elementow = 0;
	string nazw;

	cout << "Lista jednokierunkowa" << endl;

	cout << "0 konczy wpisywanie" << endl;;
	aktualny = NULL;
	poprzedni = NULL;
	glowa = poprzedni;

	cout << "Wstaw liczbe" << endl;
	cin >> licz;
	cout << "Wstaw nazwe" << endl;
	cin >> nazw;
	while (licz != 0)
	{
		poprzedni = aktualny;
		aktualny = new elementListy;
		aktualny->liczba = licz;
		aktualny->nazwa = nazw;
		aktualny->wsk_n = NULL;

		if (poprzedni != NULL) {
			poprzedni->wsk_n = aktualny;
		}
		else {
			glowa = aktualny;
		}

		cout << "Wstaw liczbe" << endl;
		cin >> licz;
		cout << "Wstaw nazwe" << endl;
		cin >> nazw;
	}

	cout << "WSTAWIANIE ElEMENTU NA PIERWSZE MIEJSCE" << endl;

	cout << "Podaj liczbe: ";
	aktualny = new elementListy;
	cin >> aktualny->liczba;
	cout << "Podaj nazwe: ";
	cin >> aktualny->nazwa;
	aktualny->wsk_n = glowa;
	glowa = aktualny;
	wyswietl_liste(glowa);

	cout << "USUWANIE OSTATNIEGO ELEMENTU" << endl;

	if (aktualny != 0)
	{
		if (aktualny->wsk_n)
		{
			while (aktualny->wsk_n->wsk_n)
				aktualny = aktualny->wsk_n;
			delete aktualny->wsk_n;
			aktualny->wsk_n = NULL;
		}
		else
		{
			delete aktualny;
			glowa = NULL;
		}
	}
	wyswietl_liste(glowa);

	wyswietl();

	system("PAUSE");

	return 0;
}
