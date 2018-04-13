//dar desconto a produto e exibir o preço
#include <iostream>
using namespace std;

int main()
{
    int setor;
    float desconto,preco;

    cout<<"Digite o setor da loja:";
    cin>>setor;



    if(setor==222)
    {
        cout<<"Digite o preço do produto:";
        cin>>preco;
        if(preco>500)
        {
            desconto=preco*0.10;
            preco-=desconto;
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Eletros"<<endl;
        }
        else
        {
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Eletros"<<endl;
        }
    }
    else if(setor==111)
    {
        cout<<"Digite o preço do produto:";
        cin>>preco;

        if(preco>100)
        {
            desconto=preco*0.40;
            preco-=desconto;
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Cama,mesa e banho."<<endl;
        }
        else if(preco>=50 && preco<= 100)
        {
            desconto=preco*0.20;
            preco-=desconto;
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Cama,mesa e banho."<<endl;
        }
        else if(preco<50)
        {
            desconto=preco*0.10;
            preco-=desconto;
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Cama,mesa e banho."<<endl;
        }
        else
        {
            cout<<"O preço do produto é "<<preco<<endl;
            cout<<"Setor:Cama,mesa e banho."<<endl;
        }

    }
    else
    {
        cout<<"Setor inválido.";
    }
}
