//mostrar divisores de um número
#include <iostream>
using namespace std;

int divisores(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<'\t';
    }
}

int main()
{
    int num;
    do{
    cout<<"Digite um número:";
    cin>>num;
    }
    while(num<=0);

    divisores(num);
}
