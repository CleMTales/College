/* 
Progama: Receber c�digo,tipo (submarino, terrestre ou h�brido) e valor de
130 ve�culos e ao final exibir o mais caro e a quantidade de ve�culos terrestres.
Autor: Tales Clemente Matsuda
Data de cria��o: 14/09/2020
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
		printf("Informe o c�digo do %i� ve�culo: ",i+1);
		scanf("%i",&cod[i]);
		getchar();
		printf("Informe o tipo desse ve�culo(S, T ou H): ");
		scanf("%c",&tipo[i]);
		printf("Agora informe o pre�o desse ve�culo: R$ ");
		scanf("%f",&valor[i]);
		getchar();
		checarCaroTerr(valor[i],tipo[i],&caro,&t,&cod[i],&c);
	} 
	
	printf("O ve�culo mais caro tem c�digo %i e custa R$%.2f.\n",c,caro);
	printf("H� um total de %i ve�culos terrestres no registro.\n,",t);
	
	
	system("pause");
}
