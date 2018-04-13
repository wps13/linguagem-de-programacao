#include <iostream>
using namespace std;

int mult(int x,int y)
{
    if(y==0)
        return 0;
    if(y==1)
        return x;
    else
    {
        return x + mult(x,y-1);
    }
}

int potencia(int x,int y)
{
    if(y=0)
        return 1;
    if(y>0)
        return (mult(x,x) + potencia(x,y-1));
    else
        return (mult(1.0/x,1.0/x) + potencia(1.0/x,y-1));

}
int main()
{
    int n1,n2;

    cout<<"Insira os números:";
    cin>>n1>>n2;

    cout<<"Potência:"<<potencia(n1,n2);

}
