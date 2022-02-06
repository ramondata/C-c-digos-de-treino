#include<iostream>
#include<locale>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int lin, col, A[2][4], B[2][4], R[2][4];
	
	for(lin=0; lin<=1; lin++)
	{
		for(col=0; col<=3; col++)
		{
			cout<<" Digite o numero da posição "<<lin+1<<", "<<col+1<<" da matriz A \n";
			cin>>A[lin][col];
			
			
		}
		
		
	}
	
	for(lin=0; lin<=1; lin++)
	{
		for(col=0; col<=3; col++)
		{
			cout<<"Digite o numero na posição "<<lin+1<<", "<<col+1<<" da matriz B \n";
			cin>>B[lin][col];
			
			
		}
		
		
	}
	
	for(lin=0; lin<=1; lin++)
	{
		for(col=0; col<=3; col++)
		{
			
			R[lin][col]=A[lin][col]*B[lin][col];
			
		}
		
		
	}
	
	for(lin=0; lin<=1; lin++)
	{
		for(col=0; col<=3; col++)
		{
			cout<<" \n";
			cout<<"__________"<<R[lin][col]<<"  \n";
		}
	}
	
}
