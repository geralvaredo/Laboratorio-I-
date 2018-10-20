#include<stdio.h>
#include<conio.h>

 int valida ( int , int , int ) ;

 void main () {
 int x ;
 int num1 ;
 clrscr () ;
						printf ( " ingrese numero a validar") ;
						scanf("%d",&num1) ;


						while( valida  (num1,0,100) )   {
								printf(" error reingrese: ") ;
								scanf("%d",&num1)  ;
						 } //cierre del while

						  if ( valida (num1,100,1)) {

						  printf( " el numero esta dentro del rango");
						  scanf("%d",&num1) ;

						  }

						  getch () ;


						}//cierre del main

	int valida ( int a, int b , int c ) {
    
	if ( a < b || a> c )
		 return 1 ;
		  else
		  return 0 ;
													 }// cierre de la funcion




