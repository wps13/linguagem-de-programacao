//retornar verdadeiro ou falso
#include <iostream>
using namespace std;

int teste(int x)
{
    if((x%2)==0)
        return true;
    else
        return false;
}

int main()
{
    int num;

    cout<<"Digite um número inteiro:";
    cin>>num;

    teste(num);

    if(teste(num)==true)
        cout<<"O número é verdadeiro";
    else
        cout<<"O número é falso";


    return 0;
}
