#include <conio.h>

#include <string.h>

#include <ctype.h>



main ()

{

 float altura, peso, pi, pi_inf, pi_sup, diferenca;

 char sexo, tecla;



 do {



    printf("\n Sexo [M]asculino ou [F]eminino: \n");

    do {

     sexo = toupper(getche());

    } while (!strchr("MF", sexo));





    printf("\nAltura: ");

    scanf("%f", &altura);

    printf("Peso: ");

    scanf("%f", &peso);





    switch (sexo)

   {

   case 'M': pi = 72.7 * altura - 58;

          break;

   case 'F': pi = 62.1 * altura - 44.7;

          break;

   }





    printf("Peso Ideal: %.1f\n", pi);

    diferenca = peso - pi;



    printf("Diferença de Peso: %.1f\n", diferenca);

    pi_inf = pi - pi * 0.05;

    pi_sup = pi + pi * 0.05;



    printf("Situação: ");

    if (peso < pi_inf)

     printf("MAGRO\n");

    else

     if (peso > pi_sup)

         printf("GORDO\n");

     else

         printf("IDEAL\n");

//if (peso < pi_inf)

  //   strcpy(situacao,"MAGRO");

   // else

     //if (peso > pi_sup)

       //  strcpy(situacao,"GORDO");

     //else

       //  strcpy(situacao,"IDEAL");



   printf("Situação: %s", situacao);



    printf("\n [S/N]?");

    do {

     tecla = getche();

    } while (!strchr("SsNn",tecla));



   } while (strchr("Nn",tecla));



}
