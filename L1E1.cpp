//testar se o número é par ou impar
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Digite um número inteiro:";
    cin>>n;

    if(n%2==0)
        cout<<"O número é par.";
    else
        cout<<"O número ímpar";

    return 0;
}
