#include <iostream>
#define tam 100
#define m 10
using namespace std;

void f(float v[],int n)
{
    int i,j,cont[m];
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(v[i]>=(j+0.0) || v[i]<(j+1.0))
                cont[i]=1;
        }
    }
    cout<<cont[0]<<" aluno(s) no intervalo [0,1)"<<endl;
}
int main()
{
    float v1[tam],tamv1;

    cin>>tamv1;

    for(int i=0;i<tamv1;i++)
    cin>>v1[i];

    f(v1,tamv1);

}
