#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");


    int idade, maior, menor, soma, qnt=0;
    float media;


    do{
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        if(idade>=0){
        soma=soma+idade;
        qnt++;
        }

        if(idade>maior && idade>=0){
            maior = idade;
        }
        if(idade<menor && idade>=0){
            menor = idade;
        }




    }while(idade>0);

media=soma/qnt;

printf("\n Idade mais nova: %d", menor);
printf("\n Idade mais velha: %d", maior);
printf("\n Média das idades: %.2f", media);


return 0;

}
