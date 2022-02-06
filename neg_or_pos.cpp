#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	int numero;
	
	cout<<"digite um numero qualquer";
	cin>>numero;
	if (numero<0)
	{
		
		cout<<"numero negativo";
		
	}
	else
	{
	
	cout<<" numero positivo";
	
}
}
