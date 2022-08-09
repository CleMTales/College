/* Programa: Modelo de estrutura em (cliente) struct aninhada  
Autor: Anselmo Pestana R. Costa  
Data de criação: 09/06/2020  
Data de Modificação: 14/06/2020  
Modificação: Tales Clemente Matsuda
*/  
#include <stdio.h>  
#include<locale.h>  
	typedef struct  
	{  
		char rua [50];  
		int numero;  
		char bairro [20];  
		char cidade [30];  
		char sigla_estado [3];  
		long int CEP;  
	} TEndereco;  
	
	typedef struct  
	{  
		char nome [50];  
		long int telefone;  
		TEndereco endereco;  
	}TFicha;  
	
	int i=0;
	
	main()  
{  
	    TFicha cliente[10];  
	    setlocale(LC_ALL,"portuguese");  
		for (i=0;i<10;i++)
		{
		fflush(stdin);
		printf("Informe o nome do cliente %i.......: ",i+1);  
		gets(cliente[i].nome);  
		fflush(stdin);
		printf("Informe o telefone do cliente.......: ");  
		scanf("%i",&cliente[i].telefone);
		
		fflush(stdin);
		printf("Informe a rua do cliente %i.......: ",i+1);  
		gets(cliente[i].endereco.rua);  
		fflush(stdin);
		printf("Informe o número da casa do cliente %i.......: ",i+1);  
		scanf("%i",&cliente[i].endereco.numero);  
		fflush(stdin);
		printf("Informe o bairro do cliente %i.......: ",i+1);  
		gets(cliente[i].endereco.bairro); 
		printf("Informe a cidade do cliente %i.......: ",i+1);  
		gets(cliente[i].endereco.cidade);
		printf("Informe a sigla do estado do cliente %i.......: ",i+1);  
		gets(cliente[i].endereco.sigla_estado);  
		printf("Informe o CEP do cliente %i.......: ",i+1);  
		scanf("%i",&cliente[i].endereco.CEP);
		printf("\n");
		}
		
		printf("Ficha dos clientes:\n");
		for (i=0;i<10;i++)
		{
		printf("\nCliente %i: %s\nNúmero: %i\n\n",i+1,cliente[i].nome,cliente[i].telefone);
		printf("Endereço do cliente %i: \nRua: %s \n",i+1,cliente[i].endereco.rua);
		printf("Número da casa: %i \n",cliente[i].endereco.numero);
		printf("Bairro: %s \n",cliente[i].endereco.bairro);
		printf("Cidade: %s \n",cliente[i].endereco.cidade);
		printf("Estado: %s \n",cliente[i].endereco.sigla_estado);
		printf("CEP: %i \n",cliente[i].endereco.CEP);
		} 
	return 0;  
}
