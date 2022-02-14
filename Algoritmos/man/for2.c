#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

int cont;
int mult=1;
int result;

for (cont = 0; cont < 10; cont++){
    result = mult * 9;
    printf("%d\n", result);
    mult++;
}


}
