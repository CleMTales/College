#include<stdio.h>
#include<stdlib.h>

main()

{
	float n1,n2;
	
	printf("Programa que diz o maior dentre dois numeros.\n");
	printf("Digite um numero: \n");
	scanf("%f", &n1);
	printf("Digite outro numero: \n");
	scanf("%f", &n2);
	
	if (n1>n2) 
		printf ("O numero %.0f eh o maior numero.\n", n1);
	else 
		printf ("O numero %.0f eh o maior numero.\n", n2);

	system ("pause");
	return 0;
}
