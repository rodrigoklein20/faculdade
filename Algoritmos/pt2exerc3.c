#include <stdlib.h>



#include <stdio.h>





main(){



int n1,n2,n3,n4,n5,n6,soma = 0, positivos = 0;

float media = 0;



printf("Entre com o numero 1: ");

scanf("%i", &n1);



printf("Entre com o numero 2: ");

scanf("%i", &n2);



printf("Entre com o numero 3: ");

scanf("%i", &n3);



printf("Entre com o numero 4: ");

scanf("%i", &n4);



printf("Entre com o numero 5: ");

scanf("%i", &n5);



printf("Entre com o numero 6: ");

scanf("%i", &n6);



if(n1 > 0){



  positivos = positivos + 1;

  media = media + n1;

}





if(n2 > 0){



  positivos = positivos + 1;

  media = media + n2;

}





if(n3 > 0){



  positivos = positivos + 1;

  media = media + n3;

}



if(n4 > 0){



  positivos = positivos + 1;

  media = media + n4;

}





if(n5 > 0){



  positivos = positivos + 1;

  media = media +n5;

}





if(n6 > 0){



  positivos = positivos + 1;

  media = media + n6;

}





printf("%i valores positivos\n", positivos);

media = media / positivos;

printf("media: %.1f", media);





return 0;

}
