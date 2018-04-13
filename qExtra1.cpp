//programa que soma os elementos de um vetor
#include <iostream>
#define tam 100
using namespace std;

int soma(int v[],int n)
{
    int total=0;

    for(int i=0; i<n; i++)
        total+=v[i];

    return total;
}

int main()
{
    int vetor1[tam],numElementos;

    cout<<"Digite o tamanho do vetor:";
    cin>>numElementos;

    cout<<"Digite as componentes do vetor:";
    for(int i=0; i<numElementos; i++)
        cin>>vetor1[i];

    cout<<soma(vetor1,numElementos);

}
