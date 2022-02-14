#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    int num;
    int somap=0;
    int somai=0;
    int cont=0;
    float media;



    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if(num%2==0){
            somap+=num;
        }if(num%2!=0){
            somai+=num;
            cont++;
        }

    }while(num>0);


    media = (somai / cont);
    printf("\nA soma dos números pares é: %d", somap);
    printf("\nMédia dos números ímpares: %.2f", media);

    getch();
}


