//calcular fatorial de um numero
#include <iostream>
using namespace std;

int fatorial(int x);

int main()
{
    int n;

    while(n<=0)
    {
        cout<<"Digite um número:";
        cin>>n;
    }

    cout<<"Fatorial de "<<n<<" == "<<fatorial(n);
}

int fatorial(int x)
{
    int soma=1;
    for(int i=1;i<=x;i++)
        soma*=i;

    return soma;
}

