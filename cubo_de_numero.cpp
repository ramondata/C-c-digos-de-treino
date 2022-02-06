// cubo de um valor inteiro informado
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero, resposta1, resposta2;
	
	cout<< "Escreva um numero inteiro.";
	cin>>numero;
	resposta1=numero*numero*numero;
	resposta2=numero*numero;
	cout<<"O quadrado desse numeo é "<<resposta2<<".";
	cout<<"O cubo desse numero é "<<resposta1<<".";
	if(resposta2==resposta1)
	{
		
		cout<<"Resultados iguais pra quadrado e cubo! "; 
		cout<<"Resultados diferentes!";
		}	
}
