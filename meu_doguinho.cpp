#include<iostream>
#include<locale>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ptb");
	char pet1, pet;
    const pet2="Chico";	
	cout<<"Qual o nome do doguinho? ";
	cin>>pet;
	cout<<" "<<pet<<"? ";
	if (pet='Chico')
	{
		
		cout<<"Esse � meu doguinho lindo, meu nen����m! linducho! ";
		
	}
	else
	{
		
		cout<<"N�o conhe�o, meu doguino � o Chiquinhoo!";
		
	}
	
}
