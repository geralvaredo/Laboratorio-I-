#include <stdio.h>
#include <conio.h>

void main () {
int num[5] ;
int maxnum ;
int flag=0;
int pos ;
clrscr () ;
	      for (int i=0;i<5;i++) {
		   printf("ingrese un numero \n") ;
		   scanf("%d",&num[i]) ;
			     }//cierre del for

	    for(i=0;i<5;i++) {


	   printf("\n%d",num[i]) ;



		 if (flag==0 || num[i]> maxnum) {
		  maxnum = num[i];
		   pos= i ;
		   flag=1   ;

		    }//cierre del if

		    }//cierre del for
		     printf("\n\n  el mayor es: %d",maxnum);

		     printf("\n\n fue ingresado en la pos %d",pos+1) ;





           	      getch () ;
}//cierre del main