/* 
Progama: Receber 10 números e imprimir o menor deles.
Autor: Tales Clemente Matsuda
Data de criação:08/09/2020*/

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
		printf("Digite o %iº número inteiro: ",i+1);
		scanf("%i",&num[i]);
		getchar();
	}
	
	printf("O menor número dentre os 10 inteiros é: %i.\n",menor_num(num));
	system("pause");
}
