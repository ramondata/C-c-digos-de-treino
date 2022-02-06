#include<iostream>
#include<locale>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int lin, col, idade[4][4];
	string nome[4][4];
	
	cout<<"Vamos preencher uma matriz \n";
	for(lin=0; lin<=3; lin++)
	{
		for(col=0; col<=3; col++)
		{
		
		cout<<" Digite o nome da pessoa na posição: "<<lin+1<<", "<<col+1<<" \n";
		cin>>nome[lin][col];
		cout<<" Digite a idade da pessoa na possição "<<lin+1<<", "<<col+1<<" \n";
		cin>>idade[lin][col];
	}
}
cout<<" Veja a seguir a tabela que vc construiu de atributos nomes e idades \n";
cout<< "\n";

for(lin=0; lin<=3; lin++)
{
	for(col=0; col<=3; col++)
	{
		
		cout<<"_____"<<nome[lin][col]<<" -> "<<idade[lin][col]<<"  \n";
		
	}
	
	
	}	
	
}
