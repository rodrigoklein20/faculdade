#include <stdio.h>

#include <stdlib.h>

#include <locale.h>



int main() {

   setlocale(LC_ALL,"Portuguese");



 int i, qtde = 0;

 float valor, soma = 0, media;



 float v1, v2, v3, v4, v5, v6;



 printf("Entre com o valor 1: ");

  scanf("%f", &v1);



 printf("Entre com o valor 2: ");

  scanf("%f", &v2);



 printf("Entre com o valor 3: ");

  scanf("%f", &v3);



  printf("Entre com o valor 4: ");

  scanf("%f", &v4);



  printf("Entre com o valor 5: ");

  scanf("%f", &v5);



  printf("Entre com o valor 6: ");

  scanf("%f", &v6);



 if(v1>0){



   qtde++; // = qtde=qtde+1; //

   soma=soma+v1;



 }



  if(v2>0){



   qtde++; // = qtde=qtde+1; //

   soma=soma+v2;



 }



  if(v3>0){



   qtde++; // = qtde=qtde+1; //

   soma=soma+v3;



 }



  if(v4>0){



   qtde++; // = qtde=qtde+1; //

   soma=soma+v4;



 }



  if(v5>0){



   qtde++; // = qtde=qtde+1; //

   soma=soma+v5;



 }



  if(v6>0){



   qtde=qtde+1;//qtde++; // = qtde=qtde+1; //

   soma=soma+v6;



 }





 /* for(i = 1; i <= 6; i++) {

   scanf("%f", &valor);

   if (valor > 0) {

     qtde ++;

     soma = soma + valor;

   }

 }



 */



 printf("%d valores positivos\n", qtde);

 if (soma > 0)

   media = soma / qtde;

 printf("%.1f\n", media)   ;





   return 0;

}
