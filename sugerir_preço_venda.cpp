#include <locale>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float valororiginal, precovenda;
	
	cout<<"Qual o pre�o de compra desse produto? ";
	cin>>valororiginal;
	precovenda=1.2*valororiginal;
	cout<<"O pre�o de venda sugerido � "<<precovenda<<" R$";
	
	
}
