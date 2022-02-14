#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int n;
    float soma, cont=0;

    do{
        printf("Insira um número: ");
        scanf("%d", &n);

        if(n>12 && n<74){
            soma = soma + n;
            cont++;
        }

    }while(n>0);

    printf("Media: %f", (soma/cont));

    return 0;

}
