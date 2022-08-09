/* 
Progama: Deseja-se registrar a Placa, Nome do proprietário, 
a Categoria (Moto, Carro ou Caminhão), o Tipo de Lavagem (Básica ou Geral) 
e o valor.
programa deverá ser finalizado quanto for informado “SAIR” na placa do veículo.
Para cada veículo, o programa deverá exibir os dados do mesmo e 
o valor à pagar pelo cliente.
Ao final, o programa deverá exibir:
a) A Quantidade de lavagens efetuadas.
b) O Total de carros que fizeram a lavagem geral.
Autor: Tales Clemente Matsuda
Data de criação: 31/10/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int total=0, carros_geral=0;
float valor_tot=0;
char conf;


struct Ficha{
	char placa[10],proprietario[40],cat[10],ct,tipo;
	float valor;
}Veiculo;

void checar_valor()
{
	if (Veiculo.ct == 'M')
		if(Veiculo.tipo == 'B')
		Veiculo.valor = 10;
		else
		Veiculo.valor = 15;
	else if (Veiculo.ct == 'C')
		if (Veiculo.tipo == 'B')
		Veiculo.valor = 30;
		else 
		Veiculo.valor = 45;
	else 
		if (Veiculo.tipo == 'B')
			Veiculo.valor = 70;
		else 
		Veiculo.valor = 100;
}
void checar_lavagem()
{
	if (conf == 'S')
		total++;
	if (Veiculo.ct == 'C' and Veiculo.tipo == 'G')
		carros_geral++;
	conf = '0';
	Veiculo.ct = '0';
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i=0;
	
	
	do{
		do {
			printf("Informe a placa do veículo a ser lavado (ou 'sair' para encerrar): ");
			gets(Veiculo.placa);
		
			for(i=0;i<10;i++){
				Veiculo.placa[i] = toupper(Veiculo.placa[i]);}
		
			if (strcmp(Veiculo.placa, "SAIR") == 0)
				break;
			printf("Agora o nome do proprietário do veículo: ");
			gets(Veiculo.proprietario);
			
			do {
				printf("Informe o tipo do veículo (carro, moto ou caminhão): ");
				gets(Veiculo.cat);
				
				for(i=0;i<10;i++){
					Veiculo.cat[i] = tolower(Veiculo.cat[i]);}
				
				if (strcmp(Veiculo.cat,"carro") ==0){
					Veiculo.ct = 'C';
					break;}
				else if (strcmp(Veiculo.cat,"moto") == 0){
					Veiculo.ct = 'M';
					break;}
				else if (strcmp(Veiculo.cat, "caminhão") == 0 or
					 strcmp(Veiculo.cat, "caminhao") == 0){
					Veiculo.ct = 'K';
					break;}
				else 
					printf("Tipo de veículo inválido. Digite novamente!\n");
			} while (Veiculo.ct != 'C' or Veiculo.ct != 'M' or Veiculo.ct != 'K');
			
			printf("Agora o tipo de lavagem:\n");
		
			if(Veiculo.ct == 'M') {
				printf("\tBásica\t\tGeral\n");
				printf("Moto\tR$10,00\t\tR$15,00\n");}
				
			else if (Veiculo.ct == 'C') {
				printf("\tBásica\t\tGeral\n");
				printf("Carro\tR$30,00\t\tR$45,00\n");}
				
			else if (Veiculo.ct == 'K')	{
				printf("\tBásica\t\tGeral\n");
				printf("Caminhão\tR$70,00\t\tR$100,00\n");	}
			do{
				printf("Informe aqui o tipo de lavagem (B/G): ");
				scanf("%c",&Veiculo.tipo);
				Veiculo.tipo = toupper(Veiculo.tipo);
				getchar();
				if (Veiculo.tipo == 'B' or Veiculo.tipo == 'G')
					break;
				printf("Tipo de lavagem inválido. Tente novamente!\n");
			} while (Veiculo.tipo != 'B' or Veiculo.tipo != 'G');
			
			checar_valor();
			
			printf("\nConfira os dados:\n");
			printf("Proprietário: %s\n",Veiculo.proprietario);
			printf("Categoria: %s\n",Veiculo.cat);
			printf("Tipo de lavagem: %c\n",Veiculo.tipo);
			printf("Valor à pagar: R$ %.2f\n",Veiculo.valor);
			
			do {
				printf("Os dados estão corretos (S/N): ");
				scanf("%c",&conf);
				getchar();
				conf = toupper(conf);
				if (conf == 'S' or conf == 'N')
					break;
				printf("Resposta inválida. Digite novamente.\n");
			} while (conf != 'S' or conf != 'N');
		} while (conf != 'S');
		
		checar_lavagem();
	} while (strcmp(Veiculo.placa,"SAIR") != 0);
	


	printf("\nLavagens encerradas!\n");
	printf("O número total de lavagens foi de: %i.\n",total);
	printf("O número lavagens gerais feitas em carros foi de: %i.\n",carros_geral);

	
	system("pause");
}
