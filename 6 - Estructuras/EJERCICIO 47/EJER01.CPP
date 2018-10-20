#include <stdio.h>
#include <conio.h>

   struct ejugador

   {
	char nombre[20] ;
	char equipo[25] ;
	int pj    ;
	int goles  ;
	float promgol ;





   }; //ESTRUCTURA




   void main ()

{
   clrscr () ;

   ejugador jugadores[2] ;

   for(int i=0 ; i<2;i++)

   {
     printf("\n INGRESE NOMBRE:  ") ;
     fflush(stdin) ;
     gets(jugadores[i].nombre) ;

     printf("\n INGRESE EQUIPO:  ") ;
     fflush(stdin) ;
     gets(jugadores[i].equipo) ;

     printf("\n INGRESE PARTIDOS JUGADOS:  ") ;
     scanf("%d",&jugadores[i].pj) ;

     printf("\n INGRESE GOLES:  ") ;
     scanf("%d",&jugadores[i].goles) ;

     jugadores[i].promgol = (float) jugadores[i].pj / jugadores[i].goles ;


   }//FOR

      printf("\n JUGADORES\tEQUIPO\t\tPJ\tGOLES\tPROMEDIO \n") ;


    for ( i=0 ; i<2 ; i++ )

    {
      printf(" %s\t\t%s\t\t%d\t%d\t%.2f \n" ,jugadores[i].nombre,jugadores[i].equipo,jugadores[i].pj,jugadores[i].goles,jugadores[i].promgol) ;

    }//FOR

     getch() ;



}//MAIN