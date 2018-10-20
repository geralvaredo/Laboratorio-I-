#include <stdio.h>
#include <conio.h>


void main ()
{
  int num ;
  int suma=0 ;
  int prod=0;
  int neg ;
  clrscr() ;
		for( int i=0;i<5;i++)
		{
		 printf("\n ingrese un numero:   ") ;
		 scanf("%d",&num) ;

			while(num==0)

			{
				printf("\n Error Reingrese:  ") ;
				scanf("%d",&num) ;
			}

			if(num>0)

			{
				suma= suma + num ;
			}
			if (num<0 && prod==0)

			{
			  prod =prod + num ;
			  prod=1;

			}
			if (num<0 && prod ==1 )

			{
			  prod= prod * num ;
			}

		}




		printf("\n la suma: %d",suma)  ;
		printf("\n el producto: %d",prod) ;

	       getch() ;

}//main