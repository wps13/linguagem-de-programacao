#include <iostream>
#define tam 100
using namespace std;

int ehPrimo(int x,int i)
{
    if(x==i)
        return 1;
    if(x%i==0)
        return 0;
    else
        return ehPrimo(x,i+1);
}
int somaPrimo(int v[],int n)
{
    int soma=0,i;
    for(i=0; i<n; i++)
    {
        if(ehPrimo(v[i],2)==1)
            soma+=v[i];
    }
    return soma;
}
int main()
{
    int v1[tam],tamV1;

    cout<<"Tamanho do vetor:";
    cin>>tamV1;
    cout<<"Elementos do vetor:";
    for(int i=0; i<tamV1; i++)
        cin>>v1[i];

    cout<<"soma dos elementos primos:"<<somaPrimo(v1,tamV1);
}
