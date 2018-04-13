//imprime num na ordem inversa
#include <iostream>
#include <cmath>
using namespace std;

int inverteNumero(int num)
{
    int soma=0,a=0,b=1000;
    soma+=(num/b)*pow(10,a);
    a++;
    b/=10;

    return soma;
}
bool maiorInvertido(int x,int y)
{
    int n1=inverteNumero(x);
    int n2=inverteNumero(y);
    if(n1>n2)
        return true;
    else
        return false;

}
int main()
{
    int n1,n2;

    cout<<"Insira os números:";
    cin>>n1>>n2;

    if(maiorInvertido(n1,n2)==true)
        cout<<n1<<" invertido é maior que "<<n2<<" invertido.";
    else
        cout<<n1<<" invertido é menor que "<<n2<<" invertido.";
}
