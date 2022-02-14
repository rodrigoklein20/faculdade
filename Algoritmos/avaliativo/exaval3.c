#include <stdio.h>

#include <stdlib.h>

#include <locale.h>



int main () {

   setlocale(LC_ALL,"Portuguese");// para os acentos em pt



 float salario, reajuste, novosalario;

 int perc;



 printf("Entr com o salário: ");

 scanf("%f", &salario);

 if (salario <= 400)

   perc = 15;

 else

   if (salario <= 800)

     perc = 12;

   else

     if (salario <= 1200)

       perc = 10;

     else

       if (salario <= 2000)

         perc = 7;

       else

         perc = 4;



 reajuste = salario * perc / 100;

 novosalario=salario + reajuste;



 printf("Novo salario: %.2f\n", novosalario);

 printf("Reajuste ganho: %.2f\n", reajuste);

 printf("Em percentual: %d %%\n", perc);



 return 0;

}
