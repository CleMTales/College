/* Autor: Tales Clemente Matsuda
Prog: Calcular preço de produtos, calcular e mostrar troco de cada compra.
Data de criação:19/05/2020 2:40
Última alteração:19/05/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char next,fim;
	int v=0,l,p=0;
	float produto[50][2],dinh,troco,preco,valor;
	
	do {
		l=0;
		preco =0;
		printf("\tVenda número %i\n\n",v+1);
		
		do{
			printf("Digite o valor do produto %i: R$",l+1);
			scanf("%f",&produto[l][1]);
			printf("Digite a quantidade do produto: ");
			scanf("%f",&produto[l][2]);
			getchar();
						
			printf("Há mais produtos? (S/N): ");
			scanf("%c",&next);
			
			preco = preco+(produto[l][1]*produto[l][2]);
			l++;	
		} while (next == 's' || next == 'S');
			
		printf("Preço total: R$%.2f\n\n",preco);
		
		do {
			printf("Informe o valor pago pelo cliente: R$");
			scanf("%f",&dinh);
			if (dinh < 0 || dinh < preco)
			printf("Valor abaixo do valor total da compra.\n\n");
			else
			troco = dinh - preco;
		} while (dinh < 0 || dinh < preco);
		
		printf("\nLojas Corona\n");
		for (p=0;p<l;p++)
			printf("Produto %i: R$%.2f\n",p+1,(produto[p][1]*produto[p][2]));
		printf("Total: R$%.2f\n",preco);
		printf("Dinheiro: R$%.2f\n",dinh);
		printf("Troco: R$%.2f\n\n",troco);
			
		v++;
		printf("Continuar registrando compras? (S/N): ");
		getchar();
		scanf("%c",&fim);
		
	}while (fim == 's' || fim == 'S');
	
	printf("Finalizando.\n");
	
	system("Pause");
	return 0;
}
