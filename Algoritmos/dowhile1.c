#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    int filho;
    int somafilho=0;
    int somahab=0;
    float salario;
    float maiorsalario=0.0;
    float somasalario=0.0;
    float medfilho;
    float medsal;
    int cem;
    float medcem;

    do{
        printf("\nDigite o salário: ");
        scanf("%f", &salario);

        printf("\nDigite o número de filhos: ");
        scanf("%d", &filho);

        somahab = somahab + 1;
        somasalario = somasalario + salario;
        somafilho = somafilho + filho;

        if(salario>maiorsalario){
            maiorsalario = salario;
        }
        if(salario<=100.00){
            cem++;
        }
            }while(salario>=0.0);


        medsal = somasalario / somahab;
        medfilho = somafilho / somahab;
        medcem = somahab / cem;

        printf("\nMédia de salário: %.f", medsal);
        printf("\nMédia de filhos: %.f", medfilho);
        printf("\nMaior salário: %.f", maiorsalario);
        printf("\nPercentual de pessoas que recebem até R$100.00: %.2f%", medcem);



getch();



    }







