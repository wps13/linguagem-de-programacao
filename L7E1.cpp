//testar se os elementos de um vetor estão em ordem
#include <iostream>
#define tam 50
using namespace std;

int ordem(int v1[],int n)
{
    int i;
    int cres=0,decres=0;
    for(i=0; i<(n-1); i++)
    {
        if(v1[i+1]>v1[i])
            cres++;
        else if(v1[i+1]<v1[i])
            decres++;
    }
    if(cres==n)
        return 1;
    else if(decres==n)
        return 2;
        else
           return 0;


}

int main()
{

    int vNum[tam],num,valorOrdem=0;

    cout<<"Digite o tamanho do vetor:";
    cin>>num;

    cout<<"Digite os elementos do vetor:";
    for(int i=0; i<num; i++)
        cin>>vNum[i];

    valorOrdem=ordem(vNum,num);

    if(valorOrdem==1)
        cout<<"O vetor está ordenado em ordem crescente.";
    else if(valorOrdem==2)
        cout<<"O vetor está ordenado em ordem decrescente.";
    else
        cout<<"O vetor não está ordenado.";
}


