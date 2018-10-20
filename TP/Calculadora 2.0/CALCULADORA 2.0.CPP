#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <aritmetica.h>
#include <especial.h>



void suma ( ) ;   

void resta  (  ) ;  

int multi (  ) ; 

float division (  ) ; 

void potencia ( ) ; 

void raiz_cuadrada ( ) ; 

void raices_cuadratica (float , float , float ) ; 

int factorial ( int ) ; 

void main ()
{
int menu,num1,fac,t,w ;
float  resul, a,b,c,div ;
char seguir, salir ;

	       for ( ; ; )
	     {
	       clrscr () ;
	       //MENU PRINCIPAL
	       printf("\n\n\t\t\t MENU \n\n\n\t 1-SUMA \t\t 2-RESTA \n\n\t 3-MULTIPLICACION \t 4-DIVISION \n\n\t 5-POTENCIA \t\t 6-RAIZ CUADRADA \n\n\t 7-EC. 2§GRADO \t\t 8-FACTORIAL \n\n\n\t\t\t 9-SALIR \n") ;
	       printf("\n OPCION: ") ;
	       scanf("%d",&menu) ;

		      switch (menu)
		    {
		      case 1:
			       // -- <SUMA>-- \\
			      do{

				   suma ( ) ; //LLAMADA A LA FUNCION


				  printf("\n\n\n DESEA CONTINUAR? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch () ;
				}while (seguir=='s') ;


				  break ;

		      case 2 :
			       // --<RESTA>-- \\
			      do{

				  resta ( ) ; //LLAMADA A LA FUNCION


				  printf("\n\n\n DESEA CONTINUAR? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch () ;

				}while (seguir=='s') ;

				  break ;

		      case 3 :
			      // --<MULTIPLICACION>-- \\

			      do{
				  resul =  multi( ) ;

				  printf("\n LA MULTIPLICACION ES: %.2f ",resul) ;

				  printf("\n\n\n DESEA CONTINUAR? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch() ;


				}while (seguir=='s') ;

				  break ;

		      case 4 :
			      // --<DIVISION>-- \\

			      do{

				 div =  division( ) ;

				  printf("\n LA DIVISION ES: %.2f ",div) ;

				  printf("\n\n\n DESEA CONTINUAR? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch() ;


				}while (seguir=='s') ;

				  break ;


		      case 5 :
			       // --<POTENCIA>-- \\

			      do{

				  potencia ( ) ;


				  printf("\n\n\n DESEA CONTINUAR? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch() ;


				}while (seguir=='s') ;

				  break ;

		      case 6 :
			       // --<RAIZ CUADRADA>-- \\

			      do{

				  raiz_cuadrada( )  ;

				  printf("\n\n\n desea continuar? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;



				}while (seguir=='s') ;

				  break ;
		      case 7 :
			       //--<RAICES DE ECUACION DE 2DO GRADO>--\\

			      do{

				  printf("\n\n INGRESE VALOR DE A:  ") ;
				  scanf("%f",&a) ;
				  printf("\n\n INGRESE VALOR DE B:  ") ;
				  scanf("%f",&b) ;
				  printf ("\n\n INGRESE VALOR DE C:  ") ;
				  scanf("%f",&c) ;

				  raices_cuadratica (a,b,c) ;

				  printf("\n\n\n desea continuar? \n\n SI:s  NO:n :  ") ;
				  scanf(" %c",&seguir) ;

				  getch () ;

				}while (seguir=='s') ;


				  break ;


		      case 8 :
				 //--<FACTORIAL>--\\

			      do{

				  printf("\n\n INGRESE VALOR N:  ") ;
				  scanf("%d",&num1) ;

				  if (num1==0)

				  {
				   printf("\n\n EL FACTORIAL DE: 0 \n\n ES: 1") ;


				   printf("\n\n\n desea continuar? \n\n SI:s NO:n   ") ;
				   scanf(" %c",&seguir) ;
				   getch() ;
				  }

				  else{

					fac = factorial (num1);


					printf( "\n\n EL FACTORIAL DE: %d \n\n ES: %d",num1,fac) ;


					printf("\n\n\n desea continuar? \n\n SI:s  NO:n   ") ;
					scanf(" %c",&seguir) ;

					getch() ;

				      }
				}while (seguir=='s') ;


				 break ;

		      case 9:

			      //--<SALIR>--\\
			      printf("\n\n\n DESEA SALIR? \n\n SI:s  NO:n :  ") ;
			      scanf(" %c",&salir) ;
			      break ;

		    }// SWITCH

		     if ( salir=='s')
		      {break;}

		     getch () ;

	     }// FOR INFINITO


}//MAIN






