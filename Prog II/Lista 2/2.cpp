/* 
Progama: Receber o nome e salário de um funcionário e ao final imprimir o 
salário com um acréscimo de 10%.
Autor: Tales Clemente Matsuda
Data de criação: 29/08/2020
Data de modificação: 08/09/2020*/

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
	
	printf("Informe o nome do(a) funcionário(a): ");
	gets(Funcionario.nome);
	
	printf("Informe o salário do(a) funcionário(a) %s: R$", Funcionario.nome);
	scanf("%f", &Funcionario.salario);
	getchar();
	
	printf("O salário do(a) funcionário(a) %s acrescido de 10%% é: R$%.2f.\n", 
			Funcionario.nome, calc_acrescimo(Funcionario.salario));
	system("pause");
}
