#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float main(){

    char codigo[4];
    char cod1[]="ABCD";
    char cod2[]="XYPK";
    char cod3[]="KLMP";
    char cod4[]="QRST";
    int quantidade;


    printf("Digite o codigo do produto: \n");
    scanf("%s", &codigo);

    printf("Digite a quantidade: \n");
    scanf("%d", &quantidade);

    if (strcmp(cod1, codigo) == 0){
        printf("%f", (quantidade * 5.30));
    } else if (strcmp(cod2, codigo) == 0){
        printf("%f", (quantidade * 6.00));
    } else if (strcmp(cod3, codigo) == 0){
        printf("%f", (quantidade * 3.20));
    } else if (strcmp(cod4, codigo) == 0){
        printf("%f", (quantidade * 2.50));
    } else
        printf("Erro");

return 0;
}
