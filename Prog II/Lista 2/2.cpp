/* 
Progama: Receber o nome e sal�rio de um funcion�rio e ao final imprimir o 
sal�rio com um acr�scimo de 10%.
Autor: Tales Clemente Matsuda
Data de cria��o: 29/08/2020
Data de modifica��o: 08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calc_acrescimo(float s1)
{
	return (s1*1.1);
}
main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct 
	{
		char nome[20];
		float salario;
	} Funcionario;
	
	printf("Informe o nome do(a) funcion�rio(a): ");
	gets(Funcionario.nome);
	
	printf("Informe o sal�rio do(a) funcion�rio(a) %s: R$", Funcionario.nome);
	scanf("%f", &Funcionario.salario);
	getchar();
	
	printf("O sal�rio do(a) funcion�rio(a) %s acrescido de 10%% �: R$%.2f.\n", 
			Funcionario.nome, calc_acrescimo(Funcionario.salario));
	system("pause");
}
