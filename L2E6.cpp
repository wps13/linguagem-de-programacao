#include <iostream>
//verifica se tem número primo ou não
using namespace std;

int main()
{
    int x,i=2,p=0,a=0;


    while(x!=0)
    {
        cout<<"Digite um número:";
        cin>>x;

        while(i<x)
        {
            if(x%i==0)
                p++;
            i++;
        }
        if(p==0)
            a++;
    }
    if(a!=0)
        cout<<"Número primo digitado";
    else
        cout<<"Número primo não digitado!";

    return 0;
}
