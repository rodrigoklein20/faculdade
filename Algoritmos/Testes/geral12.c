
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int sair;
    char sexo[1];
    int cabelo;
    int olho;
    int idade, maioridade, fem;
    char mulher[1]="F";
    char homem[1]="F";

    do{
        printf("\nDigite o seu sexo[F]/[M]: ");
        gets(sexo);
        sexo[1] = toupper(sexo[1]);

        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        if(idade>maioridade){
            maioridade = idade;
        }

        printf("\nDigite a cor dos olhos [1]Azul - [2]Verde - [3]Castanho: ");
        scanf("%d", &olho);

        printf("\nDigite a cor do seu cabelo [1]Louro - [2]Castanho - [3]Preto: ");
        scanf("%d", &cabelo);

        if(strcmp(mulher, sexo)==0){
                printf("Correto");
                fem++;
            }else{
                printf("Errado");
            }





    }while(idade>=0);

    printf("\nMaior idade: %d", maioridade);
    printf("\nMulheres: %d", fem);

return 0;


}
