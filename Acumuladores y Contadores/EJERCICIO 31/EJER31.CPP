#include <stdio.h>
#include <conio.h>

void main ()

{
  int num1, num2,cont=0, cont2=0;
  clrscr() ;

		 printf("\n Ingrese Numero:  ") ;
		 scanf("%d",&num1) ;

		 printf("\n Ingrese numero:  ") ;
		 scanf("%d",&num2) ;

		 for(int i=num1; i<num2;i++)

		 {

		  cont++ ;

			if(i%2==0)

			{
			 cont2++;
			}

		  printf("\n\t %d",i) ;
		 }




		  printf("\n la cantidad de num: %d",cont) ;
		  printf("\n la cantidad de num pares: %d",cont2) ;

  getch() ;





}