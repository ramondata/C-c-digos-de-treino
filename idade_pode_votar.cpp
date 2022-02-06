#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade, anoatual, anonasc;
	cout<<"Ano atual: ";
	cin>>anoatual;
	cout<<"ano que nasceu: ";
	cin>>anonasc;
	idade=anoatual-anonasc;
	cout<<"Sua idade: "<<idade<<".";
	if (idade>=18)
	{
		
		cout<<"Pode votar!";
		
	}
	
	
}
