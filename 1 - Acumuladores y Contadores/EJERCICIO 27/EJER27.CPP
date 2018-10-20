#include <stdio.h>
#include <conio.h>

void main ()

{
  int lado1,lado2,lado3,suma ;

  clrscr() ;

	       printf("\n Ingrese lado 1:  ") ;
	       scanf("%d",&lado1) ;

	       printf("\n Ingrese Lado 2:  ") ;
	       scanf("%d",&lado2) ;

	       suma = lado1 + lado2 ;

	       printf("\n Ingrese lado 3:  ") ;
	       scanf("%d",&lado3) ;


	       while( suma< lado3 )

	       {
		printf("\n Error, Reingrese lado 3:  ") ;
		scanf("%d",&lado3) ;
	       }



	       if ( lado1==lado2)

	       {
		 printf("\n El Triangulo es isosceles") ;

	       }else{
		      printf("\n El Triangulo es escaleno") ;
		    }


	      getch() ;



}//main