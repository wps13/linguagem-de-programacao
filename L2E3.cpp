#include <iostream>
//calcula a potencia de um numero
using namespace std;

int main()
{
    int x,y;

    cout << "Digite dois números inteiros:" << endl;
    cin>>x>>y;

    for(int i=1;i<y; ++i)
        x*=x;

    cout<<"Potência:"<<x;

    return 0;

}
