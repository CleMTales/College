/*
Autor: Tales Clemente Matsuda
Prog: Opção entre calculadora, verificação de palíndromo, mistura de string e
identificação de maior e menor número.
Data de criação: 19/05/2020
Última atualização: 19/05/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<ctype.h>

main()


{
	setlocale(LC_ALL,"portuguese");
	
	float n[3],r,maior,menor;
	int c,op,tam,tam2;
	char opc,pali[20],pali2[20]={},p1[20],p2[20],quit;
	

	printf("Digite um número para prosseguir:\n");
	printf("1)Calculadora\n");
	printf("2)Verificação de palíndromo\n");
	printf("3)Mistura de palavras\n");
	printf("4)Identificação de número maior e número menor\n");
	printf("5)Fim.\n");
	printf("Sua opção é: ");
	scanf("%i",&op);
	getchar();
	
	switch (op)
	{
		case 1:
			printf("1)Caluladora.\n");
			printf("Digite um número: ");
			scanf("%f",&n[1]);
			printf("Digite outro número: ");
			scanf("%f",&n[2]);
			getchar();
			printf("Deseja realizar qual operação entre os dois? (+ - * /) ");
			scanf("%c",&opc);
			
			switch (opc)
			{
				case '+':
					r = n[1]+n[2];
				break;
				case '-':
					r = n[1]-n[2];
				break;
				case '*':
					r = n[1]*n[2];
				break;
				case '/':
					r = n[1]/n[2];
				break;
				default:
					printf("Operação inválida.");
			}
			printf ("O resultado é: %.2f.\n",r);
		break;
		
		case 2:	
				printf("2)Verificação de palíndromo.\n");
				printf("Digite a palavra para checar se é um palíndromo: ");
				gets(pali);
				tam = strlen(pali);
				
				for(c=0;c<tam;c++)
				{
					pali[c] = tolower(pali[c]);
					pali2[c] = pali[c];
				}
				strrev(pali2);
				
				if (strcmp(pali,pali2) == 0)
					printf("A string %s é um palíndromo.\n",pali);
				else printf("A string %s não é um palíndromo.\n",pali);
		break;
		
		case 3:
			printf("3) Mistura de palavras.\n");
			do{
				printf("Digite a primeira palavra: ");
				gets(p1);
				printf("Digite a segunda palavra: ");
				gets(p2);
								
				tam=strlen(p1);
				tam2=strlen(p2);
				
				if (tam!=tam2)
					printf("Erro! Escreva duas palavras com mesmo número de letras.\n");
			}while (tam!=tam2);
			
			for(c=0;c<tam;c++)
				printf("%c%c",p1[c], p2[c]);
			printf("\n");
		break;
		
		case 4:
			printf("4) Número maior e número menor.\n");
			for (c=0;c<3;c++)
			{
				printf("Digite o %iº número: ",c+1);
				scanf("%f",&n[c]);
				if (c==0 or n[c] > maior)
				maior = n[c];
				if (c==0 or n[c] < menor)
				menor = n[c];
			}
			printf("O maior número é: %.2f.\n", maior);
			printf("O menor número é: %.2f.\n", menor);
		break;
		
		case 5:
		break;
		
		default:
			printf("Opção inválida.\n");
		break;
	}
				
	printf("\nFinalizando.\n");
	system("pause");
	return 0;
}
