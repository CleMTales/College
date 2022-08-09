/* 
Progama: Determinar a autonomia (KM/Litro de gasolina) de um automóvel em uma viagem.
Autor: Tales Clemente Matsuda
Data de criação: 29/08/2020
Data de modificação: 08/09/2020*/

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
	
	printf("A autonomia do automóvel nessa viagem foi de: %.2f.\n",
			calc_auto(km, litro));
	
	system("pause");
}
