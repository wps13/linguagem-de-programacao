//testar se um numero é perfeito ou nao
#include <iostream>
using namespace std;

int perfeito(int x);

int main()
{
    int n;

    cout<<"Digite um número inteiro:";
    cin>>n;

    perfeito(n);
    if(perfeito(n)==true)
        cout<<"O número é perfeito";
    else
        cout<<"O número não é perfeito";
}
int perfeito(int x)
{
    int soma=0;
    for(int i=1; i<x; i++)
    {
        if(x%i==0)
            soma+=i;
    }
    if(soma==x)
        return true;
    else
        return false;
}
