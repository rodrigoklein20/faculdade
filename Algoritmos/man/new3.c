#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){

int cod;
int qtd;
float preco, valor;

    printf("Digite o codigo: ");
    scanf("%d", &cod);

    printf("Digite a quantidade: ");
    scanf("%d", &qtd);


    if(cod==100){
        valor = qtd * 2.50;
    }
    if(cod==101){
        valor = qtd * 4.70;
    }
    if(cod==102){
        valor = qtd * 5.20;
    }
    if(cod==103){
        valor = qtd * 3.90;
    }
    if(cod==104){
        valor = qtd * 4.20;
    }
    if(cod==105){
        valor = qtd * 1.75;
    }
    if(cod<100 || cod>105){
        printf("Erro, tente novamente");
    } else printf("Valor a ser pago: R$%.2f", valor);


    return 0;


}
