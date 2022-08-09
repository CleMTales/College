/* 
Progama: Receber o c�digo e pre�o de um produto e ao final exibir o pre�o com 
um decr�scimo de 25%.
Autor: Tales Clemente Matsuda
Data de cria��o: 29/08/2020
Data de modifica��o: 08/09/2020*/

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
	
	printf("Informe o c�digo do produto: ");
	gets(prod.cod);
	
	printf("Informe o pre�o do produto de c�digo %s: R$", prod.cod);
	scanf("%f", &prod.preco);
	getchar();
	
	printf("O pre�o do produto de c�digo %s com decr�scimo de 25%% �: R$%.2f.\n", 
			prod.cod, calc_desconto(prod.preco));
	
	system("pause");
}
