#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float n1,n2,n3,media;

    cout<<"Digite as notas do aluno:";
    cin>>n1>>n2>>n3;

    media=(n1+n2+n3)/3;

    if(media>=5)
        cout<<"Parabéns,você foi aprovado.";
    else if(media<5 && media>=3)
        cout<<"Você está na prova final.";
         else
        cout<<"Lamento,mas você foi reprovado.";

    return 0;
}
