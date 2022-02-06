#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade, soma_idade, numEnt;
	float peso, soma_peso, media_peso, media_idade;
	
	numEnt=0;
	soma_peso=0;
	soma_idade=0;
	
	cout<<"Digite seu peso: \n";
	cin>>peso;
	
	do{
		
		
		cout<<"Qual sua idade \n";
		cin>>idade;
		
		soma_peso+=peso;
		soma_idade+=idade;
		numEnt++;
		
		cout<<peso<<", "<<idade<<". Obrigado pela informação! \n";
		
		cout<<"Digite seu peso \n";
		cin>>peso;
	} while(peso!=0);
	
	media_idade=soma_idade/numEnt;
	media_peso=soma_peso/numEnt;
	
	cout<<"MEdia de idade "<<media_idade;
	cout<<"Media de peso "<<media_peso;
	cout<<"Entrevistas "<<numEnt;
}
