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
		
		cout<<"Ainda pode tomar um cafezinho, não passou das 6 da tarde ainda!!";
	}
	else
	{
		cout<<"Ja é noite ou madrugada, melhor nao tomar mais café, só se for descafeinado!";
	}
	
}
