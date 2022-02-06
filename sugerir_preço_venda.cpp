#include <locale>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	float valororiginal, precovenda;
	
	cout<<"Qual o preço de compra desse produto? ";
	cin>>valororiginal;
	precovenda=1.2*valororiginal;
	cout<<"O preço de venda sugerido é "<<precovenda<<" R$";
	
	
}
