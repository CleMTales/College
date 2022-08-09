/* 
Progama: Receber CPF, nome, e-mail e senha. Validar senha.
Autor: Tales Clemente Matsuda
Data de criação: 12/09/2020
Data de modificação:12/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

val_senha(char senha[15], char conf[15])
{
	if (strcmp(conf,"0") == 0)
		printf("Cadastro cancelado!\n");
	else if (strcmp(senha,conf) == 0)
		printf("Senha confirmada, cadastro efetuado com sucesso!\n");
	else 
		printf("As senhas digitadas não coincidem.\n");
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct {
		char nome[30], email[50],cpf[15], senha[15];
	} cad;
	
	char confSenha[15];
		
	printf("Digite seu nome: ");
	gets(cad.nome);
	printf("Agora digite seu e-mail: ");
	gets(cad.email);
	printf("Informe seu CPF: ");
	gets(cad.cpf);
	printf("Digite sua senha: ");
	gets(cad.senha);
	
	
	printf("Essas são suas informações: \n");
	printf("Nome: %s\n", cad.nome);
	printf("E-mail: %s\n", cad.email);
	printf("CPF: %s\n", cad.cpf);
	
	printf("Digite sua senha novamente para confirmar seu cadastro. ");
	printf("(Ou 0 para cancelar):\n");
	gets(confSenha);
		
	val_senha(cad.senha,confSenha);
	
	
	system("pause");
}
