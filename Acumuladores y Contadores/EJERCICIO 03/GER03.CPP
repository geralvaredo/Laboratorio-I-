#include<stdio.h>
#include<conio.h>

void main () {
int num,num1,cont1=0,cont2=0 ;
clrscr() ;
	  for (num=0;num<10;num++) {
	      printf("ingrese un numero") ;
	      scanf("%d",&num1) ;

	       if (num1>0)	{
		    cont1++; }

	       else (num1<0);{
		    cont2++; }
	   }
	 printf("la cantidad de numero mayor a cero son:%d",cont1);
	 printf("la cantidad de numero menor a cero son:%d",cont2);
	  getch () ;

		 }