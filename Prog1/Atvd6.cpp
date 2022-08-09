#include <stdio.h>
#include<stdlib.h>

main()

{
	float v1,v2,v3;
	
	printf("Digite o valor do primeiro produto: R$ ");
	scanf("%f", &v1);
	printf("Digite o valor do segundo produto: R$ ");
	scanf("%f", &v2);
	printf("Digite o valor do terceiro produto: R$ ");
	scanf("%f", &v3);
	
	if (v1<v2 and v1<v3)
		printf ("O primeiro produto, de valor R$%.2f, eh o mais barato. Recomenda-se sua compra.",v1);
	if (v2<v1 and v2<v3)
		printf ("O segundo produto, de valor R$%.2f, eh o mais barato. Recomenda-se sua compra.",v2);
	if (v3<v1 and v3<v2)
		printf ("O terceiro produto, de valor R$%.2f, eh o mais barato. Recomenda-se sua compra.",v3);
				
	system ("pause");
	return 0;
}
