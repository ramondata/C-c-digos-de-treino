#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero, resto, resultado;
	
	cout<<"Qual numero vc quer saber de tem resto na divisão? ";
	cin>>numero;
	resto=numero%2;
	resultado=numero/2;
	cout<<"A divisão deu "<<resultado<<".";
	if (resto!=0)
	{
		
		cout<<"     O resto dessa razão não é zero! ";
		
	}
	
}


