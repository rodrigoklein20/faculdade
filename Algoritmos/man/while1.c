#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese"); //ativa o portugu�s

    int num=0;
    int soma=0;
    int cont=0;
    float media;


    do{ printf("\nDigite um n�mero positivo: ");
        scanf("%d", &num);
        if(num>0){
        soma += num;
        cont++;}
    }while(num>0);

    media = (soma / cont);
    printf("\nA soma dos n�meros inteiros �: %d", soma);
    printf("\nM�dia: %f", media);

    getch();


   return 0;
}
