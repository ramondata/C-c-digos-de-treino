#include <locale>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int diasvida, idade;
	
	cout<<"Quantos dias você ja viveu meu querido? ";
    cin>>diasvida;
    idade=diasvida/365;
    cout<<"Você ja viveu "<<idade<<" anos.";
	
}
