#include<stdio.h>
#include<stdlib.h>

main()

{
	float n1,n2;
	
	printf("Digite um numero para saber se ele eh positivo ou negativo: \n");
	scanf("%f", &n1);
	
	if (n1>0) 
		printf ("O numero %.1f eh positivo.\n",n1);
	else if (n1<0) 
		printf ("O numero %.1f eh negativo.\n",n1);
	else if (n1==0) 
		printf ("O numero %.1f eh nulo.\n",n1);

	system ("pause");
	return 0;
}
