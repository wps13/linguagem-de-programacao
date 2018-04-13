#include <iostream>
//Programa que mostra resultado de acordo com função dada
using std::cin;
using std::cout;

int main()
{
    int x;

    cout<<"Digite um número inteiro:";
    cin>>x;

    if(x<=1)
        cout<<"1";
    else if(x<=2)
        cout<<"2";
        else if(x<=5)
        cout<<x*x;
            else
        cout<<x*x*x;

    return 0;
}
