//Questão 1 - Matrizes
#include <iostream>
#define tam 30
using namespace std;

int main()
{
	int m[tam][tam]={0},tam1,i,j;
	
	cout<<"Digite a dimensão da matriz identidade:";
	cin>>tam1;
	
	for(i=0;i<tam1;i++){
	for(j=0;j<tam1;j++){
	    if(i==j)
		m[i][j]=1;
	}
	}

	for(i=0;i<tam1;i++){
	for(j=0;j<tam1;j++){
		cout<<m[i][j]<<" ";
	}
	cout<<endl;
	}
	
	return 0;
}	
	
