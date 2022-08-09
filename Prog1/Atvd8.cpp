#include <stdio.h>
#include<stdlib.h>

main()
{
	float salario, snovo, pt, aumento;
	
	printf("Digite o salario:\nR$");
	scanf("%f", &salario);
	
	if (salario<=280)	{
		snovo = salario*1.20;
		pt=20;
	}
	if (salario>280 and salario<=700)	{
		snovo = salario*1.15;
		pt=15;
	}
	if (salario>700 and salario<=1500)	{
		snovo = salario*1.10;
		pt=10;
	}
	if (salario>1500)	{
		snovo = salario*1.05;
		pt=05;
	}
	aumento = (snovo - salario);
	
	printf ("O salario antigo eh R$%.2f.\n", salario);
	printf ("O percentual do aumento eh %.2f%%.\n", pt);
	printf ("O aumento foi de R$%.2f.\n", aumento);
	printf ("O novo salario eh R$%.2f.\n", snovo);
	
	system ("pause");
	return 0;
}
