#include <stdio.h>
#include <conio.h>


   void main ()
{

  clrscr () ;

		printf("\n\n los divisibles por 2:\n\n") ;
		for (int i=0 ; i<=100; i++)

		{
		     if(i%2==0)

		     {
		       printf("\t  %d\t",i) ;

		     }//IF

		}//FOR


		printf("\n\n los divisibles por 3:\n\n") ;

		for ( i=0 ; i<=100; i++)

		{
		    if(i%3==0)

		     {
		       printf("\t %d\t",i) ;
		     }//IF

		}//FOR

		printf("\n\nlos divisibles por 2 y 3:\n\n") ;

		for( i=0;i<=100;i++)

		{
		    if(i%2==0 && i%3==0)
		    {
		      printf("\t %d\t",i) ;


		    }//IF

		}






      getch() ;




}//MAIN