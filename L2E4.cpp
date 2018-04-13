#include <iostream>

using namespace std;

int main()
{
    int n,mult=0;

    do
    {
        cout<<"Digite um número:";
        cin>>n;
        if(n%3==0 || n%7==0)
            mult++;
    }
    while(n!=0);

    cout<<"Qntd de múltiplos de 3 ou 7:"<<mult;

    return 0;
}
