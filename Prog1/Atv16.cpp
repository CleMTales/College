#include <stdio.h>
#include<stdlib.h>
main()

{
	float n1,n2,n3,media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);	
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	
	
	media = (n1+n2+n3)/3;
	
	if (media>=7 and media<10)
		printf("Aluno aprovado com media %.2f!", media);
	if (media<7)
		printf("Aluno reprovado com media %.2f!", media);
	if (media==10)
		printf("Aluno aprovado com distincao e media %.2f!", media);
		
	
	system("pause");
	return 0;
}
