#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    char sn;
    float n1, n2,media;

    do{
        printf("\nDigite a nota 1: ");
        scanf("%f", &n1);

        printf("\nDigite a nota 2: ");
        scanf("%f", &n2);

        media = (n1+n2)/2;

        printf("\nMedia: %.2f", media);

        if(media>=9.0 && media <=10.0){
            printf("\nMédia: %f", media);
            printf("\nConceito: A");
            printf("\nAprovado!");
        }
        if(media>=7.0 && media<= 8.9){
            printf("\nMédia: %f", media);
            printf("\nConceito: B");
            printf("\nAprovado!");
        }
        if(media>=6.0 && media<= 6.9){
            printf("\nMédia: %f", media);
            printf("\nConceito: C");
            printf("\nExame!");
        }
        if(media>=0.0 && media<= 5.9){
            printf("\nMédia: %f", media);
            printf("\nConceito: D");
            printf("\nReprovado!");
        }
        else if(media<=0.0 || media>=10.0){
            printf("Erro!");
        }
        else
            printf("Sair?[S/N]: ");
            scanf("%s", sn);


    }while(sn!='s');


getch();
}
