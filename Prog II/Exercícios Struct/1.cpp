/* 
Progama: Fa�a um programa em C para registrar as inscri��es para o evento beneficente Crian�a Esperan�a.
Os dados s�o: CPF, Nome, Sexo, Idade, Profiss�o e Valor da doa��o.
Ao final das inscri��es o programa dever� exibir:
a) A quantidade de homens e mulheres inscritos.
b) A quantidade de pessoas acima de 60 anos.
c) A quantidade de pessoas que doaram acima de 1.000 reais.
d) Valor total arrecadado.
O programa termina quando digitar 0 (zero) para o CPF.
Deve-se utilizar obrigatoriamente Struct, Vetor e Fun��o.
Autor: Tales Clemente Matsuda
Data de cria��o: 31/10/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int homens=0, mulheres=0,idmaior60=0,maior1000=0,i=0,j=0;
float valor_tot=0;


struct Ficha{
	char nome[40], profissao[30], sexo;
	long int cpf;
	int idade;
	float valor;
}Participante[100];

void homens_mulheres()
{
	for(j=0;j<100;j++)
	{
	if (Participante[j].sexo == 'F')
	mulheres++;
	if (Participante[j].sexo == 'M')
	homens++;
	}
	
	
}

void checar_idade()
{
	for(j=0;j<100;j++)
	{
	if (Participante[j].idade >= 60)
	idmaior60++;
	}
}

void checar_doacao()
{
	for(j=0;j<100;j++)
	{
	if (Participante[j].valor >= 1000)
	maior1000++;
	valor_tot = valor_tot+Participante[j].valor;
	}
}
	
main()
{
	setlocale(LC_ALL,"portuguese");
	
	char conf;
	
	
	do{
		do {
			printf("Informe o CPF do %i� participante do evento (ou 0 para sair): ",i+1);
			scanf("%i",&Participante[i].cpf);
			getchar();
			if (Participante[i].cpf == 0)
				break;
			printf("Agora o nome do participante: ");
			gets(Participante[i].nome);
			do{
				printf("Informe o sexo do participante (F/M): ");
				scanf("%c",&Participante[i].sexo);
				getchar();
				Participante[i].sexo = toupper(Participante[i].sexo);
				if (Participante[i].sexo == 'F' or Participante[i].sexo == 'M')
					break;
				printf("Informa��o inv�lida. Tente novamente.\n");
			} while (Participante[i].sexo != 'F' or Participante[i].sexo != 'M');
			printf("Informe a idade do participante: ");
			scanf("%i", &Participante[i].idade);
			getchar();
			printf("Informe a profiss�o do participante: ");
			gets(Participante[i].profissao);
			printf("Indique o valor da doa��o do participante: R$");
			scanf("%f", &Participante[i].valor);
			getchar();
			
			printf("Confira os dados:\n");
			printf("Nome: %s\n",Participante[i].nome);
			printf("CPF: %i\n",Participante[i].cpf);
			printf("Sexo: %c\n",Participante[i].sexo);
			printf("Idade: %i\n",Participante[i].idade);
			printf("Profiss�o: %s\n",Participante[i].profissao);
			printf("Valor da doa��o: R$%.2f\n",Participante[i].valor);
			do {
				printf("Os dados est�o corretos (S/N): ");
				scanf("%c",&conf);
				conf = toupper(conf);
				if (conf == 'S' or conf == 'N')
				break;
			} while (conf != 'S' or conf != 'N');
			} while (conf != 'S');
		
		i++;
	} while (Participante[i-1].cpf != 0);
	
	homens_mulheres();
	checar_idade();
	checar_doacao();

	printf("\nCadastramentos encerrados!.\n");
	printf("O n�mero de doa��es feitas por homens foram: %i.\n",homens);
	printf("O n�mero de doa��es feitas por mulheres foram: %i.\n",mulheres);
	printf("Total de doa��es feitas por pessoas acima de 60 anos: %i.\n",idmaior60);
	printf("Total de doa��es acima de R$1000: %i.\n",maior1000);
	printf("O valor total das doa��es foi de: R$%.2f.\n",valor_tot);
	
	system("pause");
}
