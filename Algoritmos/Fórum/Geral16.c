#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, cod, codmaior, codmenor, alt, altmaior=0, altmenor=200;

    for(i=0;i<5;i++){
        printf("\nDigite o seu código: ");
        scanf("%d", &cod);

        printf("\nDigite a sua altura em cm: ");
        scanf("%d", &alt);

        if(alt>altmaior){
            altmaior=alt;
            codmaior=cod;
        }
        if(alt<altmenor){
            altmenor=alt;
            codmenor=cod;
        }
    }
        printf("\nO aluno %d é mais alto: %d cm", codmaior, altmaior);
        printf("\nO aluno %d é mais baixo: %d cm", codmenor, altmenor);

return 0;

}
