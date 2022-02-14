#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){

int n1, n2, n3;

printf("\n Entre com o numero 1: ");
scanf("%d", &n1);

printf("\n Entre com o numero 2: ");
scanf("%d", &n2);

printf("\n Entre com o numero 3: ");
scanf("%d", &n3);

if(n1<n2 && n1<n3){
    printf("%d", n1);
    if(n2<n3 && n2>n1){
        printf("\n %d", n2);
        printf("\n %d", n3);
    }else if (n2>n3 && n2>n1)
         printf("\n %d", n3);
         printf("\n %d", n2);
}else if(n2<n1 && n2<n3){
    printf("%d", n2);
    if(n1<n3 && n1>n2){
        printf("\n %d", n1);
        printf("\n %d", n3);
    }else if (n3>n1 && n3>n2)
          printf("\n %d", n3);
          printf("\n %d", n1);
}else if(n3<n1 && n3<n2)
   printf("%d", n3);
    if(n1<n2 && n1>n3){
        printf("\n %d", n1);
        printf("\n %d", n2);
    }else if(n1>n2 && n1>n3){
          printf("\n %d", n2);
          printf("\n %d", n1);
   }

     printf("\n \n %d", n1);
     printf("\n %d", n2);
     printf("\n %d", n3);


}
