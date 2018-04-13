#include <iostream>

using namespace std;

int main()
{
    int soma=0,moeda;

    while(soma<50)
    {
        cout<<"Insira a moeda:";
        cin>>moeda;
        if(moeda!=5 && moeda!=10)
        {
            cout<<"Moeda Inválida!"<<endl;
            continue;
        }
        soma+=moeda;
    }
    cout<<"Troco:"<<soma-50;

    return 0;
}
