#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int mes;
	char *nomeMes;
	bool invalido=false;
	
	            cout<<"Digite o numero do mes desejado: ";
	            cin>>mes;
	                         switch(mes)
	                         {
	                         	case 1: nomeMes="Janeiro"; break;
	                         	case 2: nomeMes="Fevereiro"; break;
	                         	case 3: nomeMes="Março"; break;
	                         	case 4: nomeMes="Abril"; break;
	                         	case 5: nomeMes= "Maio"; break;
	                         	case 6: nomeMes= "Junho"; break;
	                         	case 7: nomeMes= "Julho"; break;
	                         	case 8: nomeMes= "Agosto"; break;
	                         	case 9: nomeMes= "Setembro"; break;
	                         	case 10: nomeMes= "Outubro"; break;
	                         	case 11: nomeMes= "Novembro"; break;
	                         	case 12: nomeMes= "Dezembro"; break;
	                         	default: nomeMes="Numero invalido"; invalido=true;
							 }
							 if(invalido==true)
							 {
							 	cout<<"Opção invalida";
							 }
							 else
							 {
							 
						cout<<"O mes de numero"<<mes<<"Tem nome "<<nomeMes;
						}
}
