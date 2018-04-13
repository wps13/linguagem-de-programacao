#include <iostream>
//verifica se o número  ou não primo
using namespace std;

int main()
{
    int x,i=2,p=0;

    cout<<"Digite um número:";
    cin>>x;

    while(i<x)
    {
        if(x%i==0)
            p++;
        i++;
    }
    if(p==0)
        cout<<"Número primo!";
    else
        cout<<"Número não primo!";
    return 0;
}
