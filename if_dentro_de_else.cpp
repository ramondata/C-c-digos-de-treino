#include <iostream>
#include <locale>
using namespace std;
	int main()
	{
		
		setlocale(LC_ALL,"ptb");
		int numero, constante, resultado, resultado2;
		constante=33;
		cout<<"digite um numero";
		cin>>numero;
		resultado=constante*numero;
		cout<<"resultado: "<<resultado<<". Descubra qual o valor da constante está sendo usada com esse numero que informou: ";
		cout<<"Digite sua resposta";
		cin>>resultado2;
		if(resultado2==constante)
		{
			
			cout<<"Acertou!!!!";
			
		}
		else
		{
			
			cout<<"Errou, digite novamente a respsta.";
			cin>>resultado2;
			if(resultado2==constante)
			{
				cout<<"Acertou";
			}
			
		}
		
	}
