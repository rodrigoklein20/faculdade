#include <stdio.h>

#include <stdlib.h>



main(){



float n1, n2, n3, media;



printf("\n Entre com a Nota 1: ");

scanf("%f", &n1);

printf("\n Entre com a Nota 2: ");

scanf("%f", &n2);

printf("\n Entre com a Nota 3: ");

scanf("%f", &n3);



media = (n1+n2+n3)/3;



printf("\n Nota1: %.2f, Nota2: %.2f, Nota3: %.2f \n ", n1, n2, n3);

printf("\n Media : %.2f ", media);







if(media >= 7.0){

    printf ("\n A P R O V A D O !!");

}else{

    printf ("\n R E P R O V A D O !!");

}







return 0;

}
