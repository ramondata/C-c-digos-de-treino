#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int num, totalNum, contagem;
	
	for(totalNum=0; totalNum<10; totalNum+=1)
	{
		cout<<"Digite um numero: \n";
		cin>>num;
		
		if(num%3==0)
		{
			contagem++;
		}
		else
		{
			cout<<"Digite um numero: \n";
			cin>>num;
		}
		
		
		}
		cout<<"Total dos 10 que são multiplos de 3: "<<contagem;
	}

