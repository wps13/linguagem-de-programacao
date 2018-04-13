//Questão 3 - Matrizes
#include <iostream>
#define tam1 100
#define tam2 100
using namespace std;

int media(int m[][tam2],int i,int col)
{
	int cont=0,j,media=0;
	for(j=0;j<col;j++)
	{
		media+=m[i][j];
		cont++;
	}
	return media/cont;
}

int main(){
	int m[tam1][tam2],l,c,i,j;
	cout<<"Digite as dimensões da matriz(linhasXColunas):";
	cin>>l>>c;

	for(i=0;i<l;i++){
           for(j=0;j<c;j++){
	cin>>m[i][j];
	}
	}
	
	for(i=0;i<l;i++){
		cout<<"Linha "<<i+1<<": ";
	   for(j=0;j<c;j++){
		if(m[i][j]>media(m,i,c))
		cout<<m[i][j]<<'\t';
	}
	cout<<endl;
	}

}
