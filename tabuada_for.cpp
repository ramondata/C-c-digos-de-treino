//tabuada utilizando a função for
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, multiplicador, resultado;
	
	cout<<"Qual numero de tabuada deseja aprender? \n";
	cin>>num;
	
	for(multiplicador=1; multiplicador<=10; multiplicador++)
	{
		resultado=num*multiplicador;
		cout<<"  "<<num<<" * "<<multiplicador<<" = "<<resultado<<''" \n";
	}
	
}
