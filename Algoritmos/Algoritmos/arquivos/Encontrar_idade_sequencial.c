#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//Versão sequencial do algoritmo Encontrar idade
int ano;
int idade;
int main(){
    printf("Informe o ano do seu nascimento: ");
	scanf("%d",&ano);
	idade = 2019 - ano;
	printf("Sua idade e: %d\n", idade);
	getch();
    return 0;
}

