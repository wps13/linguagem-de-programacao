#include <iostream>
//calcula o fatorial de um numero
using namespace std;

int main()
{
    int n,fatorial=1,i=1;

    cout << "Digite um número inteiro:" << endl;
    cin>>n;

    while(i<=n)
    {
        fatorial*=i;
        ++i;
    }

    cout<<"Fatorial do número:"<<fatorial;

    return 0;
}
