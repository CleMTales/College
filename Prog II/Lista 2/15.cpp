/* 
Progama: Receber o peso, em KG, de 12 produtos em uma matriz 3x4. Ao final, 
exibir duas matrizes com o peso em KG e em libras.
Autor: Tales Clemente Matsuda
Data de criação: 14/09/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float convLib(float peso)
{
	return peso/(0.454);
}


main()
{
	setlocale(LC_ALL,"portuguese");
	
	float peso[3][4],pesoLib[3][4];
	
	int i=0,j=0,c=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Informe o peso, em KG, do %iº produto: ",c+1);
			scanf("%f",&peso[i][j]);
			c++;
		}
	} 
	printf("A matriz com o peso em KG é: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			pesoLib[i][j]=convLib(peso[i][j]);
			printf("%.2f kg   \t",peso[i][j]);
		}
		printf("\n");
	} 
	printf("A matriz com o peso em libras é: \n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%.2f lb   \t",pesoLib[i][j]);
		}
		printf("\n");
	} 
	

	system("pause");
}
