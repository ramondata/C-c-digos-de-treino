#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int resultado, ind, A[10], B[10];
	
	for(ind=0; ind<=9; ind++)
	
	if(resultado==1)
	{
		A[ind]=resultado;
		
	}
	else if(resultado==0)
	{
		B[ind]=resultado;
	}
	
	cout<<" Quem venceu essa partida? \n";
	//cout<<" preencha A=1 ou \n";
	//cout<<" B=0 \n";
	cin>>resultado;
	
	if(A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+B[9]<B[0]+B[1]+B[2]+B[3]+B[4]+B[5]+B[6]+B[7]+B[8]+B[9])
	cout<<" O venccedor foi B com "<<B[0]+B[1]+B[2]+B[3]+B[4]+B[5]+B[6]+B[7]+B[8]+B[9]<<" ACERTOS!!!";
	else
	{
		cout<<" Ovencedor foi o A com "<<A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9]<<" acertos!!!";
	}
	
	
	
	
	
	
	
	}
