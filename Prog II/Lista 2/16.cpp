/* 
Progama: Obter matr�cula e sal�rio dos funcion�rios de uma empresa.
Ao final exibir o total dos sal�rios em reais e em d�lares.
Autor: Tales Clemente Matsuda
Data de cria��o: 14/09/2020
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
		printf("Indique a matricula do %i� funcion�rio: ",c+1);
		scanf("%i",&matricula[c]);
		getchar();
		if(matricula[c]==0)
		break;
		printf("Agora indique o sal�rio desse funcion�rio: R$");
		scanf("%f",&salarioReal[c]);
		getchar();
		realTot=realTot+salarioReal[c];
		c++;
	}while (matricula[c-1]!=0);
	
	printf("O total do sal�rio dos funcion�rios equivale �: R$%.2f.\n",realTot);
	printf("Em dolar isso equivale �: U$%.2f.\n",convDolar(realTot));

	system("pause");
}
