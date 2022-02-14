#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <locale.h>



main(){



int n1, n2, n3;

int menor, meio, maior;



printf("\n Entre com o numero 1: ");

scanf("%d", &n1);



printf("\n Entre com o numero 2: ");

scanf("%d", &n2);



printf("\n Entre com o numero 3: ");

scanf("%d", &n3);



menor = n1;

maior = n1;



if (n2 < menor){

  menor = n2;

}if(n3 < menor){

  menor = n3;

}if (n2 > maior){

  maior = n2;

}if (n3 > maior){

  maior = n3;

}if ((n1 > menor) && (n1 < maior)){

  meio = n1;

}if ((n2 > menor) && (n2 < maior)){

  meio = n2;

}if ((n3 > menor) && (n3 < maior)){

  meio = n3;

}



   printf("%i\n", menor);

   printf("%i\n", meio);

   printf("%i\n", maior);

   printf(" ");

   printf("%i\n", n1);

   printf("%i\n", n2);

   printf("%i\n", n3);





}
