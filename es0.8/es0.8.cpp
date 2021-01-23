/* Scrivere un programma che prende due numeri interi e
determina se il primo è un multiplo del secondo.  */

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"inserire numeri"<<endl;
    cin>>a;
    cin>>b;
    if (a%b==0) {
        cout<<a<<" multiplo di "<<b<<endl;
    }
    else cout<<a<< " non multiplo di "<<b<<endl;

    return 0;
}