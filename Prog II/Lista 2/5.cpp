/* 
Progama: Calcular a �rea de um terreno tomando em conta comprimento e largura
Autor: Tales Clemente Matsuda
Data de cria��o: 29/08/2020
Data de modifica��o: 08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calc_area(float comp, float larg)
{
	return (comp*larg);
}
main()
{
	setlocale(LC_ALL,"portuguese");
	float comp,larg,area;
	
	printf("Para calcular a �rea de um terreno indique seu comprimento em metros: ");
	scanf("%f",&comp);
	printf("Agora indique a largura em metros: ");
	scanf("%f",&larg);

	printf("A �rea do terreno �: %.2f m�.\n",calc_area(comp, larg));
	system("pause");
}
