#include<iostream>
#include<locale>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int matriz[3][4], lin, col, num;
	
	for(lin=0; lin<=2; lin++)
	{
		for(col=0; col<=3; col++)
		{
			cout<<"Digite seu numero na posição "<<lin+1<<", "<<col+1<<": \n";
			cin>>matriz[col][lin];
			
			
		}
		
		
		
	}
	
	for(lin=0; lin<=2; lin++)
	{
		for(col=0; col<=3; col++)
		{
			if(matriz[lin][col]%5==0)
			{
			cout<<" \n";
			cout<<matriz[lin][col]<<" \n";
		}
			
		}
		
		
	}
	
}
