#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i;
    float a, b, c, d;

    for(i=0;i<5;i++){
        printf("\nDigite o valor de A: ");
        scanf("%f", &a);
        printf("\nDigite o valor de B: ");
        scanf("%f", &b);
        printf("\nDigite o valor de C: ");
        scanf("%f", &c);
        printf("\nDigite o valor de D: ");
        scanf("%f", &d);

        printf("\n%f / %f / %f / %f", a, b, c, d);

        if(a>b&&a>c&&a>d){
            printf("Maior é A");
        }



    }
    return 0;
}
