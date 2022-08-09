/*
Programa: Cadastro, impressão de estoque e cálculo de venda de produtos.
Autor: Tales Clemente Matsuda
Data de criação: 13/07/2020  
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	typedef	struct
	{
		int qtd=0, porV=0;
		char desc[30],unid[3];
		float preUnt=0,preTot=0;
	} Prod;
	
	typedef struct
	{
		int valor, tipo;
	} cad;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	Prod est[5];
	
	
	
	int i=0,j=0,op,cod,quit=0;
	float totVenda, totEst;
	
	do{
		printf("Digite o número correspondente à ação que dejesa fazer: \n");
		printf("1)Cadastrar produtos.\n");
		printf("2)Imprimir estoque.\n");
		printf("3)Terminar cadastro.\n");
		printf("Digite sua opção: ");
		scanf("%i",&op);
		
		switch (op)
		{
			case 1:
				do {
					printf("Informe o código do produto que deseja cadastrar ou 0 para sair: ");
					fflush(stdin);
					scanf("%i",&cod);
					if (cod==0)
					break;
					
					printf("Informe a descrição do produto: ");
					fflush(stdin);
					gets(est[cod].desc);
					
					printf("Informe o tipo de unidade do produto (KG,Lt,Un,Pct,etc): ");
					fflush(stdin);
					gets(est[cod].unid);
				
					printf("Informe a quantidade do produto: ");
					fflush(stdin);
					scanf("%i",&est[cod].qtd);
					
					printf("Informe o preço da unidade do produto: ");
					fflush(stdin);
					scanf("%f",&est[cod].preUnt);
					
					printf("Informe a porcentagem sobre a venda do produto: ");
					fflush(stdin);
					scanf("%i",&est[cod].porV);
					} while(cod!=0);
				break;
			
			case 2:
				printf("Cod\tDescrição\tUnid\tPreço Unit\t%% venda\tPreço Total\n");
				for (i=0;i<5;i++)
				{
					if(est[i].qtd!=0)
					{
						est[i].preTot=((est[i].qtd*est[i].preUnt)*(1+(est[i].porV/100)));
						printf("%3i\t%s\t\t%s\t%.2f\t\t%i\t%.2f\n",i+1,est[i].desc,est[i].unid,est[i].preUnt,est[i].porV,est[i].preTot);			
						totVenda = totVenda+est[i].preTot;
						totEst= totEst+est[i].preUnt*est[i].qtd;
						printf("Venta total estimada: R$%.2f\n",totVenda);
						printf("Total em estoque:R$%.2f\n",totEst);
					}
				}
		}
	}while(op!=3);
		
	
	system ("pause");
	
}
