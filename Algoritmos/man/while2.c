#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

 int num;
 int cont;

 do{
    printf("\nDigite um n�mero: ");
    scanf("%d", &num);
    if(num%2!=0){
        printf("� �mpar!");
    }
    }while(num>=0);

    return 0;

}
