#include <iostream>

using namespace std;

int main()
{
    int s;
    cout << "Ile stolikow chce zarezerwowac" << endl;
    cin>>s;
    if(s>=1&&s<=2)
        {
        cout<<"2"<<endl;
        }
    else if(s>=3&&s<=4)
    {
        cout<<"4"<<endl;
    }
    else if(s>=5&&s<=6)
    {
        cout<<"6"<<endl;
    }
    else if(s>=7&&s<=10)
    {
        cout<<"10"<<endl;
    }
    else if(s<1||s>10)
        {
        cout<<"0"<<endl;
        }
    return 0;
}
