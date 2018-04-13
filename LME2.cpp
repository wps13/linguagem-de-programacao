//Questão 2 - Matrizes
#include <iostream>
#define tam1 30
#define tam2 30
using namespace std;

int main(){
	int matriz[tam1][tam2],m2[tam2][tam1],m,n,i,j,temp; //m representa as linhas e n as colunas
	
	cout<<endl;
	cout<<"Digite a quantidade de linhas e colunas,respectivamente:";
	cin>>m>>n;

	cout<<"Insira os elementos da matriz:";
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	    cin>>matriz[i][j];
	}
	}
	
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		m2[j][i]=matriz[i][j];
	}
	}
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	cout<<m2[i][j]<<" ";
	}
	cout<<endl;
	}

}	
