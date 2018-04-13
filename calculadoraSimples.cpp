#include <iostream>

using std::cin;
using std::cout;

int main()
{
    float n1,n2;
    int operacao;

    cout<<"Digite os números:";
    cin>>n1>>n2;

    cout<<"Digite a operação desejada:\n1-Soma\n2-Subtração\n3-multiplicação\n4-Divisão\n";
    cin>>operacao;

    switch(operacao)
    {
    case 1:
        cout<<n1+n2;
        break;
    case 2:
        cout<<n1-n2;
        break;
    case 3:
        cout<<n1*n2;
        break;
    case 4:
        cout<<n1/n2;
        break;
    default:
        cout<<"operação inválida!";
        break;
    }
}
