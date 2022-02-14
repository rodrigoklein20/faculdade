#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float main(){
    setlocale(LC_ALL, "portuguese");

 int codigo;
 int horas;
 int dep;
 float salario;
 float novosalario;
 float descontoin;
 float descontoir;

     printf("\nDigite seu código: ");
     scanf("%d", &codigo);

 while(codigo!=0){
     printf("\nDigite o total de horas trabalhadas: ");
     scanf("%d", &horas);

     printf("\nDigite o número de dependentes: ");
     scanf("%d", &dep);

     dep = dep*40;
     salario = (12 * horas)+dep;
     descontoin = salario -0.85;
     descontoir = salario - 0.05;
     novosalario = salario - (descontoin+descontoir);

    printf("\nSalário base: %f", salario);
    printf("\nDesconto INSS: %f%", descontoin);
    printf("\nDesconto IR: %f%", descontoir);
    printf("\nSalário: %f", novosalario);



    printf("\nDigite seu código: ");
    scanf("%d", &codigo);
 }


getch();


}
