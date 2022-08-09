/* 
Progama: Receber código,tipo (submarino, terrestre ou híbrido) e valor de
130 veículos e ao final exibir o mais caro e a quantidade de veículos terrestres.
Autor: Tales Clemente Matsuda
Data de criação: 14/09/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void checarCaroTerr(float val,char tipo, float* caro, int* t,int *cod, int *c)
{

		if (val>*caro){
			*caro = val;
			*c = *cod;
		}
		if (tipo == 't' or tipo == 'T')
			*t=*t+1;
}


main()
{
	setlocale(LC_ALL,"portuguese");
	
	char tipo[130];
	float valor[130],caro=0;
	int cod[130];
	
	int i=0,t=0,c=0;
	
	for(i=0;i<130;i++){
		printf("Informe o código do %iº veículo: ",i+1);
		scanf("%i",&cod[i]);
		getchar();
		printf("Informe o tipo desse veículo(S, T ou H): ");
		scanf("%c",&tipo[i]);
		printf("Agora informe o preço desse veículo: R$ ");
		scanf("%f",&valor[i]);
		getchar();
		checarCaroTerr(valor[i],tipo[i],&caro,&t,&cod[i],&c);
	} 
	
	printf("O veículo mais caro tem código %i e custa R$%.2f.\n",c,caro);
	printf("Há um total de %i veículos terrestres no registro.\n,",t);
	
	
	system("pause");
}
