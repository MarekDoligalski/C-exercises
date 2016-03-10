// CW6_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

struct Baton
{
	std::string marka;
	double waga;
	int kalorie;

};

int main()
{
	using namespace std;
	Baton Batony[3]=
	{
		{"PrincePolo", 1.5, 100},
		{"MilkyWay", 2.5, 150},
		{"Mars", 3.4, 120}
	};
	
	cout << Batony[0].marka<<endl;
	cout << Batony[1].waga<<endl;
	cout << Batony[2].kalorie<<endl;

	system("PAUSE");
    return 0;
}

