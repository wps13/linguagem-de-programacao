///invalida a segunda string e compara
#include <iostream>
using namespace std;
#include <string.h>
#define tam 100

void formaPalavras(char s1[],char s2[],char s3[])
{
    int i,tam1,tam2,j,a=0;
    tam1=strlen(s1);
    tam2=strlen(s2);


    for(i=0; i<tam1; i++)
    {
        for(j=0; j<tam2; j++)
        {
            if(s1[i]==s2[j])
            {
                s3[a]=s1[i];
                a++;
            }
        }
    }

}
int main()
{
    char st1[tam],st2[tam],st3[tam];

    cout<<"Digite a primeira palavra:";
    cin.getline(st1,tam);

    cout<<"Digite a segunda palavra:";
    cin.getline(st2,tam);

    formaPalavras(st1,st2,st3);

    cout<<"Palavra formada: "<<st3;

}
