#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	float num1, num2, resultado;
	
	cout<<"Digite um numero:  ";
	cin>>num1;
	cout<<"Digite outro numero:  ";
	cin>>num2;
	resultado=num1/num2;
	cout<<"Sendo o primeiro numero o numerador e o segundo o denominador, a razão fica: "<<resultado;
	
}
