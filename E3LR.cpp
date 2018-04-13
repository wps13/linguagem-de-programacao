#include <iostream>
#define tam 50
using namespace std;

void troca(int& a,int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int somaElemento(int j)
{
    int somatorio=0,temp;
    for(int i=10; temp!=0; i*=10)
    {
        somatorio=j/i;
        temp=j%i;
        j=temp;
    }
    return somatorio;
}
void ordenaNumeros(int v[],int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>=0; j--)
        {
            if(somaElemento(v[i])>somaElemento(v[j]))
                troca(v[i],v[j]);
            }
    }
}
int main()
{
    int v[tam],tamv;

    cout<<"Tamanho do vetor:";
    cin>>tamv;
    cout<<"Elementos:";
    for(int i=0;i<tamv;i++)
    cin>>v[i];

    ordenaNumeros(v,tamv);

    cout<<"Nova ordem dos vetores:";
    for(int i=0;i<tamv;i++)
    cout<<v[i];
}
