/* Autor: Tales Clemente Matsuda
Prog: Calcular salário com base no ganho por horas e horas trabalhadas e calcular
descontos.
Data de criação:19/05/2020 
Última alteração:19/05/2020
OBS: Feito um loop para facilitar a checagem.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int horas;
	float gpH,INSS,sind,idR,sLiq,sBruto;
	char quit;
	
	do{
		printf("Digite quantas horas foram trabalhadas: ");
		scanf("%i",&horas);
		printf("Digite o ganho por hora em R$: ");
		scanf("%f",&gpH);
		
		sBruto = horas*gpH;
		idR = sBruto * 0.11;
		INSS = sBruto * 0.08;
		sind = sBruto * 0.05;
		sLiq = sBruto - (idR + INSS + sind);
		
		printf("\n+ Salário Bruto:R$%.2f\n",sBruto);
		printf("- IdR (11%%):R$%.2f\n",idR);
		printf("- INSS (8%%):R$%.2f\n",INSS);
		printf("- Sindicato (5%%):R$%.2f\n",sind);
		printf("= Salário Líquido:R$%.2f\n",sLiq);
		
		// Repetição para melhor checagem do programa.//
		printf("\nDeseja sair (S/N)? ");
		getchar();
		scanf("%c",&quit);
		printf("\n");
	} while(quit == 'n' || quit == 'N');
	
	printf("Finalizando.\n\n");
	
	system("Pause");
	return 0;
}
