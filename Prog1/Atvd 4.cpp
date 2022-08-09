#include <stdio.h>
#include<stdlib.h>

main()

{
	float n1,n2,n3;
	
	printf("Programa para mostrar o maior numero dentre tres.\n");
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	printf("Digite outro numero: ");
	scanf("%f", &n3);
	
	if (n1>n2 and n1>n3)
		printf ("%.1f eh o maior numero entre eles.\n",n1);
	if (n2>n1 and n2>n3)
		printf ("%.1f eh o maior numero entre eles.\n",n2);
	if (n3>n1 and n3>n2)
		printf ("%.1f eh o maior numero entre eles.\n",n3);
				
	system ("pause");
	return 0;
}
