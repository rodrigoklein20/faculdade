#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

 int n, cont = 0, mult;

 for(cont = 1; cont <= 10; cont++){
    printf("\n Digite um numero: ");
    scanf("%d", &n);
    mult=1;
    do{
    printf("%d x %d = %d \n", mult, n, mult*n);
    mult++;
    }while(mult<=10);
 }

    return 0;

}
