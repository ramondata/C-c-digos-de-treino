#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	int a, b, c, x, y;
	
	cout<<"Valor de A";
	cin>>a;
	cout<<"Valor de B";
	cin>>b;
	cout<<"Valor de C";
	cin>>c;
	cout<<"A função fica: "<<"y="<<a<<"x²+"<<b<<"x+"<<c;
	cout<<"Qual valor de x quer pra poder saber quanto pode valer y? :";
	cin>>x;
	y=((a*x*x)+(b*x)+c);
	cout<<"Valor de y pra esse x: "<<y<<".";
	
	
}
