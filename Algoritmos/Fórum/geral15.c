#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

        int i, n=100;

        for(i=0;i<100;i++){
            if((n%2)!=0){
                printf("\n%d", n);
            }
            n++;
        }
        getch();
    return 0;


}
