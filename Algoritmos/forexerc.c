#include <stdio.h>

#include <stdlib.h>

main(){



int divisor=0, i, j, num, contadivisores=0;



for(i=1; i<=150; i++){

   if((i%1)==0){

       divisor++;

       }

   for(j=2; j<=i;j++){

       if((i%j)==0){

           divisor++;

       }

}

   if(divisor==2){

       printf("%d ", i);

       contadivisores++;

   }

//gambiarra feia, horrorosa... para for´car saida do for

   if (contadivisores>=30){

       i=151;

   }



   divisor=0;

}



printf("\n Quantidade de numeros primos: %d ", contadivisores);

return 0;



}
