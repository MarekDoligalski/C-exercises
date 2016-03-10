// CW5_R4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"


using namespace std;
int main()
{
	
struct Baton
	{
		string marka;
		double waga;
		int kalorie;
	};
Baton Prince=
{
	"Prinece Polo",
	 2.45,
	 100,

}; 

	cout <<Prince.marka<<endl;
	cout << Prince.waga<<endl;
	cout << Prince.kalorie<<endl;

	system("PAUSE");
    return 0;
}

