#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#define T  2



  struct eempleado
 {

  long int dni  ;

  int edad ;

  char nomape[30] ;

  char direccion[25] ;

  char localidad[20] ;

  char categoria[5] ;

  float hs, sn ;


 } ;

void sueldo_neto (eempleado[], int ) ;

void validar_cadena ( char [], int ) ;

void validar_categoria (char[],int ) ;

long int validar_dni_unico ( long int , long int ) ;

long int validar_dni ( long int , long int ) ;

int validar_edad ( int , int, int  ) ;

int validar_opcion (int ) ;

char validar_seguir ( char) ;


void main()

{
  eempleado empleado[T], auxempleado ;



  long int auxdni, dniu  ;



  int opcion,auxi,flag=0,flag1=0,flag2=0,i=0 ,j=0 ;



  char seguir, aux[50] ;



  float sn[T],auxf, maxsueldo,minsueldo   ;



  clrscr() ;


	    for( ; ; )
	    {
		printf("\n 1-ALTA \n\n 2-MODIFICACION  \n\n 3-LISTAR \n\n 4-BUSQUEDA DE LOCALIDAD \n\n 5-EMPLEADO MAXSUELDO \n\n 6-EMPLEADO MINSUELDO \n\n 7-SALIR\n\n") ;
		printf("\n Opcion:    ") ;
		scanf("%d",&opcion) ;
		validar_opcion (opcion) ;
		switch(opcion)
		{
			  case 1:
				     clrscr() ;
				     if(i<T)

				   {
				     printf("\n INGRESE DNI :  ") ;
				     scanf("%ld",&auxdni) ;
				     dniu = validar_dni_unico(auxdni,empleado[i].dni) ;
				     validar_dni (dniu,99999999)   ;
				     empleado[i].dni= auxdni ;

				     printf("\n Ingrese Nombre y Apellido:   ") ;
				     fflush(stdin) ;
				     gets(aux);

				     validar_cadena (aux,29) ;
				     strcpy(empleado[i].nomape,aux) ;

				     printf("\n Ingrese Direccion:  ") ;
				     fflush(stdin) ;
				     gets(aux) ;

				     validar_cadena (aux,24) ;
				     strcpy(empleado[i].direccion,aux) ;

				     printf("\n Ingrese localidad:  ") ;
				     fflush(stdin) ;
				     gets(aux) ;

				     validar_cadena (aux,19) ;
				     strcpy(empleado[i].localidad,aux) ;

				     printf("\n Ingrese Edad:   ") ;
				     scanf("%d",&auxi) ;

				     validar_edad (auxi,17,64) ;
				     empleado[i].edad = auxi ;

				     printf("\n Ingrese Categoria(A,B,C)\n") ;
				     printf("\n  Opcion:   ") ;
				     fflush(stdin) ;
				     gets(aux) ;


				     validar_categoria (aux,1 ) ;
				     strcpy(empleado[i].categoria,aux) ;


				     printf("\n Ingrese horas trabajadas:  ") ;
				     scanf("%f",&empleado[i].hs) ;


				     sueldo_neto(empleado,i) ;


				}else{
				      printf("\n La Fabrica Esta Llena") ;
				      getch() ;
				      clrscr() ;
				      break ;
				     }
				i++ ;
				getch () ;
				clrscr() ;
				break ;



			  case 2:
				  clrscr() ;
				  printf("\n Ingrese DNI:  ") ;
				  scanf("%ld",&auxdni) ;
				  validar_dni (auxdni,99999999) ;

				  for( i=0;i<T;i++)

				  {
					if(auxdni == empleado[i].dni)

					{
						printf("\n Registro Encontrado, Desea modificar las horas ? \n SI:s NO:n\n") ;
						printf("\n Opcion:  ") ;
						scanf(" %c",&seguir) ;
						tolower(seguir) ;

						validar_seguir (seguir) ;


					if(seguir=='s')

					 {


						printf("\n Ingrese las horas trabajadas: ") ;
						scanf("%f",&auxf);
						empleado[i].sn = auxf ;
						sueldo_neto (empleado,i) ;
						printf("\n Modificacion Realizada") ;
						flag=1 ;
						getch() ;
						break ;


					 }else{

						printf("\n Registro no modificado") ;
						getch();
						clrscr();
						break;
					       }

				      }
				  }//FOR

				    if(flag==0)

				     {
				      printf("\n Registro no encontrado") ;
				      getch();
				      clrscr();
				      break ;
				     }

				      getch() ;
				      clrscr() ;
				      break;



		    case 3:
				clrscr() ;
				for(i=0;i<T-1;i++)

				{

					for( j=i+1;i<T;i++)

					{
						if(empleado[i].sn<empleado[j].sn)

						{

							auxempleado = empleado[i] ;
							empleado[i] = empleado[j] ;
							empleado[j] = auxempleado ;

						}//IF

					}//FOR J

				}//FOR I

				printf("\n   DNI\t       NOMBRE Y APELLIDO      SUELDO NETO       LOCALIDAD\n") ;

				for(i=0;i<T;i++)

				{printf(" %ld       %s         %.2f             %s\n",empleado[i].dni,empleado[i].nomape,empleado[i].sn,empleado[i].localidad) ;}

				getch() ;
				clrscr();
				break ;

		     case 4:

			     printf("\n Ingrese Localidad:     ") ;
			     fflush(stdin);
			     gets(aux) ;
			     validar_cadena (aux,19) ;
			     strlwr(aux) ;

			     for(i=0;i<T-1;i++)

			     {

				for(j=i+1;j<T;j++)

				{

				     if(strcmp(empleado[i].nomape,empleado[j].nomape)>0)

				     {

					auxempleado = empleado[i];
					empleado[i] = empleado[j] ;
					empleado[j] = auxempleado ;

				     }//IF

				}//FOR J

			     }//FOR I

				clrscr ()  ;

				printf("\n   DNI\t                NOMBRE Y APELLIDO \t           DIRECCION  \n") ;

				for(i=0;i<T;i++)
			       {

				if(strcmp(aux ,empleado[i].localidad)==0)
				{
				     flag1=1 ;
				     printf(" %ld               %s                    %s\n",empleado[i].dni,empleado[i].nomape,empleado[i].direccion) ;
				}

			       }//FOR





			       if(flag1==0)

				   printf("\n No Existe Ninguna Persona Con Esa Localidad");
				   getch() ;
				   clrscr();
				   break ;





		     case 5:
				printf("\n\nEmpleado Con Maximo Sueldo:\n") ;

				for(i=0;i<T;i++)

				{

					if(flag2==0 || empleado[i].sn>maxsueldo)

					{
						maxsueldo = empleado[i].sn ;
						flag2=1 ;

					}//IF

				}//FOR

				for(i=0;i<T;i++)

				{

					if(maxsueldo==empleado[i].sn)

					{
					 printf("\n\n DNI: %ld  \n\n NOMBRE Y APELLIDO: %s \n\n SUELDO: %.2f\n\n",empleado[i].dni,empleado[i].nomape,empleado[i].sn) ;

					}

				}//FOR
				getch() ;
				clrscr () ;
				break ;




		     case 6 :
				 printf("\n Empleado con Menor Sueldo: \n");

				 for(i=0;i<T;i++)

				 {
				     if(flag2==0 || empleado[i].sn < minsueldo)

				     {
				       minsueldo = empleado[i].sn ;
				       flag2=1 ;



				     }//IF

				 }

				 for(i=0;i<T;i++)

				 {
				    if(minsueldo == empleado[i].sn)

				    {

				      printf("\n\n DNI: %ld  \n\n NOMBRE Y APELLIDO: %s  \n\n SUELDO: %.2f\n\n",empleado[i].dni,empleado[i].nomape,empleado[i].sn) ;

				    }//IF

				 }//FOR

				 getch() ;
				 clrscr() ;
				 break ;



		     case 7:
			     printf("\n Desea salir ? \n SI:s NO:n\n ") ;
			     printf("\n Opcion:  ") ;
			     scanf(" %c",&seguir) ;
			     getch() ;
			     clrscr() ;
			     break ;
		 }//SWITCH

		   if(seguir=='s')

		   {break ;}



	    }//FOR INFINITO




}//MAIN

int validar_edad ( int edad, int menor, int mayor)

{
  while( edad<menor || edad>mayor)

  {
    printf("\n Error, Reingrese Edad:  ") ;
    scanf("%d",&edad) ;

  }

   return edad ;

}//VALIDAR EDAD

int validar_opcion (int opcion)

{
  while (opcion<1 || opcion>7)
  {
  printf("\n Error, Reingrese Opcion:   ");
  scanf("%d",&opcion) ;
  }
  return opcion ;
}





char validar_seguir (char seguir )

{
  while(seguir!='s' && seguir!='n')

  {
    printf("\n Error, Reingrese Opcion:  ") ;
    scanf(" %c",&seguir) ;
    tolower(seguir) ;


  }//WHILE

  return seguir ;

}//VALIDACION SEGUIR



long int validar_dni_unico ( long int auxdni, long int dniu)

{
  for (int i=0;i<1;i++)
  {
    while (auxdni == dniu)
    {
     printf("\n Registro Igual, Reingrese DNI:   ") ;
     scanf("%ld",&auxdni) ;
    }
  }
   return auxdni ;


}//DNI UNICO



long int validar_dni ( long int auxdni, long int largo)

{
  while ( auxdni > largo)

  {
     printf ("\n REINGRESE DNI: ") ;
     scanf("%ld",&auxdni) ;


  }//WHILE

  return auxdni ;


}//FUNCION VALIDAR DNI


void validar_cadena (char nomape [],int largo )

{
  while (strlen (nomape) > largo )

  {
    printf("\n Supera el maximo de caracteres. Reingrese:   ") ;
    fflush(stdin) ;
    gets(nomape) ;


  }//WHILE



}//FUNCION VALIDAR NOMBRE Y APELLIDO


void validar_categoria (char cat [],int largo)

{
  int i=0 ;
  while (strlen (cat) > largo  || cat[i]!='a' && cat[i]!='b' && cat[i]!='c' )

  {
   printf("\n Error, Reingrese categoria (A,B,C):  ");
   fflush(stdin) ;
   gets(cat) ;
   strlwr(cat) ;

  }




}// Categoria

void sueldo_neto (eempleado emp[], int a )

{
  if(emp[a].categoria =="a")

  {
   emp[a].sn = emp[a].hs * 50 ;
  }

  if(emp[a].categoria =="b")

  {
   emp[a].sn = emp[a].hs * 30.5 ;
  }

  if(emp[a].categoria =="c")
  {
   emp[a].sn = emp[a].hs * 20.67 ;

  }

}

//SUELDO NETO



