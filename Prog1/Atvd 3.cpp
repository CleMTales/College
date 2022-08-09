#include <stdio.h>
#include<stdlib.h>

main()

{
	float n1,n2,media;
	
	printf("Programa para calcular a media com base em duas notas.\n");
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	
	media = (n1+n2)/2;
	
	if (media>=7 and media<10)
		printf("Aluno aprovado com media %.2f!\n", media);
	if (media<7)
		printf("Aluno reprovado com media %.2f!\n", media);
	if (media==10)
		printf("Aluno aprovado com distincao e media %.2f!\n", media);
		
	system ("pause");
	return 0;
}
