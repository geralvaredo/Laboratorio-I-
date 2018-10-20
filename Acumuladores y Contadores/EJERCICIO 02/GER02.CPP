#include<stdio.h>
#include<conio.h>

void main () {
int num, cuad ;
clrscr () ;
					printf("ingrese un numero entero mayor que cero") ;
					scanf("%d",&num) ;
					while (num<=0)  {
							printf ("error reingrese") ;
							scanf("&d",&num) ;	}
					cuad=num* num  ;
					printf("el numero al cuadrado es:%d",cuad) ;
					}


