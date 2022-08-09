#include<stdio.h>
#include<stdlib.h>

main()
{
	int hora,pIR;
	float vHora,sBruto,sLiquido,dIR,dINSS,FGTS,tD;
	
	printf("Digite o numero de horas trabalhadas no mes:");
	scanf("%d",&hora);
	printf("Digite o valor ganho por hora:");
	scanf("%f",&vHora);
	
	sBruto = (hora*vHora);
	dINSS = sBruto*0.1;
	FGTS = sBruto*0.11;
	
	if (sBruto<=900){
		pIR = 0;
		dIR = 0;
	}
	if (sBruto>900 and sBruto<=1500){
		pIR = 5;
		dIR = sBruto*0.05;
	}	
	if (sBruto>1500 and sBruto<=2500){
		pIR = 10;
		dIR = sBruto*0.1;
	}
	if (sBruto>2500){
			pIR = 20;
		dIR = sBruto*0.2;
	}
	
	tD = (dIR + dINSS);
	sLiquido = (sBruto - tD);
		
	printf("Salario Bruto (%.2f*%i)		:R$%.2f\n",vHora,hora,sBruto);
	printf("(-) IR(%i%%)				:R$%.2f\n", pIR,dIR);
	printf("(-) INSS(10%%)				:R$%.2f\n",dINSS);
	printf("FGTS(11%%)				:R$%.2f\n",FGTS);
	printf("Total de descontos			:R$%.2f\n",tD);
	printf("Salario liquido				:R$%.2f\n",sLiquido);
	
	system ("pause");
	return 0;
}
