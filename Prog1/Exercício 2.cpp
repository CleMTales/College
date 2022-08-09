/*
Programa: Lampadas por metro quadrado.
Autor: Tales Clemente Matsuda
Data de criação: 05/07/2020  
Modificação: Tales Clemente Matsuda

Faça um programa C para calular o número de lâmpadas 60 watts
necessárias para um determinado cômodo. O programa deverá ler um
conjunto de informações, tais como: tipo, largura e comprimento do
cômodo. O programa termina quando o tipo de cômodo for igual -1. A
tabela abaixo mostra, para cada tipo de cômodo, a quantidade de watts
por metro quadrado.
 Tipo de cômodo | Potência (watts/m2)
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
		
	// Definiçao de 1 lampâda a cada x metros quadrados.
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
 	
 	// Estrutura para os dados do cômodo.
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
		// Coleta de informações.
		printf("Informe o tipo do cômodo %i (0..4) ou (-1) para terminar: ",n+1);
		scanf("%d", &cmd[n].tipo);
		if (cmd[n].tipo == -1)
			break;			
		getchar();
		if (cmd[n].tipo >= 0 and cmd[n].tipo <= 4)
		{
			printf("Informe a largura do cômodo em metros: ");
			scanf("%f", &cmd[n].largura);
			getchar();
		
			if (cmd[n].largura <= 0)
			printf("Valor inválido.\n");			
			else 
			{
				printf("Informe o comprimento do cômodo em metros: ");
				scanf("%f", &cmd[n].comp);
				getchar();
				
				if (cmd[n].comp <= 0)
				printf("Valor inválido.\n");
				else
				{
				cmd[n].area = (cmd[n].largura*cmd[n].comp);
				cmd[n].l = ceil(lampada(cmd[n].area,cmd[n].tipo));
				n++;
				}
			}
		
			
		}
		else if (cmd[n].tipo != -1)
			printf("Tipo de cômodo inválido.\n");
	} while (cmd[n].tipo != -1);
	
	
	for (i=0; i<20; i++)
	{
		if (cmd[i].largura != 0 and cmd[i].comp != 0)
		{
		printf("Cômodo %2d - Largura: %.2fm - ", i+1,cmd[i].largura); 
		printf("Comprimento: %.2fm - Área: %.2fm\n",cmd[i].comp,cmd[i].area);
		printf("Lampadas para o cômodo %d de tipo %i: %i.\n", i+1,cmd[i].tipo,cmd[i].l);
		}	
	}
	
	
	system ("pause");
	
}
