/* Autor: Tales Clemente Matsuda
Prog: Pedir um n�mero e identificar se o mesmo est� entre 20 e 80.
Data de cria��o: 20/05/2020 
�ltima altera��o: 20/05/2020
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
		printf("Digite um n�mero inteiro: ");
		scanf("%i",&num);
		
		if(num >= 20 && num <= 80)
		printf("Parab�ns!\n\n");
		else printf("Deu ruim.\n\n");
		
		// Repeti��o para melhor checagem do programa.//
		printf("Deseja sair (S/N)? ");
		getchar();
		scanf("%c",&quit);
		printf("\n");
	} while(quit == 'n' || quit == 'N');
	
	printf("Finalizando.\n\n");
	
	return 0;
}
