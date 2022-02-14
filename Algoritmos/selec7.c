#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float main(){

 float n1, n2, n3, media;

    printf("Digite a nota 1: \n");
    scanf("%f", &n1);

    printf("Digite a nota 2: \n");
    scanf("%f", &n2);

    printf("Digite a nota 3: \n");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;
    printf("Media: %.2f", media);

    if (media >= 9.0 && media < 10.0){
        printf("\nNota: A - APROVADO");
    } else if(media >= 7.5 && media < 9.0){
        printf("\nNota: B - APROVADO");
    } else if(media >= 6.0 && media < 7.5){
        printf("\nNota: C - APROVADO");
    } else if(media >= 4.0 && media < 6.0){
        printf("\nNota: D - REPROVADO");
    } else if(media < 4.0){
        printf("\nNota: E - REPROVADO");
    } else {
        printf("\n Erro!!!");
    }


return 0;

}
