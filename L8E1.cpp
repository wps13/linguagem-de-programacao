#include <iostream>
using namespace std;

int mult(int x,int y)
{
    if(y==0)
        return 0;
    if(y==1)
        return x;
    else
    {
        return x + mult(x,y-1);
    }
}
int main()
{
    int n1,n2;

    cout<<"Insira os números:";
    cin>>n1>>n2;

    cout<<"produto:"<<mult(n1,n2);

}
