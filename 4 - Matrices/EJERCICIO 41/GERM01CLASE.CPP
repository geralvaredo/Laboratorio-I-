
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main () {
int legajos[6];
int nota1[6];
int nota2[6] ;
int flag=0 ;
int ind ;
float promedios[6];
float max ;
char nombre[6][20], aux[50] ;

				for(int i=0;i<6;i++) {
				printf("\n ingrese nombre: \n") ;
				fflush(stdin) ;
				gets(aux) ;


				 while (strlen(aux) >19 )//no supere los 19 {
				 printf("error reingrese" ) ;
				 fflush(stdin) ;
				 gets(aux) ; }//cierre del while

				 strcpy(nombre[i],aux) //decir destino para la cadena i
				 printf("ingresar el legajo: " ) ;
				 scanf("%d",&legajos[i]) ;

				 printf("ingrese la primera nota") ;
				 scanf("%d",&nota1[i]) ;

				 printf("ingrese segunda nota") ;
				 scanf("%d",&nota2[i]) ;

				 promedios[i] = (float) (nota1[i] + nota2[i])/2

				}//cierre del for

				for( i=0;i<6;i++) {

				if(promedios[i] > max || flag==0)
				max = promedios[i] ;
				 ind = i  ;
				 flag = 1 _;
					  }//cierre del if


				}//cierre del for

				printf("el maximo promedio e %.2f  y pertenece a %s de legajo %d",max,nombre[ind],legajo[ind]) ;
				for(i=0;i<6:i++) {

				 if(promedios[i]==max] {
				 printf("nombre: %s legajo: %d \n",nombres[i],legajo[i]) ;
				     }//cierre del if
				}//cierre del for


getch();

}