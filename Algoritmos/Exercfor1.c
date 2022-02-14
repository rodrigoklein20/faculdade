#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main(){

int numero;
int contador;

for(contador=1; contador <= 10; contador = contador + 1){
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if((numero % 2) == 0){
        printf("Par \n \n");
    } else
        {
        printf("Impar \n \n");
        }
}
return 0;
}
