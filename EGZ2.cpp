#include <iostream>
#include <iostream>

using namespace std;

const char n=3
;
const int p=5;
const int k=1;

int main()
{
 char a[n][n];
 char i,f
 j;

int liczA=0;
 cout << "wpisz znaki" << endl;

    for(i=0; i<n; i++){
    for(j=0; j<n; j++)

cin >> a[i][j];
}
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)

if (a[i][j]=='a'){
    liczA++;}

    if(liczA>k&&liczA<p){
    for(i=0; i<n; i++)
    a[i][i]=a[0][j-1];}


    cout <<"tablica"<<endl;

    for(i=0; i<n; i++)
{
    for(j=0; j<n; j++)

    cout <<a[i][j]<<" ";
    cout << endl;
}
    cout << a[0][j-1];



  return 0;
}

