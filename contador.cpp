#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int contador, num;
	
	cout<<"Digite o tempo de contagem regressiva";
	cin>>num;
	for (num=contador; contador>=0; contador--)
	{
		cout<<" "<<contador<<" ";
	}
	
	
}
