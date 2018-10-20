#include<stdio.h>
#include<conio.h>
void main(){
 int radio, longitud, area ;

 clrscr();

	  printf("ingrese radio");
	  scanf("&d",&radio);
	  area= 3.14 * (radio*radio);
	  longitud= 2* 3.14*radio ;
	  printf(" el area del circulo es:%d",area) ;
	  printf("la longitud de la circunferencia:%d",longitud) ;
	  getch();
}