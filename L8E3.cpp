#include <iostream>
using namespace std;

int ehPrimo(int x,int i)
{
    if(x==i)
        return 1;
    if(x%i==0)
        return 0;
    else
        return ehPrimo(x,i+1);
}
int main()
{
    int numTeste,div;

    cout<<"Digite o número para testar:";
    cin>>numTeste;

    cout<<"Digite o possível divisor:";
    cin>>div;

    if(ehPrimo(numTeste,div)==1)
        cout<<"O número é primo.";
    else
        cout<<"O número não é primo.";

}
