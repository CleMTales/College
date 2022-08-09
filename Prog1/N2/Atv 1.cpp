/*
Programa:Ordenar um vetor de 50 posições e classificar a quantidade das 
trocas dentre melhor caso (t<200), pior caso (t>400) e caso médio(200<t<400).
Autor: Tales Clemente Matsuda
Data de criação:13/07/2020

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main()
{
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
		
	// Cria o vetor
 	int vet[50], vetOrd[50], mem, i=0, j=0, t=0; 	
 	
 	// Preenche o vetor com números aleatórios 
 	printf("O vetor de 50 unidades é:\n");
 	
 	for (i=0; i<50; i++)
 	{
 	vet[i] = rand()%100;
 	vetOrd[i] = vet[i];
 	printf("%i\t", vet[i]);
	}
	
	printf("\nPressione alguma tecla para ordená-lo em ordem crescente.\n");
	system("pause");
	
	// Ordena o vetor de modo crescente utilizando Bubble Sort e armazena quantas
	// trocas foram feitas.
	
	for (i=0;i<50;i++)
	{
		for (j=0;j<49;j++)
		{
			if (vetOrd[j+1]<vetOrd[j])
			{
				printf("Troca %3i: vet[%i] = %i x vet[%i] = %i\n",t+1,j,vetOrd[j],j+1,vetOrd[j+1]);
				mem=vetOrd[j];
				vetOrd[j]=vetOrd[j+1];
				vetOrd[j+1]=mem;
				t++;
			}
		}
	}
	printf("\n");
	// Exibe o resultado.
	printf("O total de trocas realizadas foram: %i.\n",t);
	printf("Se encaixa na categoria de: ");
	if(t<200)
	printf("Melhor caso.\n");
	if(t>200 and t<400)
	printf("Caso médio.\n");
	if(t>400)
	printf("Pior caso.\n\n");
	
	printf("O vetor não ordenado era:\n");
	for ( i=0;i<50;i++)
	{
		printf("%i",vet[i]);
		if (i<49)
			printf(", ");
	}
	printf(".\n");
	
	printf("\nO vetor de 50 unidades em ordem crescente:\n");
	for (i=0;i<50;i++) 
	{
		printf("%i",vetOrd[i]);
		if (i<49)
			printf(", ");
	}
	
	printf(".\n");
	system ("pause");
	
}
