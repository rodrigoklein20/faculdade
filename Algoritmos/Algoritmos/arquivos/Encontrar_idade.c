#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h> //para ativar o uso de acentos
int ano;
int idade;
int main(){
    setlocale(LC_ALL, "Portuguese"); //ativa o português
    printf("Informe o ano do seu nascimento: ");
	scanf("%d",&ano);
	while(ano<=0){
		printf("Erro: ano inválido!\n");
		scanf("%d",&ano);
	}
	idade = 2019 - ano;
	printf("Sua idade é: %d\n", idade);
	if (idade>=18)
		printf("Você é maior de idade\n");
	else printf("Você é menor de idade\n");
    return 0;
}
