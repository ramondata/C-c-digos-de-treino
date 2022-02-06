#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int resultado, multiplicador, tabuadaNum;
	multiplicador=0;
	cout<<"Qual numero deseja saber a tabuada? \n";
	cin>>tabuadaNum;
	while(multiplicador<10){
		
		multiplicador++;
		resultado=tabuadaNum*multiplicador;
		cout<<tabuadaNum<<" * "<<multiplicador<<" = "<<resultado<<"; \n";
	}
}
