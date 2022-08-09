/* 
Progama: Fa�a um programa em C para registrar uma Enquete de vota��o para um
concurso de Bandas de Rock n Roll.
As 5 bandas que ir�o se apresentar s�o: Thunderstruck, COVID-21,
Transgress�o, Epic e Overdrive.
Para cada pessoa que ir� votar, o programa dever� registrar o CPF,
Nome, Sexo, Idade e a nota da vota��o.
O programa termina quando digitar �SAIR� no nome da pessoa.
Ao final, o programa dever� exibir:
a) A m�dia da avalia��o das 5 bandas
b) A quantidade de pessoas votantes
c) O Nome da banda vencedora
Autor: Tales Clemente Matsuda
Data de cria��o: 01/11/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int i=0,win=0;

struct ficha_pessoa{
	char nome[40],sexo;
	int idade,votos[5];
	long int CPF;
}Votante[200];

struct ficha_banda{
	char nome [20];
	float media, total;

}Bandas[5];

void coletar_votos(){
	int j=0;
	for (j=0;j<5;j++) {
		printf("Indique, de 1 a 5, qual a nota atribu�da � banda %s: ",
			Bandas[j].nome);
		scanf("%i",&Votante[i].votos[j]);
		getchar();
		Bandas[j].total = Bandas[j].total + Votante[i].votos[j];
	}
}

void media_votos(){
	int j=0;
	for (j=0;j<5;j++) {
		Bandas[j].media = Bandas[j].total/i;
		printf("A m�dia de votos da banda %s foi de %.2f.\n",Bandas[j].nome,
		Bandas[j].media);
	}
	
}

void checar_votos(){
	int j=0;
	
	for (j=0;j<5;j++) {
		if (Bandas[j].total > Bandas[win].total)
			win = j;
	}
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int j=0;
	
	strcpy(Bandas[0].nome,"Thunderstruck");
	strcpy(Bandas[1].nome,"COVID-21");
	strcpy(Bandas[2].nome,"Transgress�o");
	strcpy(Bandas[3].nome,"Epic");
	strcpy(Bandas[4].nome,"Overdrive");
		
	printf("In�cio da vota��o do Concurso de Bandas!\n");
	printf("Os votos se dar�o em notas da seguinte forma:\n");
	printf("[1]P�ssima\n");
	printf("[2]Ruim\n");
	printf("[3]Regular\n");
	printf("[4]Boa\n");
	printf("[5]Excelente\n");
	printf("Que comecem os votos!\n");
	
	do{
		printf("Informe o nome de quem ir� votar (ou 'sair' para encerrar): ");
		gets(Votante[i].nome);
	
		for(j=0;j<40;j++){
			Votante[i].nome[j] = toupper(Votante[i].nome[j]);}
	
		if (strcmp(Votante[i].nome, "SAIR") == 0)
			break;
		printf("Indique o CPF do votante: ");
		scanf("%i",&Votante[i].CPF);
		getchar();
		printf("Informe o sexo do votante (M/F): ");
		scanf("%c",&Votante[i].sexo);
		getchar();
		printf("Indique a idade do votante: ");
		scanf("%i",&Votante[i].idade);
		
		coletar_votos();
		
		i++;
	} while (strcmp(Votante[i-1].nome,"SAIR") != 0);
	
	checar_votos();
	
	printf("\n\nApura��o encerrada.\n");
	printf("A banda vencedora foi: %s.\n",Bandas[win].nome);
	media_votos();
	printf("O total de pessoas que votaram foi: %i.\n",i);
		
	system("pause");
}
