//armaenar 10 nomes de pessoas em um vetor
#include<iostream>
#include<string>
#include<locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
    string nome[10];
	int ind;
	
	for (ind=0; ind<=9; ind++)
	{
		
		cout<<"Digite um nome: ";
		cin>>nome[ind];
		
		cout<<" "<<ind+1<<" nomes foram preenchidos. Faltam "<<9-ind<<" nomes a armazenar! \n";
	}
	cout<<"Total de "<<ind<<" nomes preenchidos!!!!\n\n\n";
	ind=0;
	//cout<<nome[ind]<<" \n"<<nome[ind+1]<<" \n"<<nome[ind+2]<<"\n "<<nome[ind+3]<<"\n "<<nome[ind+4]<<"\n "<<nome[ind+5]<<" \n"<<nome[ind+6]<<"\n "<<nome[ind+7]<<"\n "<<nome[ind+8]<<" \n"<<nome[ind+9]<<"\n ";
    for(ind=0; ind<=9; ind++)
    //for invertido
    //for(ind=14; ind>=0; ind--)
	{
    	
    	cout<<" O nome é "<<nome[ind]<<" referente a posição "<<ind-1<<" de armazenamento no vetor \n";
    	
	}
}

