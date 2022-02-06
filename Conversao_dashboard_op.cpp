#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	//variaveis de dados
	float convertido_CA, convertidoTotal_no_metrica, convertidoOperador_NF, convertido_DIV, CA_criado, NF_criado, CA_trab, NF_trab, conversao_op, convertidoTotal_NF;
	//variaveis de indicadores
	float convertido_sob_CA_criado, convertido_sob_CA_trab, convertido_sob_NF_criado, convertido_sob_NF_trab, total_vendas, conversao_por_op, total_convertido;
	//tabela de indicadores
	cout<<"Atualiza��o dos indicadores de convers�o do dashboard da opera��o \n";
	cout<<"Indicadores atuais: \n ";
	cout<<"___Convertidos/CA criados \n";
	cout<<"___Convertidos/CA trabalhados \n";
	cout<<"___Convertidos/NF criados \n";
	cout<<"___Convertidos/NF trabalhados \n";
	cout<<"___VendasCA \n";
	cout<<"___VendasNF \n";
	cout<<"___VendasDivergente \n";
	cout<<"___Total de vendas \n";
	cout<<"___Convers�o por operador \n";
	cout<<"______________________ \n";
	//preencher dados para atualizar os indicadores
	
	cout<<"                                                   \n";
	cout<<"     Vamos preencher os dados   : \n";
	cout<<"                                                    \n";
	cout<<"     Quantos carrinhos convertidos? (Olha o total de carrinhos no relat�rio de produtividade) \n";
	cin>>convertido_CA;
	do{
		
	cout<<"     Quantas vendas totais sem metricas? (Olha o relat�rio de produtividade na coluna vendas sem metricas)\n";
	cin>>convertidoTotal_no_metrica;
	cout<<"     Quantas vendas foram divergentes? (Olha no relat�rio de fluxo de vendas)\n";
	cin>>convertido_DIV;
	cout<<"     Qual o total de carrinhos criados? (Olha no relat�rio de fluxos de vendas)\n";
	cin>>CA_criado;
	cout<<"     Qual o total de neg�cios fechados criados? (Olha no relat�rio de fluxos de vendas) \n";
	cin>>NF_criado;
	cout<<"     Qual o total de carrinhos trabalhados? (Olha no relat�rio de fluxo de vendas)\n";
	cin>>CA_trab;
	cout<<"     Qual o total de neg�cios fechados trabalhados? (Olha no relat�rio de fluxo de vendas) \n";
	cin>>NF_trab;
	cout<<"     De todas as vendas, quantas foram apenas dos operadores, sem contar backoffice e rob�? (Olha o relat�rio de produtividade) \n";
	cin>>conversao_op;
	//indicadores
	convertidoTotal_NF=convertidoTotal_no_metrica-convertido_CA;
	convertido_sob_CA_criado=convertido_CA/CA_criado;
	convertido_sob_CA_trab=convertido_CA/CA_trab;
	convertido_sob_NF_criado=convertidoTotal_NF/NF_criado;
	convertido_sob_NF_trab=convertidoTotal_NF/NF_trab;
	total_vendas=convertido_CA+convertidoTotal_NF;
	conversao_por_op=conversao_op/total_vendas;
	//Indicadores atualizados com os dados
	cout<<"                                                                                  \n";
	cout<<"                                                                                  \n";
	cout<<"______________________________Indicadores atualizados_______________________________\n";
	cout<<"                                                                                  \n";
	cout<<"__________|Convertidos/CA criados "<<" | "<<convertido_sob_CA_criado<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|Convertidos/CA trabalhados "<<" | "<<convertido_sob_CA_trab<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|Convertidos/NF criados "<<" | "<<convertido_sob_NF_criado<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|Convertidos/NF trabalhados "<<" | "<<convertido_sob_NF_trab<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|VendasCA "<<" | "<<convertido_CA<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|VendasNF "<<" | "<<convertidoTotal_NF<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|VendasDivergente "<<" | "<<convertido_DIV<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|Total de vendas "<<" | "<<total_vendas<<" | \n";
	cout<<"                                                                                       \n";
	cout<<"__________|Convers�o por operador "<<" | "<<conversao_por_op<<" | \n";
	cout<<"____________________________________________________________________________________\n";
	cout<<"                                                                                       \n";
	cout<<"  Preencha essas informa��es na planilha de indicadores do dashboard  \n";
    cout<<"                                                                                       \n";
    cout<<"                                                                                       \n";
	cout<<"                                                   \n";
	cout<<"Deseja fazer nova atualiza��o dos dados?   : \n";
	cout<<"                                                    \n";
	cout<<"   Quantos carrinhos convertidos? \n";
	cin>>convertido_CA;
} while(convertido_CA!=-1);
}
