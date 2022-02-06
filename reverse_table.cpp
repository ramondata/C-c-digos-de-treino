//receber matriz e inverter 
#include<iostream>
#include<locale>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int lin, col, mat[4][4];
	
	for(lin=0; lin<=3; lin++)
	{
		for(col=0; col<=3; col++)
		{
          cout<<" Escreva um numero na posição "<<lin+1<<", "<<col+1<<" da matriz \n";
		  //matriz invertida, linha no lugar de coluna e vice versa
		  cin>>mat[lin][col];
		  		
		
		}
}
        cout<<" Vamos visualizar a tabela criada e invertida  \n";

		for(lin=0; lin<=3; lin++)
		{
			for(col=0; col<=3; col++)
			{
				
				cout<<"***"<<mat[col][lin]<<";  \n";
				
			}
		}
	
	
	
}
