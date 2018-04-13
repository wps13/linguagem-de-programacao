#include <iostream>

using namespace std;

int main()
{
    int a=7000,b=20000,c=0;

    while(a<b)
    {
    a=a+a*0.35;
    b=b+b*0.10;
    c++;
    }

    cout << "Quantidade de anos:"<<c<< endl;

    return 0;
}
