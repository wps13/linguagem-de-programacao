//testar se ano é bissexto ou não

#include <iostream>
using namespace std;

int main()
{

    int ano;

    cout<<"Digite o ano:";
    cin>>ano;

    if((ano%4==0 && ano%100!=0) || (ano%400==0))
        cout<<"O ano é bissexto.";
    else
        cout<<"O ano não é bissexto.";

    }
