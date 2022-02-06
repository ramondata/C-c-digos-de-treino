#include<iostream>
#include<locale>
using namespace std;

int main()
{
	
	setlocale(LC_ALL,"ptb");
	float numero, resultado;
	
	cout<<"digite o numero ";
	cin>>numero;
	resultado=numero*numero;
	cout<<"Resultado"<<resultado<<".";
	if(resultado>25)
	{
		
		cout<<"O resultado do quadrado deu mais que 25";
		
	}
	
}
