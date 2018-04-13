//testa ponto em círculo
#include <iostream>
#include <cmath>
using namespace std;

bool teste(int r,int x,int y,int x1,int y1);
//r=raio,x e y referem-se as coordenadas do ponto central,x1 e y1 do ponto generico

int main()
{
    int raio,pc1,pc2,p1,p2;

    cout<<"Digite o raio do círculo,as coordenadas do ponto central e as coordenadas do ponto desejado:"<<endl;
    cin>>raio>>pc1>>pc2>>p1>>p2;

    if(teste(raio,pc1,pc2,p1,p2)==true)
        cout<<"O ponto está dentro do círculo.";
    else
        cout<<"O ponto nao está dentro do círculo.";
}
bool teste(int r,int x,int y,int x1,int y1)
{
    int d,x0,y0;

    x0=pow(x1-x,2);
    y0=pow(y1-y,2);
    d=sqrt(x0+y0);

    if(d<=r)
        return true;
    else
        return false;
}
