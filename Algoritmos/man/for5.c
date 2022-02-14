#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

int cont=0;
int qtd;
int t=0, q=0, z=0
;

for (cont = 0; cont < 30; cont++){

    printf("Digite: ");
    scanf("%d", &qtd);

    if(qtd>= 1 && qtd<=3){
        t++;
    }
    if(qtd>=4){
        q++;
    }
    if(qtd==0){
        z++;
    }


} printf("%d %d %d", t, q, z);

}
