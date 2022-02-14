#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    int ano=0;
    float chico=1.50;
    float ze=1.10;


    do{
        chico = chico + 0.02;
        ze = ze + 0.03;
        ano++;
    }while(chico>ze);

    printf("Anos necessários: %d", ano);

 getch();
}


