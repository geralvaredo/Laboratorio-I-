  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  #include<string.h>
  void main ()
  {
   int legajo,maxlegmas,maxlegfem ;

   int sn, maxsn , edad ,opcion, maxedad ;

   int fem =0, mas=0, flag=0, flag2=0 ;

   int contmas=0,contfem=0, empleados=0, sutotal=0;

   float pormas, porfem ;

   char nomape[40], maxfem[40] , maxmas[40] ;

   char sexo, rta, seguir ;

		    for( ; ; )
	      {
		      clrscr () ;
		     printf("menu \n 1-carga \n 2- mostrar \n 3- salir ") ;
		     scanf(" %d",&opcion);

		 switch(opcion)
		 {

		  case 1 :
			    do {
			    printf("\n ingrese numero de legajo: \n") ;
			    scanf(" %d",&legajo) ;

			    while ( legajo <1000 || legajo >=10000)

			    {
				printf(" \n error reingrese:  ") ;
				scanf(" %d",&legajo) ;

			    }//WHILE LEGAJO ENTRE 0 A  999

			    printf ("\n ingrese nombre y apellido:\n  ") ;
			    fflush(stdin) ;
			    scanf(" %s",&nomape[40]) ;



			    printf("\n ingrese sueldo neto: \n") ;
			    scanf(" %d",&sn) ;

			    while ( sn<1500 && sn>10000)

			    {

				 printf("\n los sueldos deben ser entre 1500 y 10000  reingrese por favor \n ") ;
				 scanf(" %d",&sn) ;

			    }//WHILE SUELDO NETO ENTRE 1500 Y 10000


			    printf("\n ingrese tipo de sexo \n F:femenino M:masculino ") ;
			    scanf(" %c",&sexo) ;

			    while ( sexo!='f' &&  sexo!='m')

			    {

				 printf("\n error reingrese sexo F:femenino M:masculin \n") ;
				 scanf (" %c",&sexo) ;

			    }//WHILE SEXO CON F O M

				if ( sexo=='f')
				{

				     fem++ ;
				     empleados++ ;
				}//IF

				if ( sexo=='m')
				{

				     mas++ ;
				     empleados++;
				}//IF

			    printf("\n ingrese edad: \n") ;
			    scanf(" %d",&edad) ;

			    while (edad<18 && edad>65)

			    {
				printf("error la edad es entre 18 y 65 reingrese") ;
				scanf("%d",&edad) ;

			    }//WHILE EDAD ENTRE 18 Y 65

				if (sn>1500 && sexo=='m')

				{
				    contmas++ ;

				}//IF

				if(edad>=38 && sexo=='f')

				{
				  contfem++ ;

				}//IF

				pormas= (float) (contmas*100) / empleados ;
				porfem= (float) (contfem*100) / empleados ;
				sutotal =  sutotal + sn  ;

				if ( flag==0 || sn > maxsn )
				{
				  if( sexo=='m' )
				  {
				    maxsn = sn  ;
				    maxlegmas = legajo ;
				    strcpy(maxmas,nomape);
				    flag=1;

				  }// IF

				}//IF 2

				 if ( flag2==0 || edad > maxedad)
				 {
				  if(sexo=='f')
				  {
				    maxedad = edad ;
				    maxlegfem = legajo ;
				    strcpy (maxfem,nomape) ;
				    flag2=1  ;

				  }//IF
			       }//IF 2

			       printf("desea continuar?  s/n " ) ;
			       scanf(" %c",&rta) ;


			       }while (rta=='s') ;

			       break ;


		  case 2:
			   printf("\n la cantidad de masculinos que cobran mas de 1500: %d",contmas) ;

			   printf("\n la cantidad de mujeres mayores de 38 : %d",contfem) ;

			   printf("\n el porcentaje de hombres es: %.2f ",pormas ) ;

			   printf("\n el porcentaje de mujeres es: %.2f ",porfem ) ;

			   printf("\n el sueldo total de los empleados: %d ",sutotal) ;

			   printf("\n el hombre de mayor sueldo es: %d , %s ",maxlegmas,maxmas[40]) ;

			   printf("\n la mujer de mayor edad es: %d , %s ",maxlegfem,maxfem[40] ) ;

			   getch () ;
			   break ;


		  case 3 :
			  printf("\n desea salir? s/n " ) ;
			  scanf(" %c",&seguir) ;

			  break ;
		 }//SWITCH

		  if (seguir=='s'){break;}

	      }//FOR INFINITO


  }//MAIN