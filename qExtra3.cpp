#include <iostream>
#define tam 200
using namespace std;

void f(float v[],int n)
{
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>=0.0 && v[i]<1.0)
            c1++;
        else if(v[i]>=1.0 && v[i]<2.0)
            c2++;
        else if(v[i]>=2.0 && v[i]<3.0)
            c3++;
        else if(v[i]>=3.0 && v[i]<4.0)
            c4++;
        else if(v[i]>=4.0 && v[i]<5.0)
            c5++;
        else if(v[i]>=5.0 && v[i]<6.0)
            c6++;
        else if(v[i]>=6.0 && v[i]<7.0)
            c7++;
        else if(v[i]>=7.0 && v[i]<8.0)
            c8++;
        else if(v[i]>=8.0 && v[i]<9.0)
            c9++;
        else if(v[i]>=9.0 && v[i]<=10.0)
            c10++;
    }
    cout<<c1<<" aluno(s) no intervalo [0,1)"<<endl;
    cout<<c2<<" aluno(s) no intervalo [1,2)"<<endl;
    cout<<c3<<" aluno(s) no intervalo [2,3)"<<endl;
    cout<<c4<<" aluno(s) no intervalo [3,4)"<<endl;
    cout<<c5<<" aluno(s) no intervalo [4,5)"<<endl;
    cout<<c6<<" aluno(s) no intervalo [5,6)"<<endl;
    cout<<c7<<" aluno(s) no intervalo [6,7)"<<endl;
    cout<<c8<<" aluno(s) no intervalo [7,8)"<<endl;
    cout<<c9<<" aluno(s) no intervalo [8,9)"<<endl;
    cout<<c10<<" aluno(s) no intervalo [9,10]"<<endl;
}

int main()
{
    float notas[tam];
    int elementos;

    cout<<"Digite o tamanho do vetor:";
    cin>>elementos;

    cout<<"Digite as notas dos alunos:";
    for(int i=0; i<elementos; i++)
        cin>>notas[i];

    f(notas,elementos);
}
