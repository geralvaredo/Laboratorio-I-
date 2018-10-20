#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main ()

{
 int horas, antiguedad ;
 float valor,bruto,descuento,neto ;
 char empleado[50] ;

 clrscr() ;

		      printf("\n Ingrese valor hora:  ") ;
		      scanf("%f",&valor) ;

		      printf("\n Ingrese nombre del empleado:  ") ;
		      fflush(stdin) ;
		      gets(empleado) ;

		      printf("\n Ingrese antiguedad:  ") ;
		      scanf("%d",&antiguedad) ;

		      printf("\n cantidad de horas al mes:  ") ;
		      scanf("%d",&horas) ;

		      bruto =(float)   (valor*horas) + (antiguedad*30) ;

		      descuento = (float)     ( (  (valor*horas) + (antiguedad*30)  )*13)/100 ;

		      neto = (float) bruto - descuento ;

		      printf("\n NOMBRE     ANTIGUEDAD     VALOR HORA      BRUTO      DESCUENTO      NETO\n") ;
		      printf("\n %s \t      %d a¤os\t     %.2f       %.2f       %.2f      %.2f",empleado,antiguedad,valor,bruto,descuento,neto) ;



		      getche() ;




}