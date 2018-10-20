 #include<stdio.h>
 #include<conio.h>

 void main () {
 //variables
 float cent, pul ;
 int pies ;
clrscr () ;
		 printf("ingrese centimetros") ;
		 scanf("%f",&cent) ;
		 //333.3 centimetros son 11.2 pulgadas
		 pul= (cent*11.2) /333.3 ;
		 // 333,3 centimetros son 10 pies
		 pies= (cent*10) /333.3 ;
		 printf (" la cantidad de pulgadas es: %.1f",pul) ;
		 printf ( " la cantidad de pies es : %d",pies) ;

		 getch () ;






		   }//cierre del main
