/* Autor: Tales Clemente Matsuda
Prog: Pedir um número e identificar se o mesmo é par ou ímpar.
Data de criação: 19/05/2020 
Última alteração: 19/05/2020
OBS: Feito um loop para facilitar a checagem.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num;
	char quit;
	
	do{
		printf("Digite um número inteiro para saber se ele é par ou ímpar: ");
		scanf("%i",&num);
		
		if(num % 2 == 0)
		printf("O número é par.\n\n");
		else printf("O número é ímpar.\n\n");
		
		// Repetição para melhor checagem do programa.//
		printf("Deseja sair (S/N)? ");
		getchar();
		scanf("%c",&quit);
		printf("\n");
	} while(quit == 'n' || quit == 'N');
	
	printf("Finalizando.\n\n");
	
	system("pause");
	return 0;
}
	
