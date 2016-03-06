#include <iostream>
#include <cstdlib>
#include <string>



using namespace std;

struct lista
{
  int liczba;
  string nazwa;
  lista *wsk_n;
};
lista *glowa, *aktualny, *poprzedni, *tmp, *wsk_n;
/*void wstaw_na_pierwsze_miejsce (int liczba, string nazwa)
{   lista *aktualny, *wsk_n, *glowa;
    cout << "Podaj liczbe: ";
    aktualny = new lista;
    cin >> aktualny->liczba;
    cout<<"Podaj nazwe: ";
    cin >> aktualny->nazwa;
    aktualny->wsk_n=glowa;
    glowa=aktualny;
}*/
void wyswietl_liste(lista *adres)
{
    while(adres!=NULL)
        {
        cout<<(*adres).liczba<<endl;
        cout<<(*adres).nazwa<<endl;
        adres=adres->wsk_n;
        }
}
void wstaw_element( lista *gdzie, lista *co)
{
    lista *temp;
    temp = gdzie->wsk_n;
    gdzie->wsk_n = co;
    co->wsk_n = temp;
}
void zwroc_pierwsza (lista *pierwszy_element)
{
    pierwszy_element = glowa;
}

int main()
{

    int licz;
    int ile_elementow=0;
    string nazw;

  cout<<"Lista jednokierunkowa"<<endl;

  cout << "0 konczy wpisywanie"<<endl;;
  aktualny = NULL;
  poprzedni = NULL;
  glowa = poprzedni;

    cout << "Wstaw liczbe"<<endl;
    cin >> licz;
    cout<<"Wstaw nazwe"<<endl;
    cin >> nazw;
  while (licz!=0)
  {
    poprzedni = aktualny;
    aktualny = new lista;
    aktualny->liczba = licz;
    aktualny->nazwa = nazw;
    aktualny->wsk_n = NULL;

    if (poprzedni != NULL)

            poprzedni->wsk_n = aktualny;

    else

            glowa = aktualny;
            cout << "Wstaw liczbe"<<endl;
            cin >> licz;
            cout<<"Wstaw nazwe"<<endl;
            cin >> nazw;

  }

cout<<"WSTAWIANIE ElEMENTU NA PIERWSZE MIEJSCE"<<endl;

    cout << "Podaj liczbe: ";
    aktualny = new lista;
    cin >> aktualny->liczba;
    cout<<"Podaj nazwe: ";
    cin >> aktualny->nazwa;
    aktualny->wsk_n=glowa;
    glowa=aktualny;
    wyswietl_liste(glowa);

cout<<"USUWANIE OSTATNIEGO ELEMENTU"<<endl;

  if(aktualny!=0)
  {
    if(aktualny->wsk_n)
    {
      while(aktualny->wsk_n->wsk_n)
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
 lista *pel;
 zwroc_pierwsza (pel);

 cout << pel->nazwa;
    return 0;
}
