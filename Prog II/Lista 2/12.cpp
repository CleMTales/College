/* 
Progama: Receber nome e idade de um torneio de tênis e ordena-los em categorias
por idade. O programa encerra quando a palavra 'sair' for digitada.
Autor: Tales Clemente Matsuda
Data de criação: 13/09/2020
Data de modificação:13/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


struct cadTenis{
	char nome[20];
		int idade;
};

void torneioJuvenil(struct cadTenis cad[200], int i)
{
	int jov=0,c=0;
	for(c=0;c<i;c++)
	{
		if(cad[c].idade>=10 and cad[c].idade<=17)
			jov++;
	}
	printf("Há %i candidatos inscritos na categorial 'Juvenil'.\n",jov);
}

void torneioAdulto(struct cadTenis cad[200], int i)
{
	int ad=0,c=0;
	for(c=0;c<i;c++)
	{
		if(cad[c].idade>17 and cad[c].idade<=40)
			ad++;
	}
	printf("Há %i candidatos inscritos na categorial 'Adulto'.\n",ad);
}

void torneioMaster(struct cadTenis cad[200], int i)
{
	int mast=0,c=0;
	for(c=0;c<i;c++)
	{
		if(cad[c].idade>40)
			mast++;
	}
	printf("Há %i candidatos inscritos na categorial 'Master'.\n",mast);
}
	
main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct cadTenis tenis[200];
	
	int i=0;
	
	do{
		printf("Informe o nome do %iº participante do torneio (ou 'sair' para sair): ",i+1);
		gets(tenis[i].nome);
		if (strcmp(tenis[i].nome,"sair")==0)
			break;
		printf("Agora informe a idade do participante: ");
		scanf("%i",&tenis[i].idade);
		getchar();
		i++;
	} while (strcmp(tenis[i-1].nome,"sair")!=0);
	
	torneioJuvenil(tenis,i);
	torneioAdulto(tenis,i);
	torneioMaster(tenis,i);
		
	system("pause");
}
