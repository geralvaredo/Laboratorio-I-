#include <stdio.h>
#include <conio.h>

void main () {
int vector[10] ;
int num  ;
int numero1  ;
int numero2 ;
int sum  ;
int pos ;
int flag =0 ;
char rta ;

clrscr () ;
	       for ( int i=0;i<10;i++) {

			printf("ingrese un numero:\n ");
			scanf("  %d",&vector[10]) ;

		 }//cierre del for

				    for( i=0 ; i<10;i++) {

				    printf(" %d",vector[i]) ;
					}

				    printf(" eliga la posicion a sumar " ) ;

				    scanf(" %d",&numero1) ;
				    numero1= pos ;
				      pos= vector[i] ;
				    printf(" eliga la segunda " ) ;
				    scanf(" %d",&numero2) ;
				     numero2 = pos ;
				      pos =vector[i];
				     sum = numero1 + numero2 ;




				    printf("la suma da: %d",sum) ;





		getch () ;


}//cierre del main