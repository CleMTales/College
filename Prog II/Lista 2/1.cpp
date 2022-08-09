/* 
Progama: Receber o nome e 3 notas de um aluno, ao final, calcular e imprimir
a média.
Autor: Tales Clemente Matsuda
Data de criação: 29/08/2020
Data de modificação: 08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calc_media(float n1, float n2, float n3)
{
	return ((n1+n2+n3)/3);
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct 
	{
		char nome[20];
		float notas[3];
	} Aluno;
	
	int i=0;
	
	printf("Informe o nome do(a) aluno(a): ");
	gets(Aluno.nome);
	
	for(i=0;i<3;i++)
	{
		printf("Informe a %i nota do(a) aluno(a) %s:  ", i+1,Aluno.nome);
		scanf("%f", &Aluno.notas[i]);
		getchar();
	}
	
	printf("A média do(a) aluno(a) %s é: %.2f.\n", Aluno.nome,
			 calc_media(Aluno.notas[0],Aluno.notas[1],Aluno.notas[2]));
	system("pause");
}
