#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int n=1000;
    int i;

    for(i=0; i<1000; i++){
        if((n%11)==5){
           printf("\n%d", n);
        }
        n++;
    }

    return 0;

    }

