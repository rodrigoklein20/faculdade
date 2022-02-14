#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int i,cont=0;
    float a, b, c;
    float maior, medio, menor;

    do{
        printf("\n Digite o valor de i: ");
        scanf("%d", &i);
        }while(i>3 || i<1);

    printf("\n Digite o valor de a: ");
    scanf("%f", &a);

    printf("\n Digite o valor de b: ");
    scanf("%f", &b);

    printf("\n Digite o valor de c: ");
    scanf("%f", &c);


    if(a>b && a>c){
        maior=a;
        if(b>c){
            medio=b;
            menor=c;
        }else
            medio=c;
            menor=b;
    } else


    if(b>a && b>c){
        maior=b;
        if(a>c){
            medio=a;
            menor=c;
        }else
            medio=c;
            menor=a;
    } else


    if(c>a && c>b){
        maior=c;
        if(a>b){
            medio=a;
            menor=b;
        }else
            medio=b;
            menor=a;
    }

    if(i==1){
        printf("%f - %f - %f", menor, medio, maior);
    }
    if(i==2){
        printf("%f - %f - %f", maior, medio, menor);
    }
    if(i==3){
        printf("%f - %f - %f", menor, maior, medio);
    }

return 0;

}
