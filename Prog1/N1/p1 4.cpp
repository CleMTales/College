/* Autor: Tales Clemente Matsuda
Prog: Pedir um n�mero e identificar se o mesmo � par ou �mpar.
Data de cria��o: 19/05/2020 
�ltima altera��o: 19/05/2020
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
		printf("Digite um n�mero inteiro para saber se ele � par ou �mpar: ");
		scanf("%i",&num);
		
		if(num % 2 == 0)
		printf("O n�mero � par.\n\n");
		else printf("O n�mero � �mpar.\n\n");
		
		// Repeti��o para melhor checagem do programa.//
		printf("Deseja sair (S/N)? ");
		getchar();
		scanf("%c",&quit);
		printf("\n");
	} while(quit == 'n' || quit == 'N');
	
	printf("Finalizando.\n\n");
	
	system("pause");
	return 0;
}
	
