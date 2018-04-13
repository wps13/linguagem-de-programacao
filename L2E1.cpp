#include <iostream>
//programa que imprime os números inteiros impares
using namespace std;

int main()
{
    int n,i=1;

    cout << "Digite um número:" << endl;
    cin>>n;

    while(i<=n)
    {
        if(i%2!=0)
            cout<<i<<endl;
        ++i;
    }

    return 0;
}
