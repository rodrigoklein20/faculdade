#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

        float n1, n2;

        printf("\nDigite um número: ");
        scanf("%f", &n1);

        printf("\nDigite um número: ");
        scanf("%f", &n2);

        printf("\nSoma: %f", n1+n2);
        printf("\nProduto: %f", n1*n2);
        if(n1>=n2){
            printf("\nDiferença: %f", n1-n2);
            printf("\nDivisão: %f", n1/n2);
        }else {printf("\nDiferença: %f", n2-n1);
              printf("\nDivisão: %f", n2/n1);
        }


}
