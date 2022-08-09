/*
Programa: Lampadas por metro quadrado.
Autor: Tales Clemente Matsuda
Data de cria��o: 05/07/2020  
Modifica��o: Tales Clemente Matsuda

Fa�a um programa C para calular o n�mero de l�mpadas 60 watts
necess�rias para um determinado c�modo. O programa dever� ler um
conjunto de informa��es, tais como: tipo, largura e comprimento do
c�modo. O programa termina quando o tipo de c�modo for igual -1. A
tabela abaixo mostra, para cada tipo de c�modo, a quantidade de watts
por metro quadrado.
 Tipo de c�modo | Pot�ncia (watts/m2)
		0		|		12
		1		|		15
		2		|		18
		3		|		20
		4		|		22
		
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float lampada(float area, int tipo)
{
	float xMetros[5], lampadas;
		
	// Defini�ao de 1 lamp�da a cada x metros quadrados.
	xMetros[0] = 12;
	xMetros[1] = 15;
	xMetros[2] = 18;
	xMetros[3] = 20;
	xMetros[4] = 22;
	
	lampadas = (area*xMetros[tipo]/60);
	return lampadas;
}
main()
{
	setlocale(LC_ALL,"portuguese");
		
	int n=0,i=0;
 	
 	// Estrutura para os dados do c�modo.
 	struct 
	{
	  int tipo, l;
	  float largura,comp,area;
  	} cmd[20];
  	
  		for (i=0; i< 20; i++)
	{
		cmd[i].area = 0;
		cmd[i].comp = 0;
		cmd[i].largura = 0;
		cmd[i].l=0;
	}

	do
	{
		// Coleta de informa��es.
		printf("Informe o tipo do c�modo %i (0..4) ou (-1) para terminar: ",n+1);
		scanf("%d", &cmd[n].tipo);
		if (cmd[n].tipo == -1)
			break;			
		getchar();
		if (cmd[n].tipo >= 0 and cmd[n].tipo <= 4)
		{
			printf("Informe a largura do c�modo em metros: ");
			scanf("%f", &cmd[n].largura);
			getchar();
		
			if (cmd[n].largura <= 0)
			printf("Valor inv�lido.\n");			
			else 
			{
				printf("Informe o comprimento do c�modo em metros: ");
				scanf("%f", &cmd[n].comp);
				getchar();
				
				if (cmd[n].comp <= 0)
				printf("Valor inv�lido.\n");
				else
				{
				cmd[n].area = (cmd[n].largura*cmd[n].comp);
				cmd[n].l = ceil(lampada(cmd[n].area,cmd[n].tipo));
				n++;
				}
			}
		
			
		}
		else if (cmd[n].tipo != -1)
			printf("Tipo de c�modo inv�lido.\n");
	} while (cmd[n].tipo != -1);
	
	
	for (i=0; i<20; i++)
	{
		if (cmd[i].largura != 0 and cmd[i].comp != 0)
		{
		printf("C�modo %2d - Largura: %.2fm - ", i+1,cmd[i].largura); 
		printf("Comprimento: %.2fm - �rea: %.2fm\n",cmd[i].comp,cmd[i].area);
		printf("Lampadas para o c�modo %d de tipo %i: %i.\n", i+1,cmd[i].tipo,cmd[i].l);
		}	
	}
	
	
	system ("pause");
	
}
