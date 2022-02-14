#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <locale.h>

float main (){

float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;


    printf("\nNota 1: %.f \nNota 2: %.f \nNota 3: %.f ", n1, n2, n3);
    printf("\nMedia: %.f", media);

    if(media>=7){
        printf("\nAprovado");
    }else printf("\nReprovado");

    return 0;
}
