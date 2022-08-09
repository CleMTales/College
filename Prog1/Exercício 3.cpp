/*
Programa: Estoque de 5 armaz�ns.
Autor: Tales Clemente Matsuda
Data de cria��o: 05/07/2020  
Modifica��o: Tales Clemente Matsuda

Fa�a um programa que controle os estoque de 5 produtos em 5
armaz�ns de um supermercado.
		
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
		
	struct
	{
		int arm, prod, qtia;
	} pedido[10];
	
	int i=0,j=0,n=0, ficha[3], estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90},
	{250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}};
	
	// Exibir o estado inicial do estoque.
	printf("\t~\t~\tBoletim de estoque\t~\t~\n");
	printf("\n\t\tP1\tP2\tP3\tP4\tP5\n");
	for(i=0;i<5;i++)
	{
		printf("Armazem %i: ",i);
		for (j=0;j<5;j++)
		{
			printf("\t%i",estoque[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// Coletar informa��es sobre o pedido.
	do
	{
	printf("Informe de qual armazem deseja retirar (0...4) ou (-1) para finalizar: ");
	scanf("%i",&pedido[n].arm);
	getchar();
	
	if (pedido[n].arm == -1)
		break;
	
	if (pedido[n].arm >= 0 and pedido[n].arm <=4)
	{	
		printf("Informe qual produto deseja retirar (1...5): ");
		scanf("%i", &pedido[n].prod);
		getchar();
		
		if (pedido[n].prod >= 0 and pedido[n].prod <= 4)
		{
			printf("Informe a quantia do produto que deseja pedir: ");
			scanf("%i",&pedido[n].qtia);
			getchar();
			
			if (pedido[n].qtia <= estoque[pedido[n].arm][pedido[n].prod-1])
			{
				estoque[pedido[n].arm][pedido[n].prod-1] = estoque[pedido[n].arm][pedido[n].prod-1]-pedido[n].qtia;
				n++;
			}
			else if (pedido[n].qtia > estoque[pedido[n].arm][pedido[n].prod-1])
				printf ("Estoque com quantidade insuficiente para atender ao pedido.\n");
			else
				printf("Quantia inv�lida.\n");
		}
		else 
			printf("Produto inv�lido.\n");
	}
	else if (pedido[n].arm != -1)
	printf("�ndice de armazem inv�lido.\n");
	
	} while (pedido[n].arm != -1);
	
	// Exibir estado final do estoque.
	printf("\n\t~\t~\tBoletim de estoque\t~\t\n~");
	printf("\n\t\tP1\tP2\tP3\tP4\tP5\n");
	for(i=0;i<5;i++)
	{
		printf("Armazem %i: ",i);
		for (j=0;j<5;j++)
		{
			printf("\t%i",estoque[i][j]);
		}
		printf("\n");
	}
	
	system ("pause");
	
}
