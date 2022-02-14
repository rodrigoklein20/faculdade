#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo;
    float salario, somasalario, media;
    int idade, menorid=100, maiorid, quant, cem, mulheres=0;

    do{

        do{
        printf("\n Digite a seu sexo [S] [M]: ");
        sexo = getche();
        if(sexo == 's' || sexo == 'S'){
            mulheres++;
        }

       }while(!strchr("SsMm", sexo));

       printf("\n \nDigite a sua idade: ");
       scanf("%d", &idade);

       if(idade>maiorid){
        maiorid=idade;
       }
       if(idade<menorid && idade>=0){
        menorid=idade;
       }

       printf("\n Digite a seu salário: ");
       scanf("%f", &salario);


       if(idade>=0){
        somasalario = somasalario + salario;
        media = somasalario / quant;

        if(salario <= 100.00){
            if(sexo == 's' || sexo == 'S'){
                cem++;
            }
        }



       }



    }while(idade>=0);


    printf("\nMedia de salario: %f", media);
    printf("\nMaior idade: %d", maiorid);
    printf("\nMenor idade: %d", menorid);
    printf("\nMuheres com salário até 100: %d", cem);



    return 0;



}
