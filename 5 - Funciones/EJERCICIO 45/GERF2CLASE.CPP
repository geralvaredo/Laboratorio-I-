#include <stdio.h>
#include <conio.h>



int min (int , int , int ) ;



void main ()  {

int num1,num2,num3 ;

int x ;


clrscr () ;

					printf("ingrese primer numero") ;
					scanf("%d",&num1) ;

					printf("ingrese segundo numero") ;
					scanf("%d",&num2) ;

					printf("ingrese tercer numero") ;
					scanf("%d",&num3) ;
					x= min(num1,num2,num3);

					printf("el minimo es: %d",x) ;


					getch () ;

					}//cierre del main

	int min ( int j, int k, int l)
	{
	int min ;



	if ( j<k && j<l )  {
		 min = j  ;
	} //cierre del if


		else {

							if ( k<j && k<l) {
									min = k ;
									}//cierre del if

							else {
								min = l ;
									}  //cierre del else

								return min ;

		  }//cierre del else primero

	 } //cierre del desarrollo de la funcion



