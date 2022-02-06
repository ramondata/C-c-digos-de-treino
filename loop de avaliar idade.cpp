#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int idade, usuarios;
	
	
	for(usuarios=1; usuarios<=5; usuarios+=1)
	{
		cout<<"Qual a sua idade? \n";
	    cin>>idade;
	
		if(idade<18)
		{
			cout<<"Vc nao pode tirar a carteira! \n";
		}
		else
		{
			cout<<"Vc pode tirar a carteira ja! \n";
		}
	}
}
