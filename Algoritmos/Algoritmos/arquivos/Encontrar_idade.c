#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h> //para ativar o uso de acentos
int ano;
int idade;
int main(){
    setlocale(LC_ALL, "Portuguese"); //ativa o portugu�s
    printf("Informe o ano do seu nascimento: ");
	scanf("%d",&ano);
	while(ano<=0){
		printf("Erro: ano inv�lido!\n");
		scanf("%d",&ano);
	}
	idade = 2019 - ano;
	printf("Sua idade �: %d\n", idade);
	if (idade>=18)
		printf("Voc� � maior de idade\n");
	else printf("Voc� � menor de idade\n");
    return 0;
}
