#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

        float n1, n2;

        printf("\nDigite um n�mero: ");
        scanf("%f", &n1);

        printf("\nDigite um n�mero: ");
        scanf("%f", &n2);

        printf("\nSoma: %f", n1+n2);
        printf("\nProduto: %f", n1*n2);
        if(n1>=n2){
            printf("\nDiferen�a: %f", n1-n2);
            printf("\nDivis�o: %f", n1/n2);
        }else {printf("\nDiferen�a: %f", n2-n1);
              printf("\nDivis�o: %f", n2/n1);
        }


}
