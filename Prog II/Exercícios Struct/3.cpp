/* 
Progama: Fa�a um programa em C para calcular o IMC dos pacientes de uma cl�nica
de Nutri��o.
Para cada paciente ser� registrado o Nome, Sexo, Peso e Altura.
O programa dever� terminar quando digitar �SAIR� para o nome do
paciente.
Para cada paciente, o programa dever� exibir a classifica��o de acordo
com a tabela acima.
Quando o programa for finalizado, deve-se exibir o Nome e o Peso de
todos os pacientes Obesos e abaixo do peso.
Deve-se utilizar Struct, Vetor e Fun��o.
Autor: Tales Clemente Matsuda
Data de cria��o: 31/10/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int i=0;

struct Ficha{
	char nome[40],sexo;
	float peso, altura, IMC;
	int indice;
}Paciente[100];

void checar_IMC(){
	if (Paciente[i].IMC<=18.5)
		Paciente[i].indice = 1;
	else if (Paciente[i].IMC > 18.5 and Paciente[i].IMC <= 24.9)
		Paciente[i].indice = 2;
	else if (Paciente[i].IMC > 24.9 and Paciente[i].IMC <= 29.9)
		Paciente[i].indice = 3;
	else if (Paciente[i].IMC > 29.9 and Paciente[i].IMC <= 34.9)
		Paciente[i].indice = 4;
	else if (Paciente[i].IMC > 34.9 and Paciente[i].IMC <= 39.9)
		Paciente[i].indice = 5;	
	else if (Paciente[i].IMC > 39.9)
		Paciente[i].indice = 6;
	
}

void checar_classificacao(){
	switch (Paciente[i].indice)	{
			case 1: 
				printf("abaixo do peso.\n");
				break;
			case 2:
				printf("peso ideal.\n");
				break;
			case 3: 
				printf("levemente acima do peso.\n");
				break;
			case 4:
				printf("Obesidade grau I.\n");
				break;
			case 5: 
				printf("Obesidade grau II(severa).\n");
				break;
			case 6:
				printf("Obesidade grau III(m�rbida).\n");
				break;
			default:
				printf("Dados inv�lidos.\n");
				break;
		}
}

void checar_estado()
{
	for (i=0;i<100;i++)	{	
	if (Paciente[i].indice == 1)
		printf("O paciente %s encontra-se abaixo do peso ideal.\n",Paciente[i].nome);
	if (Paciente[i].indice > 3)
		printf("O paciente %s encontra-se em estado de obesidade.\n",Paciente[i].nome);
	}
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int j=0;
		
	do{
		printf("Informe o nome do paciente (ou 'sair' para encerrar): ");
		gets(Paciente[i].nome);
	
		for(j=0;j<40;j++){
			Paciente[i].nome[j] = toupper(Paciente[i].nome[j]);}
	
		if (strcmp(Paciente[i].nome, "SAIR") == 0)
			break;
			
		printf("Agora informe o sexo do paciente (M/F): ");
		scanf("%c",&Paciente[i].sexo);
		Paciente[i].sexo = toupper(Paciente[i].sexo);
		getchar();
		printf("Indique o peso do paciente em KG: ");
		scanf("%f",&Paciente[i].peso);
		getchar();
		printf("E a altura do paciente em metros (ex 1,70): ");
		scanf("%f",&Paciente[i].altura);
		getchar();
		
		Paciente[i].IMC = Paciente[i].peso/(Paciente[i].altura*Paciente[i].altura);
		checar_IMC();
		
		printf("O paciente %s est� na classifica��o: ", 
			Paciente[i].nome);
		checar_classificacao();
		i++;
	} while (strcmp(Paciente[i-1].nome,"SAIR") != 0);
	
	printf("\n\nAn�lises encerradas. De acordo com as an�lises feitas:\n");
	checar_estado();

	
	system("pause");
}
