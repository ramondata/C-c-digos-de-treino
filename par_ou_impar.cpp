#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "ptb");
	int numero, resultado;
	
	cout<<" Digite um numero: ";
	cin>>numero;
	resultado=numero%2;
	
	if(resultado==0)
	{
		
		cout<<"Esse numero é par";
		
	}
	else
	{
		
		cout<<"Esse numero é impar";
		
	}
}
