#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numPedido, quantidade;
	float valor, conta;
	char *item;
	bool invalido;
	
	cout<<" Cardápio \n";
	cout<<"____________\n";
	cout<<"100 - hamburger - 5,50$ \n";
	cout<<"101 - hot dog - 4,50$ \n";
	cout<<"102 - Milkshake - 7,00$ \n";
	cout<<"____________ \n";
	cout<<"Informe o código do seu pedido: \n";
	cin>>numPedido;
	cout<<"Quantas unidades desse lanche você deseja? \n";
	cin>>quantidade;
	
	                                  switch(numPedido){
	                                  	case 100: item="hamburger"; valor=5.5; break;
	                                  	case 101: item="hot dog"; valor=4.5; break;
	                                  	case 102: item="milkshake"; valor=7.0; break;
	                                  	default: item="Opção inválida"; invalido=true; break;
									  }
	conta=valor*quantidade;
	                                  if(invalido==true)
	                                  {
	                                  	cout<<"Desculpe, esse item não tem no cardápio!";
									  }
									  else
									  {
	                                  cout<<"O item escolhido foi: "<<item<<" Ao valor de "<<valor<<" seu pedido total custa: "<<conta<<" Reais.";
	                              }
}
