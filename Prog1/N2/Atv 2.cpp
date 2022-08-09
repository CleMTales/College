/*
Programa:Menu de opções sobre uma matriz 5x5 aleatória.
Autor: Tales Clemente Matsuda
Data de criação:13/07/2020


*/

#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <time.h>

main()
{
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
		
	// Cria a matriz e contadores.   
 	int matriz[5][5],op,i=0,j=0,maior=-1,menor=-1;
 	
 	printf("A matriz 5x5 é:\n");
 	
  	// Preenche e imprime a matriz com números aleatórios 
	for (i=0; i<5; i++)
	{
		for (j=0;j<5;j++)
		{
			matriz[j][i] = rand()%100;
			printf("%3i\t",matriz[j][i]);
			if ((j/4) == 1)
			printf("\n");
		}
	}
	do
	{		
		printf("Digite um número para executar a operação:\n");
		printf("1)Imprime o maior número da matriz.\n");
		printf("2)Imprime o menor número da matriz.\n");
		printf("3)Imprime a diagonal principal.\n");
		printf("4)Imprime apenas os números impares.\n");
		printf("5)Sair\n");
		printf("Digite sua opção: ");
		scanf("%i",&op);
		
		// Definir maior e menor número da matriz.
		for (i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if (matriz[j][i] > maior or maior == -1)
				maior= matriz[j][i];
				
				if (matriz[j][i] < menor or menor == -1)
				menor = matriz[j][i];			
			}
		}
		printf("\n");
		// Executa as opções de escolha.
		switch (op)
		{
			case 1: 
				printf("O maior número da matriz é: %i.\n\n", maior);
				break;
			case 2:
				printf("O menor número da matriz é: %i.\n\n", menor);
				break;
			case 3: 
				printf("A diagonal principal da matriz é:\n");
				for (i=0;i<5;i++)
				{
					for (j=0;j<5;j++)
					{
						if (i==j)
							printf("%3i\t",matriz[j][i]);
						else
							printf(" \t");
						if ((j/4) == 1)
							printf("\n");
					}
				}
				printf("\n");
				break;
			case 4:
				for (i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if (matriz[j][i] % 2 == 0)
						printf(" \t");
						else 
						printf("%3i\t",matriz[j][i]);
						if ((j/4) == 1)
							printf("\n");
					}
				}
				printf("\n");
				break;
			case 5:
				printf("Finalizando programa.\n");
				break;
			default:
				printf("Opção inválida.\n\n");
				break;
				
		}
	} while (op != 5);
	system ("pause");
	
}
