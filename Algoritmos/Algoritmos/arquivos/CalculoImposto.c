#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//Programa para cálculo de imposto
float valor;
float imposto;
#define IMPT 0.05; //5%
int main(){
    printf("Informe o valor do produto: ");
	scanf("%f",&valor);
	imposto = valor * IMPT;
	printf("Valor do imposto: %f\n", imposto);
	printf("Valor do imposto: %.2f\n", imposto); //com duas casas decimais
	getch();
    return 0;
}

