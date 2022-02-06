#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	float n1, n2, resultado, op;
	
	cout<<" Digite um numero";
	cin>>n1;
	cout<<"Digite outro numero";
	cin>>n2;
	cout<<"Escolha uma das opções abaixo:";
	cout<<"     1-somar";
	cout<<"     2-diminuir";
	cout<<"     3-multiplicar";
	cout<<"     4-dividir";
	cin>>op;
	
		if (op==1)
		{
		resultado=n1+n2;
		cout<<n1<<" + "<<n2<<" = "<<resultado;
	}
		else if(op==2)
		{
			resultado=n1-n2;
			cout<<n1<<" - "<<n2<<" = "<<resultado;
			
			}
		else if(op==3)
		{
			resultado=n1*n2;
			cout<<n1<<" * "<<n2<<" = "<<resultado;
			
			
		}
		else if(op==4)
		{
			resultado=n1/n2;
			cout<<n1<<" / "<<n2<<" = "<<resultado;			
		}		
		else
		{
		cout<<"Opção não encontrada!";
	}
}
