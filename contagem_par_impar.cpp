#include<iostream>
#include<locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, max, contImpar, contPar;

cout<<"Qual o maior numero da sequencia que deseja avaliar quantos são pares e impares? \n";
cin>>max;

for(num=1; num<=max; num++)
{
	if(num%2==0){
		contPar++;
		
	}
	else if(num%2!=0){
		contImpar++;
		//contImpar+=1 mesma coisa
	}
	
	cout<<"    "<<num<<"  ";
	
	}	
	cout<<"                          \n";
	cout<<" \n";
	cout<<"Contagem de numeros pares: "<<contPar<<" \n";
	cout<<"Contagem de numeros impares: "<<contImpar<<" \n";
	
}
