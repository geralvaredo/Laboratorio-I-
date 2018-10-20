#include <stdio.h>
#include <conio.h>

void main ()

{
  int num,lim1, lim2 ;
  clrscr() ;

		      printf("\n Ingrese primer limite:  ") ;
		      scanf("%d",&lim1) ;

		      printf("\n Ingrese ultimo limite:  ") ;
		      scanf("%d",&lim2) ;

		      printf("\n ingrese numero:   ") ;
		      scanf("%d",&num) ;


		      if (num<lim2 && num>lim1)

		      {
		       printf("\n pertnece al intervalo de : %d y %d",lim1,lim2) ;
		      }else{
                            printf("\n no pertenece al intervalo de: %d y %d",lim1,lim2) ;
		      }


		     getch() ;



}