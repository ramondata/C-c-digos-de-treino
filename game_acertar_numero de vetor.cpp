#include<iostream>
#include<locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	int tente, ind, num[10]={10,20,03,40,50,60,07,89,99,109};
	// teste de vetor
	//cout<<num[2];
	
	for(ind=0; ind<=2; ind++)
	{
		cout<<"Chute um numero possivel preenchido no vetor: \n";
		cin>>tente;
		
		if(tente==num[0])
        
 {       
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[0]<<" do vetor! \n";
}
		else if (tente==num[1])
{		
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[1]<<" do vetor! \n";
}
		else if (tente==num[2])
{		
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[2]<<" do vetor! \n";
}
		else if (tente==num[3])
{		
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[3]<<" do vetor! \n";
}
		else if (tente==num[4])
{		
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[4]<<" do vetor! \n";
}
		else if (tente==num[5])
	{	
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[5]<<" do vetor! \n";
	}
		else if (tente==num[6])
		{
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[6]<<" do vetor! \n";
        }
		else if (tente==num[7])
	{	
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[7]<<" do vetor! \n";
	}
		else if (tente==num[8]){	
		
		
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[8]<<" do vetor! \n";
	}
		else if (tente==num[9])
	{
			
		cout<<"Acertou!!! O numero: "<<tente<<" está na posição "<<num[9]<<" do vetor! \n";
	}
	else{
		cout<<"Nao acertou nenhuma das tentativas!";
	}
	}
	
}
