#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int contador, numCharLinha, numLinha;
	char*c="*";
	cout<<"Qual o numero de linhas? ";
	cin>>numLinha;
	
	for(contador=1; contador<=numLinha; contador++)	
    {
    	do
    	{
    		c++;
    		cout<<c<<"\n";
		}while(contador==numLinha);   
}
}
