/* Autor: Tales Clemente Matsuda
Prog: Ler dois n�meros: base e expoente, e fazer a potencia��o.
Data de cria��o: 19/05/2020 
�ltima altera��o: 19/05/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	
	char quit;
	int x;
	float n[2],r;
	
	do{
	printf("Digite um n�mero como base: ");
	scanf("%f",&n[1]);
	printf("Digite o n�mero expoente da base: ");
	scanf("%f",&n[2]);
	
	r=n[1];
	if (n[2]==0)
	r = 1;
	else for (x=0;x<n[2]-1;x++)
	r = 1*r*n[1];
	
	printf("A potencia de base %.2f e expoente %.2f �: %.2f.\n", n[1],n[2],r);
	
	// Repeti��o para melhor checagem do programa.//
		printf("Deseja sair (S/N)? ");
		getchar();
		scanf("%c",&quit);
		printf("\n");
	} while(quit == 'n' || quit == 'N');
	
	printf("\nFinalizando.\n\n");
	
	system("pause");
	return 0;
}
