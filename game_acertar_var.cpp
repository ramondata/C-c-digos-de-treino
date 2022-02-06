#include<iostream>
#include<locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	int resultado, tente, ind, vetor[10]={12,16,17,14,11,122,13,10,18,177};
	// teste de vetor
	//cout<<num[2];
	
	cout<<" Tente acertar o numero da variavel: \n";
	cin>>tente;
	
	for(ind=0; ind<=9; ind++)
	{
		if(vetor[ind]==tente)
		{
			cout<<"Acertou o numero "<<tente<<"na "<<ind<<"º tentativa";
			resultado=1;
		}
		else{
			cout<<"Errou!";
			resultado=0;
		}
		if(resultado==0)
		{
		
		cout<<" Tente novamente, digite outro numero \n";
		cin>>tente;
		}
	}
		}
