#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int num=0;
	cout<<"Digite um numero pra saber se é par ou impar: \n";
	cin>>num;
	while(num!=-1){
		
		if(num%2==0){
		
		cout<<num<<" Numero par!!! \n";
	}
	else
	{
		cout<<num<<" Numero impar!!! \n";
	}
	cout<<"Digite aqui um numero pra saber se é par ou impar: \n";
	cin>>num;
	}
}
