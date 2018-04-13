//testar se é consoante
#include <iostream>
using namespace std;

bool caractere(char t);

int main()
{
    char w;

    cout<<"Digite um caractere:";
    cin>>w;

    caractere(w);

    if(caractere(w)==true)
        cout<<"O caractere é uma vogal.";
    else
        cout<<"O caractere nao é uma vogal.";
}

bool caractere(char t)
{
    int a=t;
    if((a==97)||(a==101)||(a==105)||(a==111)||(a==117))//(a==65)||(a==69)||(a==73)||(a==79)||(a==85)) ||
        return true;
    else //if((a>65||a<=90)||(a>97||a<=122))
        return false;
    //else return false;
}
