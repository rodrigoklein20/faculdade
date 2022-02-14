#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){

int num;
int cont;

for(cont = 0; cont < 10; cont++){
    printf("\nDigite o numero: ");
    scanf("%d", &num);

    if((num%2)==0){
        printf("Par");
    } else printf("Impar");
}

}
