#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;

    cout << "Digite um número:";
    cin>>n;

    if(n%2==1)
        cout<<"Número ímpar.";
    if(n>=0)
        cout<<"Número não negativo.";
}
