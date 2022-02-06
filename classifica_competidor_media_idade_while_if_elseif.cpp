#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int idade, numComp, soma_idade;
	char*categoria;
	float media_idade;
	
	numComp=0;
	soma_idade=0;
	cout<<"Qual sua idade? \n";
	cin>>idade;
	                            while (idade!=-1)
                                {
                                
								if(idade>=7&&idade<=12) {
									categoria="infantil";
								}
							    	else if (idade>=13&&idade<=17){
							    		categoria="juvenil";
									}
									else if (idade>=18&&idade<=49){
										categoria="adulto";
									}
                                	else if (idade>=50){
                                		categoria="senior";
									}
									else if (idade<7){
										categoria="Não pode participar da competição";
									}
									cout<<"Sua categoria é: "<<categoria<<". \n";
									cout<<"Informe a idade do competidor: \n";
									cin>>idade;
									numComp++;
									soma_idade+=idade;
                                	
									}	
									
									cout<<"Numero de competidores: \n"<<numComp<<". \n";
									media_idade=soma_idade/numComp;
									cout<<"Média de idade dos competidores: \n"<<media_idade<<". \n";
}
