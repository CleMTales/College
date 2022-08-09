/* Faca um programa em C para controlar as refeicoes vendidas no bandejao da FEMASS.
Para cada pedido, o programa devera registrar a Matricula, Nome, Curso, 
Codigo da refeicao e se deseja sobremesa ou nao.
Cardapio:
Codigo 	Nome do Prato 			Preco 		Descricao do prato
10		Picadinho de carne		15,00		Arroz, feijao, picadinho de carne, salada + refrigerante
20		Frango a Parmegiana		12,00		Arroz, Frango a parmegiana, batata frita + refrigerante
30		Espaguete a Bolonhesa	10,00		Spaguete coberto com molho fresco de carne moida + queijo ralado + refrigerante
Cada aluno so podera comprar uma unica refeicao.
O aluno podera pedir uma sobremesa (Pudim de leite ou Gelatina).
 Caso o faca, deve ser adicionado ao seu pedido o valor de R$ 5,00.
O programa devera terminar quando digitar 0(zero) para a matricula do aluno.
Para cada pedido, o programa devera calcular e exibir na tela a matricula do aluno,
 o nome do prato escolhido e o valor total a pagar.
Ao final, o programa devera exibir a quantidade de cada prato vendido e o total do faturamento.
Autor: Tales Clemente Matsuda
Data de criação: 01/12/2020
Prova 2 - Prog II
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

// Definição da estrutura
typedef struct {
	char nome[40], curso[30], sobremesa;
	long int matricula;
	int cod_ref, tipo_sobremesa;
} ficha_cantina;

ficha_cantina Pedido;
ficha_cantina *p=&Pedido;

//Variáveis globais
int total_prato10=0, total_prato20=0,total_prato30=0;
float faturamento_total=0, v_tot=0;

// Calcular o valor total de cada pedido
float calc_valor_total(int *cod, char *sobre)
{
	v_tot=0;
	if (*cod == 10)
		v_tot=v_tot+15;
	if (*cod == 20)
		v_tot=v_tot+12;
	if (*cod == 30)
		v_tot=v_tot+10;
	
	if (*sobre == 's' or *sobre == 'S')
		v_tot=v_tot+5;
		
	return v_tot;
}

// Mostrar qual o prato e sobremesa foram escolhidos
void escolha_prato(int *escolha_ref, char *sobre, int *escolha_sob)
{
	printf("O pedido foi de: ");
	if (*escolha_ref == 10)
		printf("Picadinho de Carne.");
	if (*escolha_ref == 20)
		printf("Frango à Parmegiana.");
	if (*escolha_ref == 30)
		printf("Espaguete à Bolonhesa.");
		
	if (*sobre == 'S' or *sobre == 's')
		{
			if (*escolha_sob == 1)
				printf(" E como sobremesa: Pudim de Leite.");
			if (*escolha_sob == 2)
				printf(" E como sobremesa: Gelatina.");
		}
	printf("\n");
}

// Soma o valor de cada pedido ao faturamento final
void calc_faturamento_total(float valor_pedido)
{
	faturamento_total = faturamento_total + valor_pedido;
}

// Conta quantos pratos de cada tipo foram comprados
void calc_prato(int *escolha_prato)
{
	if (*escolha_prato == 10)
		total_prato10++;
	if (*escolha_prato == 20)
		total_prato20++;
	if (*escolha_prato == 30)
		total_prato30++;
}

main()
{
	int i=0;
	char conf;
	
	setlocale(LC_ALL,"portuguese");
	printf("Bem vindo à cantina!\n");
	do {
			printf("Informe a matrícula  do %iº aluno (ou 0 para sair): ",i+1);
			scanf("%i",&p->matricula);
			getchar();
			if (p->matricula == 0)
				break;
			printf("Agora o nome do aluno: ");
			gets(p->nome);
			printf("Os pratos disponíveis são:\n");
			printf("Código\tNome do Prato\t\tPreço\n");
			printf("10\tPicadinho de Carne\t15,00\n");
			printf("20\tFrango à Parmegiana\t12,00\n");
			printf("30\tEspaguete à Bolonhesa\t10,00\n");
			do{
				printf("Informe o código do pedido (10/20/30): ");
				scanf("%i",&p->cod_ref);
				getchar();
				if (p->cod_ref == 10 or p->cod_ref == 20 or p->cod_ref == 30)
					break;
				printf("Informação inválida. Tente novamente.\n");
			} while (p->cod_ref != 10 or p->cod_ref != 20 or p->cod_ref != 30);
			printf("O aluno deseja sobremesa de acompanhamento +R$5,00 (S/N): ");
			scanf("%c", &p->sobremesa);
			getchar();
			if (p->sobremesa == 's' or p->sobremesa == 'S')
			{
				printf("Deseja qual sobremesa:\n");	
				printf("[1]Pudim de Leite\n[2]Gelatina\n");
				printf("Digite o número da sobremesa desejada: ");
				scanf("%i", &p->tipo_sobremesa);
				getchar();			
			}
			
			printf("Confira o pedido:\n");
			printf("Matrícula: %i\n",p->matricula);
			escolha_prato(&p->cod_ref, &p->sobremesa, &p->tipo_sobremesa);
			printf("Valor total: %.2f\n",calc_valor_total(&p->cod_ref,&p->sobremesa));
			
			// Confirmação do pedido
			do {
				printf("Os dados estão corretos (S/N): ");
				scanf("%c",&conf);
				conf = toupper(conf);
				if (conf == 'S' or conf == 'N')
				break;
			} while (conf != 'S' or conf != 'N');
			
		if (conf == 'S')
		{
			i++;
			calc_faturamento_total(v_tot);
			calc_prato(&p->cod_ref);
		}
			
		else 
			printf("Refaça seu pedido!\n");
	} while (p->matricula != 0);
	

	printf("\nPedidos encerrados!\n");
	printf("O faturamento total foi de: R$%.2f.\n",faturamento_total);
	printf("Vendas do prato Picadinho de Carne: %i.\n",total_prato10);
	printf("Vendas do prato Frango à Parmegiana: %i.\n",total_prato20);
	printf("Vendas do prato Espaguete à Bolonhesa: %i.\n",total_prato30);
	
	system("pause");
}
