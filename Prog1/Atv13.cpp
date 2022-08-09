#include<stdio.h>
#include<stdlib.h>
#include <math.h>

main()
{
	float a,b,c,r1,r2;
	printf("Programa para calcular as raizes de uma equacao de segundo grau.\n");
	printf("Tendo a equação o seguinte formato:ax^2+bx+c.\n");
	printf("Digite o valor de a:\n");
	
	scanf("%f",&a);
		if (a==0)
		{
			printf("A equacao nao eh de segundo grau.\n");
			
		}
	printf("Digite o valor de b:\n");
	scanf("%f",&b);
	printf("Digite o valor de c:\n");
	scanf("%f",&c);
	
	
	
	if ((pow(b,2)-4*a*c)<0)
	{
		printf("A equacao nao possui raizes reais.\n");
		
	}
	if ((pow(b,2)-4*a*c)==0)
	{
		r1=((-b+sqrt(pow(b,2)-4*a*c))/2*a);
		printf("A equacao possui uma raiz real: %f.\n",r1);
		
	} 
	if ((pow(b,2)-4*a*c)>0)
	{
		r1=((-b+sqrt(pow(b,2)-4*a*c))/2*a);
		r2=((-b-sqrt(pow(b,2)-4*a*c))/2*a);
		printf("A equacao possui duas raizes reais: %f e %f.\n",r1,r2);
		
	} 
	
	system("pause");
	return 0;
}
