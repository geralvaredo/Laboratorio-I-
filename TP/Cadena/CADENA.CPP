 #include<stdio.h>
 #include<conio.h>
 #include<ctype.h>
 #include<string.h>
 #include<validaciones.h>

  long int dni_unico ( long int, long int [], int ) ;  //DNI UNICO

  void validar_nomape ( char[], int ) ;

  void validar_direccion ( char[], int ) ;

  void validar_localidad (char[], int  ) ;

  int validar_edad ( int , int ) ;

  void validar_categoria ( char[], int , int ) ;

  float validar_sueldoneto ( float, char[], int ) ;

   void main ()

{
   int r=0 ;


   long int dni, auxdni ;


   char salir, auxiliar[80], ;

		 for ( ; ; )

		{
		 clrscr() ;
		 printf("MENU \n\n 1-ALTA \n\n 2-MODIFICACION \n\n 3-LISTAR \n\n 4-BUSCAR POR LOCALIDAD\n\n 5-EMPLEADO MAXIMO SUELDO \n\n 6-EMPLEADO MINIMO SUELDO \n\n 7-SALIR \n") ;
		 printf("\n\n OPCION: ") ;
		 scanf("%d",&opcion) ;


		       switch(opcion)

		      {
			case 1:
				 if ( i<39)
				{ clrscr () ;
				 printf("\n INGRESE DNI:  " ) ;
				 scanf("%ld",&auxdni) ;

				 auxdni = dni_unico (auxdni, dni,r )

				 if (auxdni =99999999)
				 { i-- ;
				 break ;
				 }

				 dni[i]=auxdni;
				 printf("\n INGRESE NOMBRE Y APELLIDO:  ") ;
				 fflush(stdin) ;
				 gets (auxiliar) ;
				 validar_nomape (auxiliar,29) ;
				 strcpy(nya[i],auxiliar) ;



				 printf("\n INGRESE DIRECCION:  ") ;
				 fflush(stdin) ;
				 get(auxiliar) ;

				 validar_direccion (auxiliar,24) ;
				 strcpy(direccion[i],auxiliar) ;



				 printf("\n INGRESE LOCALIDAD:  ") ;
				 fflush(stdin) ;
				 gets(auxiliar) ;

				 validar_localidad (auxiliar,19) ;
				 strcpy(localidad[i],auxiliar) ;
				 strlwr(localidad[i]) ;



				 printf("\n INGRESE EDAD:  ") ;
				 scanf( "%d",&edad) ;

				 edad = validar_edad (edad,18) ;




				 printf("\n INGRESE CATEGORIA: \n A:a B:b  C:c \n") ;
				 fflush(stdin) ;
				 get(auxiliar) ;


				 validar_categoria (auxiliar,1,i) ;
				 strcpy(categoria[i],auxiliar) ;


				 printf("\n INGRESE CANTIDAD DE HORAS TRABAJADAS:  ") ;
				 scanf(" %f",&chs) ;
				 validar_sueldoneto (chs,categoria[i],i) ;


				 }else{
				 printf("FABRICA LLENA DE EMPLEADOS") ;
				 getch() ;


				  break ;

		       case 2:

			      break ;

		       case 3:
			      break ;
		       case 4:
			      break ;
		       case 5:
			      break;
		       case 6:
			      break ;
		       case 7:

			       printf("\n DESEA SALIR? \n SI:s NO:n :  ") ;
			       scanf(" %c",&salir) ;

			       break ;

		      }//SWITCH

		      if (salir=='s')
		      {break;}

		      getch() ;


		}//FOR INFINITO












}// MAIN