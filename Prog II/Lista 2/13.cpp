/* 
Progama: Receber nome e notas de 28 alunos. Ao final calcular media e exibir
status de aprovação.
Autor: Tales Clemente Matsuda
Data de criação: 13/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float checarMedia(float notas1,float notas2,int* aprovado)
{
	int i=0;
	float media;
	
	media=(notas1+notas2)/2;
		
	if(media<7)
		*aprovado=0;
	else 
		*aprovado=1;
		
	return media;
}


main()
{
	setlocale(LC_ALL,"portuguese");
	
	char alunos[28][20];
	float notas1[28],notas2[28],media[28];
	int aprovado[28];
	
	int i=0;
	
	for(i=0;i<28;i++){
		printf("Informe o nome do %iº aluno: ",i+1);
		gets(alunos[i]);
		printf("Informe a primeira nota desse aluno: ");
		scanf("%f",&notas1[i]);
		getchar();
		printf("Agora informe a segunda nota desse aluno: ");
		scanf("%f",&notas2[i]);
		getchar();
	} 
	for(i=0;i<28;i++){
		media[i]=checarMedia(notas1[i],notas2[i], &aprovado[i]);
		if (aprovado[i]==1)
			printf("O aluno %s foi aprovado com média %.2f.\n",alunos[i],media[i]);
		else 
			printf("O aluno %s foi reprovado com média %.2f.\n",alunos[i],media[i]);
	}
	system("pause");
}
