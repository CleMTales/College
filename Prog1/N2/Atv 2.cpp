/*
Programa:Menu de op��es sobre uma matriz 5x5 aleat�ria.
Autor: Tales Clemente Matsuda
Data de cria��o:13/07/2020


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
 	
 	printf("A matriz 5x5 �:\n");
 	
  	// Preenche e imprime a matriz com n�meros aleat�rios 
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
		printf("Digite um n�mero para executar a opera��o:\n");
		printf("1)Imprime o maior n�mero da matriz.\n");
		printf("2)Imprime o menor n�mero da matriz.\n");
		printf("3)Imprime a diagonal principal.\n");
		printf("4)Imprime apenas os n�meros impares.\n");
		printf("5)Sair\n");
		printf("Digite sua op��o: ");
		scanf("%i",&op);
		
		// Definir maior e menor n�mero da matriz.
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
		// Executa as op��es de escolha.
		switch (op)
		{
			case 1: 
				printf("O maior n�mero da matriz �: %i.\n\n", maior);
				break;
			case 2:
				printf("O menor n�mero da matriz �: %i.\n\n", menor);
				break;
			case 3: 
				printf("A diagonal principal da matriz �:\n");
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
				printf("Op��o inv�lida.\n\n");
				break;
				
		}
	} while (op != 5);
	system ("pause");
	
}
