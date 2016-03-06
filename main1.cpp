#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Podaj rok"<<endl;
    cin>>year;

    if(year=='2015')
        {
            cout<<"rok 2015 jest obecnie"<<endl;
        }
    else if(year>'2015')
        {
            cout<<year<<" nastapi za"<<year-2015<<" lat"<<endl;
        }
    else if(year<'2015'&&year>'0')
        {
            cout<<year<<" byl "<< 2015-year<<"lat temu"<<endl;
        }
    else if(year=='0')
        {
            cout<<"dane sa nieprawidlowe"<<endl;
        }
    else if(year <'0')
    {
        cout<<"rok byl pne"<<year<<endl;
    }
    return 0;
}
