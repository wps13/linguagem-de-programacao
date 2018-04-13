//converte segundos para horas,minutos e segundos
#include <iostream>
using namespace std;

int main()
{
    int segundos,horas,minutos,tempo;

    cout<<"Digite a quantidade de segundos:";
    cin>>tempo;

    horas=tempo/3600;
    minutos=tempo/60;
    segundos=tempo%60;

    cout<<horas<<" hora(s), "<<minutos<<" minuto(s) e "<<segundos<<" segundo(s)";

    return 0;
}
