/* Programa: Modelo de estrutura em (cliente) struct aninhada  
Autor: Anselmo Pestana R. Costa  
Data de criação: 09/06/2020  
Data de Modificação: 10/06/2020  
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
	
	main()  
{  
	    TFicha cliente;  
	    setlocale(LC_ALL,"portuguese");  
		
		fflush(stdin);
		printf("Informe o nome do cliente.......: ");  
		gets(cliente.nome);  
		fflush(stdin);
		printf("Informe o telefone do cliente.......: ");  
		scanf("%i",&cliente.telefone);
		
		fflush(stdin);
		printf("Informe a rua do cliente.......: ");  
		gets(cliente.endereco.rua);  
		fflush(stdin);
		printf("Informe o número da casa do cliente.......: ");  
		scanf("%i",&cliente.endereco.numero);  
		fflush(stdin);
		printf("Informe o bairro do cliente.......: ");  
		gets(cliente.endereco.bairro); 
		printf("Informe a cidade do cliente.......: ");  
		gets(cliente.endereco.cidade);
		printf("Informe a sigla do estado do cliente.......: ");  
		gets(cliente.endereco.sigla_estado);  
		printf("Informe o CEP do cliente.......: ");  
		scanf("%i",&cliente.endereco.CEP);
		printf("\n");
		
		printf("Ficha do cliente:\n");
		printf("\nCliente: %s\nNúmero: %i\n\n",cliente.nome,cliente.telefone);
		printf("Endereço do cliente: \nRua: %s \n",cliente.endereco.rua);
		printf("Número da casa: %i \n",cliente.endereco.numero);
		printf("Bairro: %s \n",cliente.endereco.bairro);
		printf("Cidade: %s \n",cliente.endereco.cidade);
		printf("Estado: %s \n",cliente.endereco.sigla_estado);
		printf("CEP: %i \n",cliente.endereco.CEP);
	return 0;  
}
