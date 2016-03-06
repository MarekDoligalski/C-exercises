#include <iostream>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
const int n=3;
int main()

{
    int T[n][n];
    int P[n];
    int i=n,j,d,g;

        cout <<"WPISZ ZAKRES TABLICY"<<endl;

        cin >>d>>g;

    cout <<"WYPELNIANIE TABLICY"<<endl;

    srand(time(0));
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j+++)
        {
            T[i][j]=d+rand()%(g+1-d);
        }
    }

    cout <<"WYSWIETLANIE TABLICY WIERSZAMI"<<endl;

        for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                cout<<T[i][j]<<"\t";
                cout<<endl;
            }

    cout <<"WYSWIETLANIE TABLICY KOLUMNAMI"<<endl;

        for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                cout<<T[j][i]<<"\t";
                cout<<endl;
            }

    cout <<"WYSWIETLANIE TABLICY WIERSZAMI OD LEWEGO DOLNEGO ROGU"<<endl;

        for(i=n-1; i>=0; i--)
        {
            for(j=n-1; j>=0; j--)
            cout<<T[i][j]<<"\t";
            cout<<endl;
        }

    cout<<"WYSWIETLANIE TABLICY OD PRAWEGO DOLNEGO ROGU"<<endl;

        for(i=n-1; i>=0; i--)
        {
            for(j=0; j<n; j++)
            cout<<T[i][j]<<"\t";
            cout<<endl;
        }

    cout<<"PRZEKATNE"<<endl;
    cout<<"WYPELNIANIE PRZEKATNEJ OD LEWEGO GORNEGO ROGU. WPISZ LICZBY"<<endl;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            cin>>T[i][j];
        }

        for(i=0; i<n; i++)
        {
            cin>>T[i][i];
        }

        for(i=1; i<n; i++)
        {
            for(j=i-1;j>=0; j--)
            cin>>T[i][j];
        }

    cout<<"WYSWIETLANIE PRZEKATNEJ"<<endl;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            cout<<T[i][j]<<"\t";
            cout<<endl;
        }

    cout<<"WYPELNIANIE PRZEKATNEJ OD PRAWEGO GORNEGO ROGU. WPISZ LICZBY"<<endl;

        for(i=0; i<n-1; i++)
        {
            for(j=n-2-i; j>=0; j--)
            cin>>T[i][j];
        }

        for(i=0; i<n; i++)
        {
            cin>>T[i][n-1-i];
        }

        for(i=1; i<n; i++)
        {
            for(j=n-i; j<n; j++)
            cin>>T[i][j];
        }

    cout<<"WYSWIETLANIE PRZEKATNEJ"<<endl;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            cout<<T[i][j]<<"\t";
            cout<<endl;
        }

    cout<<"WYSWIETLANIE EKSTREMALNYCH WARTOSCI WIERSZY I KOLUMN"<<endl;
    cout<<"LOSOWANIE WARTOSCI TABLICY"<<endl;

        for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                    {
                        T[i][j]= d+rand()%(g+1-d);
                    }
            }
    cout<<"WYSWIETLANIE TABLICY"<<endl;

        for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                cout<<T[i][j]<<"\t";
                cout<<endl;
            }
    cout<<"OBLICZANIE NAJWIEKSZYCH WARTOSCI W WIERSZACH"<<endl;

        int naj_w[n];

        for(i=0; i<n; i++)
            {
                naj_w[i] = T[i][0];
                    {
                        for(j=0; j<n; j++)
                            {
                                if(T[i][j]>naj_w[i])
                                    {
                                        naj_w[i]=T[i][j];
                                    }
                            }
                    }
            }

    cout<<"OBLICZANIE NAJWIEKSZYCH WARTOSCI W KOLUMNACH"<<endl;

        int naj_k[n];

        for(j=0; j<n; j++)
            {
                naj_k[j]=T[0][j];
                    {
                        for(i=0; i<n; i++)
                            {
                                if(T[i][j]>naj_k[j])
                                    {
                                        naj_k[j]=T[i][j];
                                    }
                            }
                    }
            }

    cout<<"WYSWIETLANIE EKSTREMALNYCH WARTOSCI WIERSZY I KOLMUN TABLICY"<<endl;

    for(i=0; i<n; i++)
            {
                for (int j=0; j<n; j++)

                        cout << T[i][j]<<"\t";
                        cout <<naj_w[i]<<endl;
                        cout << endl;
            }

    for (i=0;i<1;i++)
            {
                for (j=0;j<n;j++)

                        cout << naj_k[j]<<"\t";
                        cout << endl;
            }
    cout<<endl;
    cout<<"CZY GLOWNA PRZEKATNA JEST PALIANDROMEM"<<endl;
    //cout<<"WYPELNIANIE NOWEJ TABLICY"<<endl;

    for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            T[i][j]=d+rand()%(g+1-d);
        }

    cout<<"WYSWIETLANIE TABLICY"<<endl;

    for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            cout<<T[i][j]<<"\t";
            cout<<endl;
        }
    cout<<"WYSWIETLANIE PRZEKATNEJ"<<endl;

    for(i=0; i<n; i++)
        {
            cout<<T[i][i];
        }
    cout<<endl;
    //cout<<"SPRAWDZANIE CZY PRZEKATNA JEST PALIANDROMEM"<<endl;
    bool E=true;
    for(i=0; i<n; i++)
        {
            P[i]=T[i][i];
        }

    for(i=0; i<n; i++)
        {
        if(P[i]!=P[n-i-1])
            {
                E=false;
                //break;
            }
        else
            {
                E=true;
            }
        }
        if(E==false)
            {
                cout<<"PRZEKATNA NIE JEST PALIANDROMEM";
            }
            else
                {
                    cout<<"PRZEKATNA JEST PALIANDROMEM";
                }
cout<<endl;
cout<<endl;
cout<<"SPRAWDZANIE CZY WIERSZE SA PALIANDRONAMI"<<endl;
int liczW=0;
bool W=true;

for(i=0; i<n; i++)
{
        for(j=0; j<n; j++)
        {
            //P[j]=T[i][j];
            cout<<T[i][j]<<" ";
                        if(T[i][j]!=T[i][n-j-1])
                        {
                            W=false;
                            break;
                        }
                        else
                        {
                            W=true;
                        }

        }
        if(W==false)
            {
                cout<<"WIERSZ "<<i+1<<" NIE JEST PALIANDROMEM"<<endl;
            }
            else
                {
                    cout<<"WIERSZ "<<i+1<<" JEST PALIANDROMEM"<<endl;
                    liczW++;
                }
}

 cout<<liczW<<" WIERSZY TO PALIANDROMY"<<endl;
    cout<<endl;
    cout<<"SPRAWDZANIE ILE KOLUMN JEST PALIANDROMAMI"<<endl;

    int liczK=0;
    bool K=true;

    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            //P[i]=T[i][j];
            cout<<T[i][j]<<" ";
            {
                    if(T[i][j]!=T[n-i-1][j])
                    {
                        K=false;
                        break;
                    }
                    else
                    {
                        K=true;
                    }
            }
        }
        if(K==false)
            {
                cout<<"KOLUMNA "<<j+1<<" NIE JEST PALIANDROMEM"<<endl;
            }
            else
                {
                    cout<<"KOLUMNA "<<j+1<<" JEST PALIANDROMEM"<<endl;
                    liczK++;
                }
    }
cout<<liczK<<" KOLUMN TO PALIANDROMY"<<endl;
 cout<<endl;
    cout<<"KONIEC PROGRAMU"<<endl;

    /*for(i=0;i<n;i++){cin>>P[i];}=d+rand()%(g+1-d);}
    for(i=0;i<n;i++){cout<<P[i]<<" ";}
    for(i=0; i<n; i++)
        {
        cout<<P[i];
        if(P[i]!=P[n-i-1])
            {
                E=false;
                break;
            }
        else
            {
                E=true;
            }
        }
        if(E==false)
            {
                cout<<" NIE JEST PALIANDROMEM";
            }
            else
                {
                    cout<<" JEST PALIANDROMEM";
                }*/
    system("PAUSE");
    return 0;
}


