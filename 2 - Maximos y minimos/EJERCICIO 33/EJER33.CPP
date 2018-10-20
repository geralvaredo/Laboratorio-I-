#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


void main ()

{
 int agua,maxagua,minagua, flag=0,flag1=0, contagua=0 ;

 char dia[10], maxdia[10],mindia[10], seguir ;

 float prom ;


	      do{

		 printf("\n Ingrese cantidad de agua en milimetros:  ") ;
		 scanf("%d",&agua) ;

		 contagua = contagua + agua ;

		 printf("\n Ingrese dia ") ;
		 printf("\n L:lunes M:martes MI:miercoles J:jueves V:viernes S:sabado D:domingo\n ") ;
		 printf("Opcion:  ") ;
		 scanf(" %c",&dia) ;
		 tolower(getche(dia));

			while(dia !='l' && dia!='m' && dia !='mi' && dia !='j' && dia !='v' && dia!='s' && dia!='d')

			{
			     printf("\n Error Reingrese dia:   ") ;
			     scanf(" %c",&dia) ;
			     
			}


			if( agua>maxagua || flag==0)

			{
			  strcpy(maxdia,dia) ;
			  flag=1 ;
			  break ;
			}


			if( agua<minagua || flag1==0)

			{
			 strcpy(mindia,dia) ;
			 flag=1 ;
			}
			prom =(float) contagua / 30  ;

		printf("\n El promedio de agua es: %d",prom) ;
		printf("\n El dia de mayor lluvia: %s",maxdia) ;
		printf("\n El dia de menor lluvia: %s",mindia) ;

		printf("\n Desea continuar ? \n Si:s NO:n \n") ;
		printf("Opcion:  ") ;
		scanf(" %c",&seguir) ;



	       }while(seguir=='s') ;


}
