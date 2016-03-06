#include <iostream>

using namespace std;

int main()
{
    cout << "Odgadnij liczbe" <<endl;
    int l = 33;
    int z;
    int licz = 0;
    while(licz < 3 &&z != 33)
    {
       cin >> z;
       if(z == 33)
       {
           cout << "Wygrales Balona" << endl;
           break;
       }
       else if (z > 33)
       {
           cout << z-33 << " O tyle za duza liczba" << endl;
           licz++;
       }
       else if (z < 33)
       {
            cout << 33-z << " O tyle za mala liczba" << endl;
            licz++;
       }
    }
    if(licz >= 3)
        {
            cout << "Chuj nie Balon" << endl;
        }
    else
        {
            cout << "Lataj Balonem" << endl;
        }
    return 0;
}
