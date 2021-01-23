/* Scrivere un programma che legge tre numeri e calcola la somma, la media, il prodotto, il più grande e il
più piccolo. */

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"inserire 3 diversi numeri"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    float sum= a+b+c;
    cout<<"somma = "<<sum<<endl;
    float media = sum/3;
    cout<<"media = "<<media<<endl;
    int prodotto = a*b*c;
    cout<<"prodotto = "<<prodotto<<endl;

    if (a>b) {
        if (a>c) {
            cout<<"numero maggiore "<<a<<endl;
            if (b>c) {
                cout<<"numero minore "<<c<<endl;
            } else cout<<"numero minore "<<b<<endl;
        } else
        cout<< "numero maggiore "<<c<<endl;
        cout<< "numero minore "<<b<<endl;
    }
    if (b>a) {
        if (b>c) {
            cout<<"numero maggiore "<<b<<endl;
            if (a>c) {
                cout<<"numero minore "<<c<<endl;
            } else cout<<"numero minore "<<a<<endl;
        } else
        cout<<"numero maggiore "<<c<<endl;
        cout<<"numero minore "<<a<<endl;
    }

    return 0;
    }
