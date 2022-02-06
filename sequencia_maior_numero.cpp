#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num, numRep, max;
	
	cout<<"Escreva 15 numeros inteiros um atras do outro: \n";
	cout<<"Digite um numero: \n";
	cin>>num;
	max=0;
	for (numRep=0; numRep<=15; numRep++)
	{
		
		if (num>max)
		{
			max=num;
		}
		else
		{
			max=max;
		}
		cout<<"Digite um numero: \n";
		cin>>num;
		
	}
	
	cout<<"O maior numero da sequencia foi o "<<max<<". \n";
	
}
