//simula uma calculadora com as 4 operaçoes basicas
#include <iostream>
using namespace std;

int main()
{
    float n1,n2;
    int op;

    cout<<"Digite dois números:";
    cin>>n1>>n2;

    cout<<"Digite o codigo corresponte a operação desejada:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n";
    cin>>op;

    switch(op)
    {
    case 1:
        cout<<n1<<" + "<<n2<<" = "<<n1+n2;
        break;
    case 2:
        cout<<n1<<" - "<<n2<<" = "<<n1-n2;
        break;
    case 3:
        cout<<n1<<" * "<<n2<<" = "<<n1*n2;
        break;
    case 4:
        cout<<n1<<" / "<<n2<<" = "<<n1/n2;
        break;
    default:
        cout<<"Operação inválida.";
        break;
    }
}
