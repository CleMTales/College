/* 
Progama: Receber 10 n�meros e imprimir o menor deles.
Autor: Tales Clemente Matsuda
Data de cria��o:08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int menor_num(int num[10])
{
	int menor,i=0;
	for(i=0;i<10;i++)
	{
		if (i==0 or menor>num[i])
		menor = num[i];
	}
	return menor;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	int num[10],i=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o %i� n�mero inteiro: ",i+1);
		scanf("%i",&num[i]);
		getchar();
	}
	
	printf("O menor n�mero dentre os 10 inteiros �: %i.\n",menor_num(num));
	system("pause");
}
