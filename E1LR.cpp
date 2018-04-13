#include <iostream>
#define tam 100
using namespace std;

int filtra(int v[],int n,int limites[],int vFiltrado[])
{
    int i,cont=0;
    for(i=0; i<n; i++)
    {
        if((v[i]>=limites[i]) && (v[i]<=limites[n+i]))
        {
            vFiltrado[i]=v[i];
            cont++;
        }
    }
    return cont;
}
int main()
{
    int v[tam],tamv,i,lim[tam],filtrado[tam],tamf;

    cout<<"Insira tamanho do vetor:";
    cin>>tamv;
    cout<<"Insira as componentes do vetor:";
    for(i=0; i<tamv; i++)
        cin>>v[i];

    cout<<"Insira as componentes do vetor limite:";
    for(i=0; i<(tam*2); i++)
        cin>>lim[i];


    tamf=filtra(v,tamv,lim,filtrado);

    cout<<"Componentes do vetor filtrado:"<<endl;
    for(i=0; i<tamf; i++)
        cout<<" - "<< filtrado[i];
}
