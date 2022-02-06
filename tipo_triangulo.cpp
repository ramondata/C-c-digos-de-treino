#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float lado1, lado2, lado3;
	
	cout<< "Informe o valor de lado 1: \n";
	cin>>lado1;
	cout<<"Informe o valor de lado 2: \n";
	cin>>lado2;
	cout<<"Informe o valor de lado 3: \n";
	cin>>lado3;
	
	if (lado1==lado2&&lado1==lado3)
	{
		cout<<"Triangulo equilátero";
	}
	else if(lado1!=lado2&&lado1!=lado3&&lado2!=lado3)
	{
		cout<<"Triangulo escaleno";
	}
	else
	cout<<"Triangulo isósceles";
}
