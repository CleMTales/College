/* 
Programa para simular um caixa eletrônico, distribuindo as notas da forma 
mais eficiente possível dentro de uma quantia de 10 a 600 reais.
Autor: Tales Clemente Matsuda
Criado em: 13/06/2020
Modificado em: 06/04/2021
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int num;
	
	printf("Informe o valor do saque (entre R$10 e R$600): ");
	scanf("%i",&num);
	
	int cont=0, um=0, cinco=0, dez=0, cinq=0, cem=0;
	
	//Mensagem de erro para número inserido fora do intervalo válido
	if (num < 10 or num > 600)	
		printf("Valor invalido.");
	
	else {		
		//Calculando as partes presentes no número indicado
		cem = num/100;
		num = num - (cem*100);
	
		cinq = num/50;
		num = num - (cinq*50);
		
		dez = num/10;
		num = num - (dez*10);
		
		cinco = num/5;
		num = num - (cinco*5);
				
		um = num;
		
		
		printf("O saque tera");
			
		switch (cem)
		{
			case 0:
			break;
			case 1:
				printf(" 1 nota de cem");
			break;
			default:
				printf(" %i notas de cem",cem);
		}
			
		if (((cinq and cem) != 0) and um == 0 and cinco == 0 and dez == 0)
			printf(" e");
		if ((cinq != 0) and (cem!=0) and ((dez or cinco or um) != 0))
			printf(",");
			
		switch (cinq)
		{
			case 0:
			break;
			case 1:
				printf(" 1 nota de cinquenta");
			break;
			default:
				printf(" %i notas de cinquenta",cinq);
		}
			
		if (dez != 0 and um == 0 and cinco == 0 and ((cem or cinq) != 0))
			printf(" e");
		if ((dez != 0) and ((cem or cinq)!=0) and ((cinco or um) != 0))
			printf(",");
				
						
		switch (dez)
		{
			case 0:
			break;
			case 1:
				printf(" 1 nota de dez");
			break;
			default:
				printf(" %i notas de dez",dez);
		}
		
		if ((cinco != 0) and (um == 0) and ((cem or cinq or dez) != 0))
			printf(" e");
		if (((cem or cinq or dez)!=0) and ((cinco and um) != 0))
			printf(",");
			
					
		switch (cinco)
		{
			case 0:
			break;
			case 1:
				printf(" 1 nota de cinco");
			break;
			default:
				printf(" %i notas de cinco",cinco);
		}
		
		if ((um != 0) and ((cem or cinq or dez or cinco) != 0))
			printf(" e");
			
			
		switch (um)
		{
			case 0:
		
			break;
			case 1:
				printf(" 1 nota de um");
			break;
			default:
				printf(" %i notas de um",um);
		}
			
		printf(".\n");
	}
}

