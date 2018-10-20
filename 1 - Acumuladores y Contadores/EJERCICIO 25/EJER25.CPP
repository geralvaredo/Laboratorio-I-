#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main ()

{


    int cont=0, cont2=0 ;
    float peso ;
    char empleado[40] ;
    char seguir ;

		   do{

		       clrscr() ;
		       printf("\n INGRESE EMPLEADO:  ") ;
		       fflush(stdin) ;
		       gets(empleado) ;

		       printf("\n INGRESE SU PESO: ") ;
		       scanf("%f",&peso) ;

			if (peso<=80)
		       {
			cont++;
		       }

		       if(peso>=80)
		       {
		       cont2++ ;
		       }



		      printf("\nDesea Continuar ?  SI:s NO:n   ") ;
		      scanf(" %c",&seguir) ;

		      getch() ;


		     }while(seguir=='s') ;



		   printf("\n empleados con peso hasta 80: %d",cont) ;
		   printf("\n empleados con peso inclusive y +80: %d",cont2) ;



	      getch() ;
}