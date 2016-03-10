// CW6_R5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

	int main()
	{
		using namespace std;
	
	string miesiac[12] = { "Styczen","Luty","Marzec","Kwiecien","Maj","Czerwiec","Lipiec","Sierpien","Wrzesien","Pazdziernik","Listopad","Grudzien" };
	int spd[3][12]; 
	int spd_rok=0;
	int	spd_cala=0;

	cout << "Wprowadz sprzedaz" << endl;
	for (int i = 0; i < 3; i++) 
	{
		cout << "Rok " << (i + 1) << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << miesiac[j] << endl;
			cin >> spd[i][j];
		}
	};

	cout << "Informacje o sprzedazy" << endl;
	for (int i = 0; i < 1; i++)
	{
		cout << "Rok " << (i + 1) << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << miesiac[j] << " " << spd[i][j] << endl;
			spd_rok = spd_rok + spd[i][j];
			spd_cala = spd_cala + spd[i][j];
		}
		cout << "Sprzedano w roku " << (i + 1) << " " << spd_rok << endl;
	};
	cout << "Sprzdano ogolem " << spd_cala << endl;

	system("PAUSE");
return 0;
}