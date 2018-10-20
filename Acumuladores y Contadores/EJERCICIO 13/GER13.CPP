#include<stdio.h>
#include<conio.h>

void main () {
int cont=0 ;
clrscr () ;

		 for(int i=1; i<=100; i++) {

		    if(i%2==0) {
		       cont++ ;
		       printf("%d\n",i) ;

		    }//cierre del if
		    }//cierre del for
		  printf("la cantidad de numeros pares son:%d",cont) ;

		  getch() ;


}//cierre del main