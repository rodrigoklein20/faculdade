#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese"); //ativa o português

    int num=0;
    int soma=0;
    int cont=0;
    float media;


    do{ printf("\nDigite um número positivo: ");
        scanf("%d", &num);
        if(num>0){
        soma += num;
        cont++;}
    }while(num>0);

    media = (soma / cont);
    printf("\nA soma dos números inteiros é: %d", soma);
    printf("\nMédia: %f", media);

    getch();


   return 0;
}
