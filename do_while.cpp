#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	setlocale(LC_ALL,"ptb");
	int num;
	char*tipo;
	
	cout<<"Digite o numero";
	cin>>num;
	
	                          do {
	                          	   if(num%2==0){
	                          	   	tipo="Par";
									 }
									 else if (num%2!=0){
									 	tipo="impar";
									 }
									 else{
									 	tipo="invalido";
									 }
									 cout<<"Este numero é "<<tipo<<". \n";
									 cout<<"Digite o numero";
									 cin>>num;
					   			  } while(num!=-1);
					   			  
	
}
