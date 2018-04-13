#include <iostream>

using namespace std;

int main()
{
   int x,y,q,resto;

    cout<<"Digite dois números:";
    cin>>x>>y;

    q=x/y;

    resto=x-(q*y);

    cout<<"Resto:"<<resto;
    return 0;
}
