/* graus.c */



#include <stdio.h>

#include <conio.h>

#include <string.h>





main () {

   float graus, minutos, segundos, angulo_em_graus;

   char tecla;





   do {//meu laço geral



   //entrada de dados

    do {

           printf("\nGraus: ");

           scanf("%f", &graus);

           if (graus < 0 || graus > 360){

                       printf("ERRO: Graus fora da faixa entre 0 e 360");

           }

       } while (graus < 0 || graus > 360);





    do {



     printf("\nMinutos: ");

     scanf("%f", &minutos);

     if (minutos < 0 || minutos > 59)

        {

            printf("ERRO: Minutos fora da faixa");

        }

    } while (minutos < 0 || minutos > 59);





    do {

       printf("\nSegundos: ");

     scanf("%f", &segundos);

     if (segundos < 0 || segundos > 59)

        {

            printf("ERRO: Segundos fora da faixa");

        }

    } while (segundos < 0 || segundos > 59);





   //processamento. calculo do angulo em graus

    angulo_em_graus = graus + (minutos / 60) + (segundos / 3600);



    printf("\nAngulo em graus: %.2f\n", angulo_em_graus);



    do {//validando a entrada de dados da variavel tecla

     printf("\nContinua [S]im ou [N]ão?");

     tecla = getche();  //scanf(" %c", &tecla);

    } while (!strchr("SsNn", tecla));



    printf("\n");



   } while (strchr("Ss", tecla));

}
