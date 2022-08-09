
/* 
Progama: Receber um nome e altura dos 16 atletas de basquete do Clube Macaé e 
armazenar em uma matriz 4x4. Ao final, imprimir nome e altura do menor e maior
atleta e a média de altura entre todos.
Autor: Tales Clemente Matsuda
Data de criação: 12/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int menorJ,menorI,maiorI,maiorJ;

void checagem_menor(float alt[4][4])
{
	int i=0,j=0,menI=0,menJ=0;
	
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((alt[i][j]) < (alt[menI][menJ]))
			{
				menJ= j;
				menI = i;
			}
			
		}
	}
	menorJ= menJ;
	menorI= menI;
}

void checagem_maior(float alt[4][4])
{
	int i=0, j=0,maiJ=0,maiI=0;
		
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if ((alt[i][j]) > (alt[maiI][maiJ]))
			{
				maiJ = j;
				maiI = i;
			}
		}
	}
 	maiorI=maiI;
	maiorJ=maiJ;
}

float checagem_media(float alt[4][4])
{
	int i=0, j=0;
	float media=0;
	
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			media = (media+alt[i][j]);
		}
	}
	return (media/16);
}
	
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float alturas[4][4],media;
	int i=0,j=0,a=0;
		
	struct {
		char nome[20];
	} macae[4][4];
	for (i=0;i<4;i++)
	{
		for(j=0;j<4;j++,a++)
		{
			printf("Informe o nome do %iº atleta: ",a+1);
			gets(macae[i][j].nome);
			printf("Informe a altura desse atleta: ");
			scanf("%f",&alturas[i][j]);
			getchar();
		}
	}
	
	checagem_maior(alturas);
	checagem_menor(alturas);
	media = checagem_media(alturas);
	
	printf("O maior atleta é %s que mede %.2f cm.\n",macae[maiorI][maiorJ].nome,alturas[maiorI][maiorJ]);
	printf("O menor atleta é %s que mede %.2f cm.\n",macae[menorI][menorJ].nome,alturas[menorI][menorJ]);
	printf("A média da altura dos atletas é: %.2f cm.\n",media);
	
	
	
	system("pause");
}
