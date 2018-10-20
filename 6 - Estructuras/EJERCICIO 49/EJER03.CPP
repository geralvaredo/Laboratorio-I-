#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

struct ealumnos

{
  int legajo;

  int nota ;

  char apellido[25] ;


} ;


  void main ()
{
  ealumnos  alumnos[30] ;

   int aux2,aux3,flag=0, opcion ;

   char aux[50],modificar,seguir ;
   clrscr() ;

     for( ; ; )

     {

	  printf("\n 1-Alta   2-Modificar 3-Salir 4-mostrar \n ") ;
	  printf("\n Opcion:  ") ;
	  scanf("%d",&opcion) ;

	  switch(opcion)

	  {
	    case 1:


			for ( int i=0 ; i<30 ;i++)

		     {
			 printf("\n Ingrese apellido:   ") ;
			 fflush(stdin) ;
			 gets(alumnos[i].apellido) ;

			 printf("\n Ingrese legajo:   ") ;
			 scanf("%d",&alumnos[i].legajo) ;

			 printf("\n Ingrese nota:   ") ;
			 scanf("%d",&alumnos[i].nota) ;


		     }//FOR
			 getch() ;

			 break ;

	     case 2:
			 printf("\n Ingrese Legajo:   ") ;
			 scanf("%d",&aux2) ;

			 printf("\n Ingrese nota:   ") ;
			 scanf("%d",&aux3) ;

			 for(i=0;i<30;i++)

			 {
				if(aux2 == alumnos[i].legajo)

				{
				 printf("\n Registro encontrado, desea modificarlo ?\n SI:s NO:n \n") ;
				 printf("\n Opcion:   " ) ;
				 scanf(" %c",&modificar) ;

				       if(modificar=='s')

				       {
					alumnos[i].nota = aux3 ;
					printf("\n Modificacion exitosa") ;
					flag=1 ;
				       break; }

				}else{printf("Registro no encontrado") ;
				getch () ;
				break ; }

			 }
			   getch() ;
			   break ;
	   case 3 :
		     printf("\n Desea continuar ? \n SI:s NO:n ") ;
		     printf("\n Opcion:  ") ;
		     scanf(" %c",&seguir);
		     getch() ;
		     break ;

	   case 4:
		   printf("\n LEGAJO\t    APELLIDO\t   NOTA ") ;
		   printf("\n%d\t  %s\t  %d",alumnos[i].legajo,alumnos[i].apellido,alumnos[i].nota) ;
		    getch () ;
		    break ;

	  }//SWITCH

	   if(seguir=='n')
	   {break; }


     } //FOR INFINITO



}//main
