#include <stdio.h>
#include <conio.h>

void main ()

{ int Nnum;
  clrscr () ;
		printf("\n ingrese n numeros:  ") ;
		scanf("%d",&Nnum) ;

		printf("\n\tNUMERO CUADRADO CUBO \n") ;

		for ( int i=1 ; i<=Nnum; i++)

		{
		   printf("\n\t%d\t %d \t %d\n",i,i*i,i*i*i) ;

		}



	 getch() ;



}