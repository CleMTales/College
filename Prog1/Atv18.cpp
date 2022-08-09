#include <stdio.h>
#include<stdlib.h>

main()
{
	int n;
	printf("Digite um numero para saber se este eh par ou impar:\n");
	scanf("%i",&n);
	
	if (n == 0);
	printf("Ta me tirando fdp?");
	else if (n % 2 == 0)
		printf("O numero eh par.");
	else 
		printf("O numero eh impar.");
		
	system("pause");
	return 0;
}
