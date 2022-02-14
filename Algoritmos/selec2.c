#include <stdio.h>

#include <stdlib.h>

main(){



int codigo, quant;

float valor=0;// inicializei para o caso de codigo invalido



printf("\n ENTRE COM O CODIGO:  ");

scanf("%d", &codigo);



printf("\n ENTRE COM A QUANTIDADE:  ");

scanf("%d", &quant);



/*

if(codigo == 100){

		valor = quant * 2.50;

}else{ //senão

	if(codigo == 101){

		valor = quant * 4.75;

	}else{

	  if(codigo == 102){

		valor = quant * 5.20;

	  }else{

	   if(codigo == 103){

		  valor = quant * 3.90;

		}else{

		 if(codigo == 104){

		  valor = quant * 4.20;

		}else{

		 if(codigo == 105){

		  valor = quant * 1.75;

		 }else{

		  printf("\n codigo invalido ");



		 }

		 }

		}

   }

  }

 }



 */

 /*



 if(codigo == 100)

		valor = quant * 2.50;



  if(codigo == 101)

		valor = quant * 4.75;



	  if(codigo == 102)

		valor = quant * 5.20;



	   if(codigo == 103)

		  valor = quant * 3.90;



		 if(codigo == 104)

		  valor = quant * 4.20;



		 if(codigo == 105)

		  valor = quant * 1.75;



		 if((codigo!=100) && (codigo != 101) && (codigo !=102)&& (codigo !=103)&& (codigo !=104)&& (codigo !=105) )

      //if(codigo < 100 || codigo > 105 )

      //(valor==0)

		  printf("\n codigo invalido ");





	*/



	switch	(codigo){

  case 100:

    valor = quant * 2.50;

    break;

  case 101:

    valor = quant * 4.75;

    break;

  case 102:

    valor = quant * 5.20;

    break;

  default:

	  printf("\n codigo invalido ");



	}









 printf ("\n O VALOR E SER PAGO E %.2f \n", valor);



return 0;



}
