/*
Programa: Compra em um mercado em alguma cidade da regi�o
Autor: Tales Clemente Matsuda
Data de cria��o: 05/07/2020  
Modifica��o: Tales Clemente Matsuda

Fa�a um programa, usando struct,que controle os estoque de 5 produtos em 5
armaz�ns de um supermercado. Neste  programa d� nome aos armaz�ns 
(simule como usu�rio) {Rio de Janeiro, Maca�,
Rio das Ostras, Campos, Nova Friburgo} e simule como usu�rio a
solicita��o de 5 produtos {�leo, Feij�o Preto, Macarr�o, Arroz, Azeite}.
Cadastre suas quantidades, unidade (ex: lt, Kg, Cx) e pre�o de compra.
		
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	
	int pr,i=0;
	struct
	{
		float preco;
	} prod[5];
	
	// Pre�o da unidade dos produtos.
	prod[0].preco = 3;
	prod[1].preco = 4;
	prod[2].preco = 3;
	prod[3].preco = 3;
	prod[4].preco = 15;
	
	struct
	{
		int arm, prod[5],qtia[5]={0,0,0,0,0};
		char armnome[20];
		float total[5],totalcompra=0;
	} pedido;
	
	char unt[5][3] = {{"lt"},{"kg"},{"kg"},{"kg"},{"lt"}};
	
	char nome[5][20] = {{"Rio de Janeiro"},{"Maca�"},{"Rio das Ostras"},
	{"Campos"},{"Nova Friburgo"}};
	
	char produto[5][20] = {{"�leo"},{"Feij�o Preto"},{"Macarr�o"},
	{"Arroz"},{"Azeite"}};
	
	
	// Coletar informa��es sobre o pedido.
	do {
		printf("Informe de qual armazem deseja retirar (0...4) \n");
		printf("0 - %s\n",nome[0]);
		printf("1 - %s\n",nome[1]);
		printf("2 - %s\n",nome[2]);
		printf("3 - %s\n",nome[3]);
		printf("4 - %s\n",nome[4]);
		printf("Digite: ");
		scanf("%i",&pedido.arm);
		getchar();
		
		if (pedido.arm >= 0 and pedido.arm <=4)
		{	
			do 
			{
				printf("Informe qual produto deseja retirar (0...4) ou (-1) para finalizar:\n");
				printf("0 - %s \t\tlitro:\tR$3,00\n",produto[0]);
				printf("1 - %s \tkg:\tR$4,00\n",produto[1]);
				printf("2 - %s \t\tkg:\tR$3,00\n",produto[2]);
				printf("3 - %s \t\tkg:\tR$3,00\n",produto[3]);
				printf("4 - %s \t\tlitro:\tR$15,00\n",produto[4]);
				printf("Digite: ");
				scanf("%i", &pr);
				getchar();
				
				if (pr == -1)
					break;
				if (pr >= 0 and pr <= 4)
				{
					printf("Informe quantos %s do produto deseja pedir: ", unt[pr]);
					scanf("%i",&pedido.qtia[pr]);
					getchar();
					
					if (pedido.qtia[pr] <= 0)
						printf("Quantia inv�lida.\n");
				}
				else if (pr != -1)
					printf("Produto inv�lido.\n");
			} while (pr != -1);
			}
		else
		printf("�ndice de armazem inv�lido.\n");
	} while (pr != -1);

	printf("\nArmaz�m:\t\t\t%s\n\n",nome[pedido.arm]);
	printf("Produtos\t\tQtd\tUnd\t\tPre�o Unit.\tPre�o Total\n");
	
	for (i=0;i<5;i++)
	{
		pedido.total[i] = pedido.qtia[i]*prod[i].preco;
		pedido.totalcompra = pedido.totalcompra + pedido.total[i];
		if (pedido.qtia[i] > 0 and i != 1 and i !=2)
			printf("%s\t\t\t%i\t%s\t\tR$%.2f\t\tR$%.2f\n",produto[i],pedido.qtia[i],unt[i],prod[i].preco,pedido.total[i]);
		if (pedido.qtia[i] > 0 and (i == 1 or i == 2))
			printf("%s\t\t%i\t%s\t\tR$%.2f\t\tR$%.2f\n",produto[i],pedido.qtia[i],unt[i],prod[i].preco,pedido.total[i]);
	}
	printf ("Total: \t\t\t\t\t\t\t\tR$%.2f\n",pedido.totalcompra);
	
	system ("pause");
	
}
