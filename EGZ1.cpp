#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char znak;
    char znak1;
    int l_CZ;
    int l_RZ;

    l_CZ =0;
    l_RZ =0;

while (znak != '!')
{
        cout << "wprowadz znak" << endl;
        cin >> znak;

        if (znak=='c')
            znak1='c';

        else if (znak=='r')
            znak1 ='r';

        if (znak1=='c' && znak=='z')
        {
        l_CZ++;
        znak1=0;
        }
        else if (znak1 =='r' && znak=='z')
        {
        l_RZ++;
        znak1=0;
        }
}
cout << l_CZ << l_RZ << endl;
/*------------------------------------------------------*/
    system("PAUSE");
    return 0;
}
