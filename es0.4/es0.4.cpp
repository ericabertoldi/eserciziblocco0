/*  Scrivere un programma che chide all'utente di inserire due interi, e poi scrive il numero più grande
seguito dalla string " is larger". Se i due numeri sono uguali, scrivi il messaggio " These numbers
are equal".  */

#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout<<"insert numbers"<<endl;
    cin>>a;
    cin>>b;
    if (a==b) {
        cout<<"These numbers are equal"<<endl;
    }
    else
    if (a>b) {
        cout<<a<<" is larger"<<endl;
    }
    if (a<b) {
        cout<<b<<" is larger"<<endl;
    }

    return 0;
}