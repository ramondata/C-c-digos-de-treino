#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int hora, resultado;
	
	cout<<"digite a hora atual ";
	cin>>hora;
	if (hora>=6 && hora<=18)
	{
		
		cout<<"Ainda pode tomar um cafezinho, n�o passou das 6 da tarde ainda!!";
	}
	else
	{
		cout<<"Ja � noite ou madrugada, melhor nao tomar mais caf�, s� se for descafeinado!";
	}
	
}
