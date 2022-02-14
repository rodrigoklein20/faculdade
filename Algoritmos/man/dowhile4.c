#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    int inteiro;
    int maior;
    int menor;


    do{
        printf("\nDigite um número inteiro positivo: ");
        scanf("%d", &inteiro);

        if(inteiro>maior && inteiro>0){
            maior = inteiro;
        }
        if(inteiro<menor && inteiro>0){
            menor = inteiro;
        }



    }while(inteiro>=0);

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);

 getch();
}
