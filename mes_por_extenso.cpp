//digite o numero do mes que eu escrevo pra vc o nome do mes
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero;
	char *mes;
	bool invalido=false;
	                        cout<<"Diga qual o numero do mes que deseja saber o nome por extenso: ";
	                        cin>>numero;
	                        if (numero==1)
	                        {
	                           mes="janeiro";
							}
							else if(numero==2)
							{
							    mes="Fevereiro";
							}
							else if(numero==3)
							{
								mes="Março";
							}
							else if(numero==4)
							{
								mes="Abril";
							}
							else if(numero==5)
							{
								mes="Maio";
							}
							else if(numero==6)
							{
								mes="Junho";
							}
							else if(numero==7)
							{
								mes="Julho";
							}
							else if(numero==8)
							{
								mes="Agosto";
							}
							else if(numero==9)
							{
								mes="Setembro";
							}else if(numero==10)
							
							{
								mes="Outubro";
							}
							else if(numero==11)
							{
								mes="Novembro";
							}
							else if(numero==12)
							{
								mes="Dezembro";
							}
							
							else
							{
								mes="Opção inválida!";
								invalido=true;
							}
				if(invalido==true)
				{
					cout<<"Opção invalida";
				}
				else
				{
				cout<<"mes de numero "<<numero<<". "<<mes;	
				}
							
}
