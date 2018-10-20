#include <stdio.h>
#include <conio.h>

void main ()

{
  long int legajo ;
  int sueldo ;
  int sexo ;
  int cont1=0 ;
  int cont2=0 ;
  char seguir ;
  clrscr() ;
	       do{
		   printf("\n ingrese numero de legajo:  ") ;
		   scanf("%ld",&legajo) ;

		   printf("\n Ingrese sueldo:   ") ;
		   scanf("%d",&sueldo) ;

		   printf("\n Ingrese sexo \n1-Femenino 2-Masculino \n    ") ;
		   printf("Opcion:  ") ;
		   scanf("%d",&sexo) ;

			while(sexo!=1 && sexo!=2)

			{
				printf("\n Error, reingrese :  ") ;
				scanf("%d",&sexo) ;

			}

			if (sexo==1 && sueldo>500)

			{
				cont1++ ;

			}

			if(sexo==2 && sueldo<400)

			{
				cont2++;

			}

		printf("\n La cantidad de mujeres que ganan +500 son : %d",cont1) ;
		printf("\n La cantidad de hombres que ganas -400 son : %d",cont2) ;

		printf("\n\n Desea continuar ?: \n Si:s NO:n \n ") ;
		printf("Opcion:  ") ;
		scanf(" %c",&seguir) ;


		}while(seguir=='s') ;




}