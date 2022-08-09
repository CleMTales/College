/* Autor: Tales Clemente Matsuda
Prog: Ler 3 notas de 2 alunos e calcular a média de cada um.
Data de criação: 19/05/2020 
Última alteração: 19/05/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	
	float notas[2][3],m[2];
	
	printf("Digite a primeira nota do primeiro aluno: ");
	scanf("%f", &notas[1][1]);
	printf("Digite a segunda nota do primeiro aluno: ");
	scanf("%f", &notas[1][2]);
	printf("Digite a terceira nota do primeiro aluno: ");
	scanf("%f", &notas[1][3]);
	
	printf("Digite a primeira nota do segundo aluno: ");
	scanf("%f", &notas[2][1]);
	printf("Digite a segunda nota do segundo aluno: ");
	scanf("%f", &notas[2][2]);
	printf("Digite a terceira nota do segundo aluno: ");
	scanf("%f", &notas[2][3]);
	
	m[1]= ((notas[1][1]+notas[1][2]+notas[1][3])/3);
	m[2]= ((notas[2][1]+notas[2][2]+notas[2][3])/3);
	
	printf("\n");
	printf("A média do primeiro aluno é: %.2f.\n",m[1]);
	printf("A média do segundo aluno é: %.2f.\n",m[2]);
	
	printf("Finalizando.\n");
	system("pause");
	return 0;
	
}

