/* 
Progama: Determinar a autonomia (KM/Litro de gasolina) de um autom�vel em uma viagem.
Autor: Tales Clemente Matsuda
Data de cria��o: 29/08/2020
Data de modifica��o: 08/09/2020*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calc_auto(float km, float lit)
{
	return (km/lit);
}
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float km, litro, aut;	
	
	printf("Informe quantos KM foram transcorridos: ");
	scanf("%f", &km);
	
	printf("Informe quantos litros de gasolina foram gastos: ");
	scanf("%f", &litro);
	
	printf("A autonomia do autom�vel nessa viagem foi de: %.2f.\n",
			calc_auto(km, litro));
	
	system("pause");
}
