#include <locale>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int diasvida, idade;
	
	cout<<"Quantos dias voc� ja viveu meu querido? ";
    cin>>diasvida;
    idade=diasvida/365;
    cout<<"Voc� ja viveu "<<idade<<" anos.";
	
}
