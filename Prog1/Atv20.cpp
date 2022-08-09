#include <stdio.h>
#include <stdlib.h>

main()
{
	int suspeito=0;
	char check;


	printf("Recentemente ocorreu o assassinato de Fulano de Tal.\n");
	printf("Por favor responda as seguintes perguntas para ajudar a policia:\n");
	
	printf("Telefonou para a vítima?(S/N)\n");
	check = getchar();
	switch (check)
	{
		case 'S':
		case 's':
			printf("Proxima pergunta.\n");
			suspeito++;
			check=getchar();
		break;
		case 'n':
		case 'N':
			printf("Proxima pergunta.\n");
			check=getchar();
			break;
		default:
			printf("Resposta invalida.\n");
	}
	
	printf("Esteve no local do crime?(S/N)\n");
	check=getchar();
	
	switch (check)
	{
		case 'S':
		case 's':
			printf("Proxima pergunta.\n");
			suspeito++;
			check=getchar();
		break;
		case 'n':
		case 'N':
			printf("Proxima pergunta.\n");
			check=getchar();
			break;
		default:
			printf("Resposta invalida.\n");
	}
		
	printf("Mora perto da vítima?(S/N)\n");
	check=getchar();
	
	switch (check)
	{
		case 'S':
		case 's':
			printf("Proxima pergunta.\n");
			suspeito++;
			check=getchar();
		break;
		case 'n':
		case 'N':
			printf("Proxima pergunta.\n");
			check=getchar();
			break;
		default:
			printf("Resposta invalida.\n");
	}
	
	printf("Devia para a vítima?(S/N)\n");
	check=getchar();
	
	switch (check)
	{
		case 'S':
		case 's':
			printf("Proxima pergunta.\n");
			suspeito++;
			check=getchar();
		break;
		case 'n':
		case 'N':
			printf("Proxima pergunta.\n");
			check=getchar();
			break;
		default:
			printf("Resposta invalida.\n");
	}
	
	printf("Jah trabalhou com a vítima?(S/N)\n");
	check=getchar();
	
	switch (check)
	{
		case 'S':
		case 's':
			suspeito++;
			check=getchar();
		break;
		case 'n':
		case 'N':
			check=getchar();
			break;
		default:
		printf("Resposta invalida.\n");
	}
	

	if (suspeito < 2)
		printf("Pessoa inocente.\n");
	if (suspeito == 2)
		printf("Pessoa suspeita.\n");
	if (suspeito >= 3 and suspeito <= 4)
		printf("Pessoa cumplice.\n");
	if (suspeito == 5)
		printf("Assassino encontrado.\n");
	
	system("pause");
	return 0;
	
}


	
	
