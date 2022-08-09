#include <stdio.h>
#include<stdlib.h>

main()
{
	int n1,n2,r,op;
	
	
	printf("Digite o primeiro numero:\n");
	scanf("%i",&n1);
	printf("Digite o segundo numero:\n");
	scanf("%i",&n2);
	
	printf("Eh desejada realizar que operacao entre os numeros?\n");
	printf("1)Adicao.\n2)Subtracao.\n3)Multiplicacao.\n4)Divisao.\n");
	scanf("%i",&op);
	
		
	switch (op)
	{
		case 1:
			r=(n1+n2);
		break;
		case 2:
			r=(n1-n2);
		break;
		case 3:
			r=(n1*n2);
		break;
		case 4:
			r=(n1/n2);
		break;
		default:
			printf("Opcao nao existente.\n");
	}
	

	printf("O resultado da operacao eh: %i.\n",r);
	if (r % 2 == 0)
		printf("O numero eh par.\n");
	else 
		printf("O numero eh impar.\n");
	
	if (r>0)
		printf("O numero eh positivo.\n");
	else
		printf("O numero eh negativo.\n");
		
	system("pause");
	return 0;
		
}
