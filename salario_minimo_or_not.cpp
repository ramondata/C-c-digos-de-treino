//Comparar salario com o salario minimo
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	float numero, resultado;
	
	cout<<"digite seu salario: ";
	cin>>numero;
	if (numero>1000)
	{
		cout<<numero<<" � mais que um salario minimo";
		
	}
	else{
		cout<<numero<<" � igual ou menor que um salario minimo no Brasil";
	}
}
