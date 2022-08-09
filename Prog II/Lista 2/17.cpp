/* 
Progama: Obter nome, idade e sexo de 30 participantes da meia maratona em Macaé.
Ao final exibir o total de homens, mulheres e o nome e idade da pessoa mais 
velha.
Autor: Tales Clemente Matsuda
Data de criação: 14/09/2020
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void contMF(char sexo, int* h, int* m)
{
	if (sexo == 'm' or sexo == 'M')
		*h=*h+1;
	if (sexo == 'f' or sexo == 'F')
		*m=*m+1;	
}

void checkIdade(int idade, int* maior, int* maiorI, int i){
	if(idade>*maior){
		*maiorI= i;
		*maior = idade;
	}
	
}
main(){
	setlocale(LC_ALL,"portuguese");
	
	struct{
		char nome[20],sexo;
		int idade;
	} maratona[30];
	
	int i=0,h=0,m=0,maior=0,maiorI=0;
	
	for(i=0;i<30;i++){
		printf("Digite o nome do %iº participante da maratona: ",i+1);
		gets(maratona[i].nome);
		printf("Informe o sexo desse participante(F/M): ");
		scanf("%c",&maratona[i].sexo);
		getchar();
		printf("Agora indique a idade esse participante: ");
		scanf("%i",&maratona[i].idade);
		getchar();
				
		contMF(maratona[i].sexo,&h,&m);
		checkIdade(maratona[i].idade, &maior,&maiorI, i);
	}
	
	printf("Nessa maratona:\n");
	printf("Participam %i mulheres.\n",m);
	printf("E %i homens.\n",h);
	printf("A pessoa mais velha é %s com %i anos.\n",maratona[maiorI].nome,maratona[maiorI].idade);
	

	system("pause");
}
