//determinar o maior número entre três numeros
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"Digite três números:";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
        cout<<"O número "<<n1<<" é o maior.";
    else if(n2>n3)
        cout<<"O número "<<n2<<" é o maior.";
    else
        cout<<"O número "<<n3<<" é o maior.";

    return 0;

}
