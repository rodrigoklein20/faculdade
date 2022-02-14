#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int m;
    int divisores;
    int soma, numero=0;
    int cont=0;



    do{
       printf("\nDigite um número: ");
       scanf("%d", &m);

       if(m%2==0){
        divisores = m / 2;
        printf("\nPar! \n");
        printf("Total de divisores: %d \n", divisores);
       } else{
            printf("\nÍmpar!");
            while(numero<m){
                numero = numero + 1;
                soma = soma + numero;
            }
            printf("\nSoma dos inteiros até %d: %d", m, soma);
            numero = 0;
            soma = 0;

       }

    }while(m>=0);

return 0;


}
