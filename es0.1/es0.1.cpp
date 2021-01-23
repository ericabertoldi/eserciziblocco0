/* Scrivere un programma completo che chiede all'utente tre numeri interi e ne calcola il prodotto */

#include <iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cout<<"inserire numeri"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    int p=a*b*c;
    cout<<"il prodotto è "<<p<<endl;

    return 0;
}