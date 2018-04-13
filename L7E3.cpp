#include <iostream>
#include <cstring>
#define tam 50
using namespace std;

void emb(char s1[],char s2[],int t1,int t2)
{
    char s3[tam];
    int i,j,k;
    for(k=0; k<(t1+t2); k++)
    {
        for(i=0; i<t1; i++)
        {
            for(j=0; j<t2; j++)
            {
                s3[k]=s1[i];
                if(k%2!=0)
                    s3[k]=s2[j];


                if(s1[i]=='\0')
                    s3[k]=s2[j];
                else if(s2[i]=='\0')
                    s3[k]=s1[j];
            }
        }
    }
    s3[k]='\0';
    cout<<s3;
}

int main()
{
    char p1[tam],p2[tam];
    int tam1,tam2;

    cout<<"Digite a string:";
    cin.getline(p1,tam);

    cout<<"Digite a outra string:";
    cin.getline(p2,tam);

    tam1=strlen(p1);
    tam2=strlen(p2);

    emb(p1,p2,tam1,tam2);
}
