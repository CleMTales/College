/* 
Progama: Receber nome, sexo e valor da doação de um baile beneficente da 3ª idade.
O baile terá, ao máximo, 150 convidados. Ao final, calcular quantas doações foram
maiores que R$50,00 e a média de doação por pessoa.
Autor: Tales Clemente Matsuda
Data de criação: 29/09/2020
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

struct {
	char nome [40],sexo;
	float doacao;
} pessoa[150];

float totalDoacao = 0,mediaDoacao;
int maior50=0;
int p=0;
total_media()
{
	
	for (p=0;p<150;p++)
	{
		if (pessoa[p].doacao == 0)
		break;
		totalDoacao = totalDoacao + pessoa[p].doacao;
	}
	mediaDoacao = totalDoacao/p;
}

mais50()
{
	int c=0;
	for (c=0;c<150;c++)
	{
		if (pessoa[c].doacao>50)
		maior50++;
	}
}

main(){
	setlocale(LC_ALL,"portuguese");
	int i=0;
	printf("Começaram as inscrições para o Baile da 3ª Idade!\n");
	for(i=0;i<150;i++)
	{
		printf("Informe o nome do %iº participante: ",i+1); 
		// "fim" encerra para meios de checagem
		gets(pessoa[i].nome);
		
		if (strcmp(pessoa[i].nome,"fim")==0)
		break;
		
		printf("Informe o sexo declarado desse participante (M/F): ");
		scanf("%c",&pessoa[i].sexo);
		getchar();
		printf("Agora informe a doação feita por essa participante: R$");
		scanf("%f",&pessoa[i].doacao);
		getchar();
		while (pessoa[i].doacao<=0)
		{
			printf("Valor inválido! Digite um valor maior que 0: R$");
			scanf("%f",&pessoa[i].doacao);
			getchar();
		}
	}
	mais50();
	total_media();
	
	printf("\nInscrições encerradas!\n");
	printf("Houveram um total de %i doações acima de R$50,00.\n",maior50);
	printf("E a média de doações foi de R$%.2f.\n",mediaDoacao);
	
	

	system("pause");
}
