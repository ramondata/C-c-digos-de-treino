#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero, resto, resultado;
	
	cout<<"Qual numero vc quer saber de tem resto na divis�o? ";
	cin>>numero;
	resto=numero%2;
	resultado=numero/2;
	cout<<"A divis�o deu "<<resultado<<".";
	if (resto!=0)
	{
		
		cout<<"     O resto dessa raz�o n�o � zero! ";
		
	}
	
}


