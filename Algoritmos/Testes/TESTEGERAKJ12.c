#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int sair;
    char sexo[10];
    int cabelo;
    int olho;
    int idade, maioridade, fem;
    char mulher[10]="mulher";
    char homem[10]="homem";

    do{
        printf("\nVocê é homem ou mulher? ");
        scanf("%s", sexo);
        printf("%s", sexo);

        if(idade>=maioridade){
            maioridade = idade;
        }


        if(strcmp(sexo, mulher)==0){
                printf("\nCorreto");
                fem++;
        }else{
                printf("\nErrado");
            }


        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);


    }while(idade>=0);

getch();
return 0;


}
