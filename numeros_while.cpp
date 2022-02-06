#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int numero;
	
	cout<<"Digite um numero: \n";
	cin>>numero;
	
	while(numero<100000)
	{
		numero+=2;
		cout<<numero<<", ";
	}
	
}
