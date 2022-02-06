#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int num, max, contPar, contImpar;
	
	cout<<"Digite o maior numero da sequencia: ";
	cin>>max;
	num=1;
	do{
		num++;
		
		if(num%2==0)
		{
			contPar++;
			
		}
		else{
			contImpar++;
			
		}
		
				
	} while(num<=max);
	
	cout<<" Numeros pares são: "<<contPar<<" \n";
	cout<<" Numeros impares são: "<<contImpar<<" \n";
	
	
}
