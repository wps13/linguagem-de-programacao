//
#include <iostream>
#include <cstring>
#define tam 50
using namespace std;

void quebralinha(char s1[],int t1){
    for(int i=0;i<t1;i++)
    {
        cout<<s1[i];
        if(s1[i]==' ')
        cout<<endl;
    }
}

int main(){
    char st1[tam];
    int tam1;

    cin.getline(st1,tam);

    tam1=strlen(st1);

    quebralinha(st1,tam1);

}
