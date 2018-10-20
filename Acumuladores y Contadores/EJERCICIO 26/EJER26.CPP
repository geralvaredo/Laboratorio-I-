#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main ()

{
  int vendedor ;
  float importe, ganvend;
  char seguir;
  clrscr() ;


		do{
		    printf("\n Ingrese vendedor 1,2 o 3\n") ;
		    printf("Opcion:   ") ;
		    scanf("%d",&vendedor) ;

			   while(vendedor !=1 && vendedor!=2 && vendedor !=3)

			   {
			     printf("\n Error, Reingrese vendedor\n");
			     printf("Opcion:   ") ;
			     scanf("%d",&vendedor) ;
			   }

		    printf("\n Ingrese importe:  ") ;
		    scanf("%f",&importe);

			   while(importe<0)

			   {
			     printf("\n Error, reingrese importe:  ") ;
			     scanf("%d",&importe) ;
			   }

		      ganvend =(float) (importe * 5) / 100 ;

		      printf("\n Ganancia del vendedor: %.2f\n",ganvend) ;



		      printf("\n Desea continuar? \n SI:s NO:n : ") ;
		      scanf(" %c",&seguir) ;
		      tolower(seguir) ;


		  }while (seguir=='s') ;



}//main

