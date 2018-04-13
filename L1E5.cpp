//calcular o dia da semana em fevereiro

#include <iostream>
using namespace std;

int main()
{
    int dia;

    cout<<"Digite o dia de feveiro:";
    cin>>dia;

    if(dia%7==1)
        cout<<"O dia será no domingo.";
    if(dia%7==2)
        cout<<"O dia será na segunda.";
    if(dia%7==3)
        cout<<"O dia será na terça.";
    if(dia%7==4)
        cout<<"O dia ser na quarta.";
    if(dia%7==5)
        cout<<"O dia será na quinta.";
    if(dia%7==6)
        cout<<"O dia será na sexta.";
    if(dia%7==7)
        cout<<"O dia será no sabado.";

    return 0;


}
