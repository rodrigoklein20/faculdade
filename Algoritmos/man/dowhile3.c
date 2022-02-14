#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

    int voto;
    int cand1=0;
    int cand2=0;
    int cand3=0;
    int cand4=0;
    int nulo=0;
    int branco=0;

    do{
        do{ // Do da validação de entrada de dados

            printf("\nEntre com o voto: ");

            scanf("%d", &voto);

                if(voto <0 || voto>6)

                printf(" \n Dado invalido, entre novamente");

        } while(voto <0 || voto>6);

        switch(voto){
        case 1:
            cand1++;
        break;
        case 2:
            cand2++;
        break;
        case 3:
            cand3++;
        break;
        case 4:
            cand4++;
        break;
        case 5:
            nulo++;
        break;
        case 6:
            branco++;
        break;
        }


    }while(voto!=0);

    printf("\nVotos no candidato 1: %d", cand1);
    printf("\nVotos no candidato 2: %d", cand2);
    printf("\nVotos no candidato 3: %d", cand3);
    printf("\nVotos no candidato 4: %d", cand4);
    printf("\nVotos nulos: %d", nulo);
    printf("\nVotos em branco: %d", branco);

    getch();


}
