#include <stdio.h>
#include <conio.h>

void main ()

{
  int num1,num2,aux ;
  clrscr() ;

			printf("\n ingrese primer numero:  ") ;
			scanf("%d",&num1) ;
			printf("\n ingrese segundo numero: ") ;
			scanf("%d",&num2) ;

			aux = num1 ;
			num1= num2 ;
			num2 = aux ;

		       printf("\n %d",num1) ;
		       printf("\n %d",num2) ;

  getch () ;
}