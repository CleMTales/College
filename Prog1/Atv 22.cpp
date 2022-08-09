#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	float qMa,qMo,preco,precoMo,precoMa;
	
	
	printf("Deseja comprar quantos KG de maca?\n");
	scanf("%f",&qMa);
	printf("Deseja comprar quantos KG de morango?\n");
	scanf("%f",&qMo);
	
	
	if(qMa<=5)
	{
		precoMa = (1.8*qMa);
	}
	if(qMa>5)
	{
		precoMa = (1.5*qMa);
	}
	
	if(qMo<=5)
	{
		precoMo= (2.5*qMo);
	}
	if(qMo>5)
	{
		precoMo = (2.2*qMo);
	}
	
	preco = (precoMo+precoMa);

	if (((qMa+qMo)> 8) or (preco > 25))
	preco = (preco * 0.9);
	
	printf("O valor total eh de R$%.2f.", preco);
	
}
