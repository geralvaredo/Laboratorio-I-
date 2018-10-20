 #include<stdio.h>
 #include<conio.h>
 void main ()
  {
    int opcion ;
    int num1,num2 ;
    int suma ;
    int resta ;
    int multi ;
    int divi ;
    char seguir ;
    clrscr () ;
		     for ( ; ; )
		    {
			printf("\n 1-SUMA \n 2-RESTA \n 3-MULTIPLICACION \n 4-DIVISION \n") ;
			scanf("%d",&opcion) ;

			 switch(opcion)
			  {
					case 1:
						do{
						printf("\n ingrese primer numero:\n ") ;
						scanf("\n %d",&num1) ;
						printf("\n ingrese segundo numero:\n ") ;
						scanf("\n %d",&num2) ;

						suma = num1 + num2 ;
						printf("\n el resultado es: %d ",suma) ;

						printf ("\n desea continuar ? ") ;
						scanf("%c",seguir) ;
						}while (seguir=='s');
						if(seguir==!'s') {break;}
						break ;

					case 2:
						do {
						printf("\n ingrese primer numero:\n ") ;
						scanf("\n %d",&num1) ;
						printf("\n ingrese segundo numero:\n ") ;
						scanf("\n %d",&num2) ;

						resta= num1 - num2 ;
						printf("\n el resultado es: %d",resta) ;

						printf ("\n desea continuar ? ") ;
						scanf("%c",seguir) ;
						}while (seguir=='s');
						break ;

					case 3:
						do{
						printf("\n ingrese primer numero:\n ") ;
						scanf("\n %d",&num1) ;
						printf("\n ingrese segundo numero:\n ") ;
						scanf("\n %d",&num2) ;

						multi = num1 * num2 ;
						printf("\n el resultado es: %d ",multi) ;

						printf ("\n desea continuar ? ") ;
						scanf("%c",seguir) ;
						}while (seguir=='s') ;
						break ;
					case 4:

						do {
						printf("\n ingrese primer numero:\n ") ;
						scanf("\n %d",&num1) ;
						printf("\n ingrese segundo numero:\n ") ;
						scanf("\n %d",&num2) ;

						divi = num1 / num2 ;
						printf("\n el resultado es: %d ",divi) ;


						printf ("\n desea continuar ? ") ;
						scanf("%c",seguir) ;

						}while (seguir=='s') ;

						break ;


			  }//SWITCH


		    }//FOR INFINITE
		   getch() ;

  }// MAIN