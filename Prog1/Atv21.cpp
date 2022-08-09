#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int l;
	char comb;
	float preco;
	
	
	printf("Deseja abastecer com alcool ou gasolina (A/G)?\n");
	comb = getchar();
	printf("Digite quantos litros deseja comprar:\n");
	scanf("%i",&l);
	
	
	switch(comb)
	{
		case 'A':
		case 'a':
			if(l<=20)	
				preco = ((1.9*l)*(pow(0.97,l)));
			if (l>20)
				preco = ((1.9*l)*(pow(0.95,l)));
		break;
		case 'g':
		case 'G':
			if (l<=20)
				preco = ((2.5*l)*(pow(0.96,l)));
			if(l>20)
				preco = ((2.5*l)*(pow(0.94,l)));
		break;
		default:
			printf("Erro.\n");
	}
	
	printf("O valor a ser pago eh R$%.2f. ", preco);
	
	system("pause");
	return 0;
}
