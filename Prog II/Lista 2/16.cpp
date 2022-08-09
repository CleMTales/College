/* 
Progama: Obter matrícula e salário dos funcionários de uma empresa.
Ao final exibir o total dos salários em reais e em dólares.
Autor: Tales Clemente Matsuda
Data de criação: 14/09/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float convDolar(float real)
{
	return real*3.54;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	float salarioReal[200],salarioDolar[200],realTot;
	int matricula[200];
	int c=0;
	
	do{
		printf("Indique a matricula do %iº funcionário: ",c+1);
		scanf("%i",&matricula[c]);
		getchar();
		if(matricula[c]==0)
		break;
		printf("Agora indique o salário desse funcionário: R$");
		scanf("%f",&salarioReal[c]);
		getchar();
		realTot=realTot+salarioReal[c];
		c++;
	}while (matricula[c-1]!=0);
	
	printf("O total do salário dos funcionários equivale à: R$%.2f.\n",realTot);
	printf("Em dolar isso equivale à: U$%.2f.\n",convDolar(realTot));

	system("pause");
}
