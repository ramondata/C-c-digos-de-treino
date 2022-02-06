#include <locale> //biblioteca que adiciona caracteres e idioma
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb"); //configura o idioma para portugues
	float f, c;
	cout<<"Qual a temperatura em °F ta ai agora? ";
	cin>>f;
	c=((f-32)/1.8);
	cout<<"Temperatura está em "<<c<<"°C";
	
	
	
	
}
