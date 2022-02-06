#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade;
	
	                           cout<<"Para saber sua faixa de competição, digite sua idade: \n";
	                           cin>>idade;
	                if(idade<=12)
	                {
	                	cout<<"Categoria infantil";
					}
					else if(idade>=13&&idade<=17)
					{
						cout<<"Categoria juvenil";
					}
					else if(idade>17&&idade<=49)
					{
						cout<<"Categoria adulto";
					}
					else
					{
						cout<<"Categoria senior";
					}
}
