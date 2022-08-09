#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float kg,preco;
	int carne;
	char cartao;
	
	
	
	printf("Deseja comprar qual tipo de carne?\n");
	printf("1)File duplo\n2)Alcatra\n3)Picanha\n");
	scanf("%i",&carne);
	printf("Deseja comprar quantos kgs de carne?\n");
	scanf("%f",&kg);
	cartao = getchar();
	printf("Deseja fazer a compra no cartao Tabajara?(S/N)\n");
	cartao = getchar();
	
	switch (carne)
	{
		case 1:
			
			if (kg<=5)
				preco = 4.9*kg;
			if(kg>5)
				preco = 5.8*kg;
		
		printf("Foram selecionados %.2fkg de File Duplo.\n",kg);
			switch (cartao)
			{
			case 's':
			case 'S':
				preco = preco*0.95;
				printf("A compra foi feita no cartao tabajara no valor de R$%.2f.\n",preco);
			break;
			case 'n':
			case 'N':
				printf("A compra foi feita no dinheiro no valor de R$%.2f.\n",preco);
			break;
			default:
				break;
			}
		break;
		case 2:
			if (kg<=5)
				preco = 5.9*kg;
			if(kg>5)
				preco = 6.8*kg;
				
			printf("Foram selecionados %.2fkg de Alcatra.\n",kg);
				switch (cartao)
			{
			case 's':
			case 'S':
				preco = preco*0.95;
				printf("A compra foi feita no cartao tabajara no valor de R$%.2f.\n",preco);
			break;
			case 'n':
			case 'N':
				printf("A compra foi feita no dinheiro no valor de R$%.2f.\n",preco);
			break;
			default:
			break;
			}
		break;
		case 3:
			if (kg<=5)
				preco = 6.9*kg;
			if(kg>5)
				preco = 7.8*kg;
			
			printf("Foram selecionados %.2fkg de Picanha.\n",kg);
			switch (cartao)
			{
			case 's':
			case 'S':
				preco = preco*0.95;
				printf("A compra foi feita no cartao tabajara no valor de R$%.2f.",preco);
			break;
			case 'n':
			case 'N':
				printf("A compra foi feita no dinheiro no valor de R$%.2f.",preco);
			break;
			default:
			break;
			}
		break;
		default:
			printf("Opção invalida.");
		
			
	}
	
	system("pause");
	return 0;
}
