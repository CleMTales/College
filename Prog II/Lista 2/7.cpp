/* 
Progama: Obtêm a idade de várias pessoas. Imprimir quantas são menores de 21.
Imprimir quantas são maiores de 50. Termina quando a idade inserida for = 0.
Autor: Tales Clemente Matsuda
Data de criação: 29/08/2020
Data de modificação:12/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

check_idade(int idades[100], int p)
{
	int menor21=0, maior50=0,j=0;
	for(j=0;j<p;j++)
	{
		if (idades[j] < 21 and idades[j] != 0)
		menor21++;
		if (idades[j] > 50)
		maior50++;
	}
	printf("Dentre as %i pessoas:\n",j-1);
	printf("O total de pessoas menores de 21 anos é: %i.\n",menor21);
	printf("O total de pessoas maiores de 50 anos é: %i.\n",maior50);
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i=0,idade[100];
		
	do{
		printf("Informe a idade da %iª pessoa (ou 0 para encerrar): ",i+1);
		scanf("%i",&idade[i]);
		getchar();
		
		i++;
	} while (idade[i-1] != 0);
	
	check_idade(idade, i);
		
	system("pause");
}
