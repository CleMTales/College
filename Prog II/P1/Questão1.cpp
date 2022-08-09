/* 
Progama: Receber telefone, endereço, sabor e desejo ou não de refrigerante como
acompanhamento em pedidos de uma pizzaria. Ao final, calcular quantos pedidos 
foram feitos e o faturamento total. O programa finaliza quando o telefone 
inserido for igual a 0.
Autor: Tales Clemente Matsuda
Data de criação: 29/09/2020
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

struct {
	char telefone[14],endereco[50],sabor[15],refri;
} pedido;

int pcont=0;
float faturamentoTotal=0;

float reg_pedido()
{
	float valor=0;
	printf("Endereço de Entrega: ");
	gets(pedido.endereco);
	
	do{
		printf("Sabor da Pizza (Muzzarela, Portuguesa ou Camarao): ");
		gets(pedido.sabor);
		if ((strcmp(pedido.sabor,"Muzzarela")==0) 
		or (strcmp(pedido.sabor,"Portuguesa")==0) 
		or (strcmp(pedido.sabor,"Camarao")==0)
		or (strcmp(pedido.sabor,"muzzarela")==0)
		or (strcmp(pedido.sabor,"portuguesa")==0)
		or (strcmp(pedido.sabor,"camarao")==0))
		break;
		printf("Sabor inválido, tente novamente.\n");
	} while (1==1);
	
	
	do{
		printf("Refrigerante? (S/N): ");
		scanf("%c",&pedido.refri);
		getchar();
		
		if(pedido.refri == 's' or pedido.refri == 'S' 
			or pedido.refri == 'n' or pedido.refri == 'N')
		break;
	
		printf("Resposta inválida. Digite S ou N.\n");
	} while (pedido.refri != 's' or pedido.refri != 'S' 
		or pedido.refri != 'n' or pedido.refri != 'N');
	
	
	if (strcmp(pedido.sabor,"Muzzarela")==0 
	or strcmp(pedido.sabor,"muzzarela")==0)
	valor = valor+20;
	if (strcmp(pedido.sabor,"Portuguesa")==0 
	or (strcmp(pedido.sabor,"portuguesa")==0))
	valor = valor+25;
	if ((strcmp(pedido.sabor,"Camarao")==0) 
	or (strcmp(pedido.sabor,"camarao")==0))
	valor = valor+35;
	
	if(pedido.refri == 's' or pedido.refri== 'S')
	valor = valor+5;
	return valor;
}

void tot_faturamento(float valor)
{
	pcont++;
	faturamentoTotal = faturamentoTotal+valor;
}

main(){
	setlocale(LC_ALL,"portuguese");
	float valor;
	do
	{
		printf("Informe o telefone (com DDD) ou 0 para finalizar: ");
		gets(pedido.telefone);
		if (strcmp(pedido.telefone,"0")== 0)
		break;
		
		valor = reg_pedido();
		
		printf("\nO valor total do pedido é: R$%.2f.\n",valor);
		printf("Detalhes do pedido:\n");
		printf("Telefone: %s\n",pedido.telefone);
		printf("Endereço: %s\n",pedido.endereco);
		printf("Pedido: Uma pizza sabor %s",pedido.sabor);
		if (pedido.refri == 's' or pedido.refri == 'S')
		printf(" e um refrigerante");
		printf(".\n\n");
		tot_faturamento(valor);
	} while (strcmp(pedido.telefone,"0")!= 0);
	
	printf("\nFinalizando expediente!\n");
	printf("Houveram %i pedidos e o faturamento total foi de: R$%.2f.\n"
			,pcont,faturamentoTotal);
	

	system("pause");
}
