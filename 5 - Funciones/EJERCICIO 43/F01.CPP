#include<stdio.h>
#include<conio.h>

int validar (int, int )  ;

void main ()
{
int num[5] ;
float prom ;
int acum ;
int min, max ;
int flag=0 ;
 clrscr () ;

	       for(int i=0;i<5;i++)
	      {
	       printf("\n ingrese un numero \n") ;
	       scanf("%d",&num[i]) ;


	      }//FOR

		 for( i=0;i<5;i++)
		 {


		 num[i]  = validar (-100, 100) ;
		acum = acum + num[i] ;
		prom = (float) acum /5;



		   if ( flag==0 ||  num[i] > max )
		       {   max = num[i] ;
			 flag = 1  ;

		   }//IF


		   if (flag==0 || num[i] < min )
			{   num[i]= min ;
			    flag= 1   ;

		   }//IF

		       }//FOR 2




		 printf(" el numero maximo es:\n %d",max) ;


		 printf(" el numero minimo es:\n %d",min) ;

		 printf(" el promedio es: \n %.2f",prom) ;
		 getch() ;

}//MAIN

   int validar (int min,int max)
   {
      int a ;
      if ( a >=min || a <=max )
	  return 1;
	  else
	  return 0 ;

     } //FUNCION