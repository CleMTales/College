#include<stdio.h>
#include<stdlib.h>


main()
{
	int ano;
	printf("Digite o ano para saber se ele eh bissexto:\n");
	scanf("%i",&ano);

	if ( ( ano % 4 == 0 and ano % 100 != 0 ) or ano % 400 == 0 )
    	printf("O ano eh bissexto.");
    else printf("O ano nao eh bissexto.");
    
	system("pause");
	return 0;
}
