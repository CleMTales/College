#include <stdio.h>
#include<stdlib.h>

main()

{
	float n1,n2,n3;
	
	printf("Programa para arrumar tres numeros em ordem decrescente.\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	
	if (n1>n2 and n1>n3)	{
			if (n2>n3)
				printf ("%.1f, %.1f, %.1f.\n", n1,n2,n3);
			else
				printf("%.1f, %.1f, %.1f.\n", n1,n3,n2);
	}
		
	if (n2>n1 and n2>n3)	{
			if (n1>n3)
				printf ("%.1f, %.1f, %.1f.\n", n2,n1,n3);
			else
				printf("%.1f, %.1f, %.1f.\n", n2,n3,n1);
	}	
	
	if (n3>n1 and n3>n2)	{
			if (n1>n2)
				printf ("%.1f, %.1f, %.1f.\n", n3,n1,n2);
			else
				printf("%.1f, %.1f, %.1f.\n", n3,n2,n1);
	}		
	
	system ("pause");
	return 0;
}
