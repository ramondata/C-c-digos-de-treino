#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float peso, media_idade, media_peso;
	int idade, numeroEntrevistas, soma_idade, soma_peso;
	
	
	soma_idade=0;
	soma_peso=0;
	numeroEntrevistas=0;
	
	cout<<"Informe seu peso \n";
	cin>>peso;
	
	                              while(peso!=0)
	                              {
	                     cout<<"Informe sua idade: \n";
						 cin>>idade;         	
	                     numeroEntrevistas++;
						 soma_idade+=idade;
						 soma_peso+=peso;
						 
						 cout<<"Informe seu peso aqui: ";
						 cin>>peso;         
}
	media_idade=soma_idade/numeroEntrevistas;
	media_peso=soma_peso/numeroEntrevistas;
	cout<<"Contagem de entrevistados: "<<numeroEntrevistas<<". \n";
	cout<<"Média de idade: "<<media_idade<<". \n";
	cout<<"Média de peso: "<<media_peso<<". \n";
	
}
