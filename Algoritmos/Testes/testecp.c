#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char um[10];
    char dois[10];

    printf("\ndigite a primeira: ");
    gets(um);
    setbuf(stdin, NULL);

    printf("\ndigite a segunda: ");
    gets(dois);

    printf("\nPrimeira String: %s", um);
    printf("\nPrimeira String tem %d letras", strlen(um));
    printf("\nSegunda String: %s", dois);
    printf("\nSegunda String tem %d letras", strlen(dois));

    if(strcasecmp(um,dois)==0){
            printf("\n\nIguais");
        }else{
            printf("\n\nDiferentes");
        }



    getch();
 return 0;


}
