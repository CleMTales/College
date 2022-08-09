#include<stdio.h>
#include<stdlib.h>

main()
{
	int Sem;
	
	printf("Digite um numero inteiro de 1 a 7:\n");
	scanf("%i",&Sem);
	
	switch (Sem)
	{
		case 1: 
			printf("Domingo\n");
		break;
		
		case 2:
			printf("Segunda\n");
		break;
		
		case 3:
			printf("Terça\n");
		break;
		
		case 4: 
			printf("Quarta\n");
		break;
		
		case 5:
			printf("Quinta\n");
		break;
		
		case 6:
			printf("Sexta\n");
		break;
			
		case 7:
			printf("Sabado\n");
		break;
		
		default:
			printf("Erro: valor inválido!\n");
						
	}
	
	system("pause");
	
	return 0;
	
}
