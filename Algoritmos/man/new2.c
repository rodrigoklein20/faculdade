#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

int n1;
int n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);


    if(n1==n2){
    printf("Numeros iguais, tente novamente.");
    }
    if(n1>n2){
        printf("O maior numero e: %d", n1);
    } else if(n2>n1){
        printf("O maior numero e: %d", n2);
    }

    return 0;
}
