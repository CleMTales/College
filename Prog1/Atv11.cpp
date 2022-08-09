#include<stdio.h>
#include<stdlib.h>

main()
{
	char conc;
	float n1, n2, med;
	
	printf("Programa para saber a media e o conceito equivalente por meio de duas notas.\n");
	printf("Digite o valor da primeira nota:\n");
	scanf("%f",&n1);
	printf("Digite o valor da segunda nota:\n");
	scanf("%f",&n2);
	
	
	med = ((n1+n2)/2);
	
	if (med>0 and med<=4)
		conc = 'E';
	if (med>4 and med <=6)
		conc = 'D';
	if (med>6 and med<=7.5)
		conc = 'C';
	if (med>7.5 and med <=9)
		conc = 'B';
	if (med>9 and med<=10)
		conc = 'A';
		
	switch (conc)
	{
		case 'A': 				
		case 'B':			
		case 'C':
			printf("Parabéns! Aprovado com notas %.2f e %.2f, media %.2f dentro do conceito %c\n",n1,n2,med,conc);
		break;
		
		case 'D': 
		case 'E':
			printf("Reprovado com notas %.2f e %.2f, media %.2f dentro do conceito %c\n",n1,n2,med,conc);
		break;
		
		
		default:
			printf("Erro: notas invalidas!\n");
						
	}
	
	system("pause");
	
	return 0;
	
}
