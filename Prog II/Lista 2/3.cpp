/* 
Progama: Receber o código e preço de um produto e ao final exibir o preço com 
um decréscimo de 25%.
Autor: Tales Clemente Matsuda
Data de criação: 29/08/2020
Data de modificação: 08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calc_desconto(float valor)
{
	return (valor*0.75);
}
main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct 
	{
		char cod[10];
		float preco;
	} prod;
	
	printf("Informe o código do produto: ");
	gets(prod.cod);
	
	printf("Informe o preço do produto de código %s: R$", prod.cod);
	scanf("%f", &prod.preco);
	getchar();
	
	printf("O preço do produto de código %s com decréscimo de 25%% é: R$%.2f.\n", 
			prod.cod, calc_desconto(prod.preco));
	
	system("pause");
}
