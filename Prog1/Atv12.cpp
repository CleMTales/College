#include<stdio.h>
#include<stdlib.h>

main()
{
	float l1,l2,l3;
	
	printf("Programa para identificar se 3 lados formam um triangulo.\n");
	printf("Digite o tamanho do primeiro lado:\n");
	scanf("%f",&l1);
	printf("Digite o tamanho do segundo lado:\n");
	scanf("%f",&l2);
	printf("Digite o tamanho do terceiro lado:\n");
	scanf("%f",&l3);
	
	if (l1==l2 and l1==l3)
	{
		printf("Os lados formam um triangulo equilatero.\n");
	}
	else if ((l1+l2)>l3 and (l1+l3)>l2 and (l2+l3)>l1)
	{
		if ((l1==l2) or (l1==l3) or (l2==l3))
			printf("Os lados formam um triangulo isoceles.\n");
		else printf("Os lados formam um triangulo escaleno.\n");
	}
	
	else printf("Os lados nao formam um triangulo.\n");
	system ("pause");
	return 0;
}
