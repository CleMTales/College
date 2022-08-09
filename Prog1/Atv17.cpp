#include<stdio.h>
#include<stdlib.h>

main()
{
	int num,fim=0,numcom;
	printf("Informe o valor do saque (entre R$10 e R$600):\n");
	scanf("%i",&numcom);
	num = numcom;
	for (fim=numcom;fim<numcom+15;fim++)
	{
		num = fim;
		int cont=0,um=0,cinco=0,dez=0,cinq=0,cem=0,c100=1,c50=1,c10=1,c5=1,c1=1;
		printf("%i",num);
		
		if (num < 10 or num > 600)
		{
			printf("Valor invalido.");
			break;
		}
		
		while (cont < (num - 99))
		{
			cont = cont + 100;
			cem++;
		}
		
		num = num - (cem*100);
		cont = 0;
		
		while (cont < (num - 49))
		{
			cont = cont + 50;
			cinq++;
		}
		
		num = num - (cinq*50);
		cont = 0;
		
		while (cont < (num - 9))
		{
			cont = cont + 10;
			dez++;
		}
		
		num = num - (dez*10);
		cont = 0;
		
		while (cont < (num - 4))
		{
			cont = cont + 5;
			cinco++;
		}
		
		num = num - (cinco*5);
		cont = 0;
		
		while (cont != num)
		{
			cont++;
			um++;
		}
		
		num = num - um;
		cont = 0;
		
		if (cem == 0)
			c100=0;
		if (cinq == 0)
			c50=0;
		if (dez == 0)
			c10=0;
		if (cinco == 0)
			c5=0;
		if (um == 0)
			c1=0;				
			
			
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
		
		if (((c50 and c100) != 0) and c1 == 0 and c5 == 0 and c10 == 0)
			printf(" e");
		if ((c50 != 0) and (c100!=0) and ((c10 or c5 or c1) != 0))
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
		
		if (c10 != 0 and c1 == 0 and c5 == 0 and ((c100 or c50) != 0))
			printf(" e");
		if ((c10 != 0) and ((c100 or c50)!=0) and ((c5 or c1) != 0))
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
		
		if ((c5 != 0) and (c1 == 0) and ((c100 or c50 or c10) != 0))
			printf(" e");
		if (((c100 or c50 or c10)!=0) and ((c5 and c1) != 0))
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
		
		if ((c1 != 0) and ((c100 or c50 or c10 or c5) != 0))
			printf(" e");
			
			
		switch (um)
		{
			case 0:
				printf(".\n");
			break;
			case 1:
				printf(" 1 nota de um.\n");
			break;
			default:
				printf(" %i notas de um.\n",um);
		}
		
		
	}
}
