#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

 int n;
 int a = 0;
 int b = 0;
 int c = 0;
 int d = 0;

 do{
    printf("Digite um numero: ");
    scanf("%d", &n);

    if( n >= 0 && n <= 25 ){
        a++;
    }
    if( n >= 26 && n <= 50 ){
        b++;
    }
    if( n >= 51 && n <= 75 ){
        c++;
    }
    if( n >= 76 && n <= 100 ){
        d++;
    }
    }while(n >= 0);

    printf("\nEntre 0 e 25: %d", a);
    printf("\nEntre 26 e 50: %d", b);
    printf("\nEntre 51 e 75: %d", c);
    printf("\nEntre 76 e 100: %d", d);



 return 0;



 }


