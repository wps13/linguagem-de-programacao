//Questão 4 - Matrizes
#include <iostream>
#define tam1 50
#define tam2 50
using namespace std;

int main()
{
	int m1[tam1][tam2],m2[tam1][tam2],linha,j,i,col,busca,cont=0;
	
	cout<<"Digite as dimensões da matriz:";
	cin>>linha>>col;

	cout<<"Preencha a primeira matriz:";
	for(i=0;i<linha;i++){
 	   for(j=0;j<col;j++){
	cin>>m1[i][j];
	}
	}

	cout<<"Preencha a segunda matriz:";
	for(i=0;i<linha;i++){
	   for(j=0;j<col;j++){
		cin>>m2[i][j];
	}
	}
	
	cout<<"Digite a linha na qual deseja fazer a comparação:";
	cin>>busca;

	while(j<col)
	{
	if(m1[busca][j]==m2[busca][j])
	cont++;
	}
	if(cont==col)
	cout<<"Todos os elementos da linha são iguais."<<endl;
	else
	cout<<"Existem elementos que diferem."<<endl;
}
	
