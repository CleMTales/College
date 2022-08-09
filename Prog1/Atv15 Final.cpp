#include<stdio.h>
#include<stdlib.h>
main()
{
	int num,cont,cent=0,dez=0,uni=0;
	printf("Digite um numero menor que 1000:\n");
	scanf("%i",&num);
	if (num <= 0 or num > 1000)
	{	
		printf("Numero invalido.");
		return 0;
	}
	
	while (cont < (num - 99))
	{
		cont = cont + 100;
		cent++;
	}
	
	num = num - (cent*100);
	cont = 0;
	
	while (cont < (num - 9))
	{
		cont = cont + 10;
		dez++;
	}
	
	num = num - (dez*10);
	cont = 0;
	
	while (cont != num)
	{
		cont++;
		uni++;
	}
	
	num = num - uni;
	cont = 0;
	
	printf("O numero contem");
	
	switch (cent)
	{
		case 0:
		break;
		case 1:
			printf(" 1 centena");
		break;
		default:
			printf(" %i centenas",cent);
	}
	
	if (uni==0 and cent!=0 and dez!=0)
			printf(" e");
		
	
	switch (dez)
	{
		case 0:
		break;
		case 1:
			if (cent!=0 and uni!=0)
				{
				printf(",");
				}
			printf(" 1 dezena");
		break;
		default:
			if (cent!=0 and uni!=0)
				{
				printf(",");
				}
			printf(" %i dezenas",dez);
	}
	
	switch (uni)
	{
		case 0:
			printf(".");
		break;
		case 1:
			if (dez!=0 or cent!=0)
			{
				printf(" e");
			}
			printf(" 1 unidade.\n");
		break;
		default:
			if (dez!=0 or cent!=0)
			{
				printf(" e");
			}
			printf(" %i unidades.\n",uni);
	}
	
	system("pause");
	return 0;
}
