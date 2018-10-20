
#include<stdio.h>
#include<conio.h>
#include<ctype.h>


 struct edireccion
 {
   char calle [40] ;
   char localidad [50] ;
   int altura ;

 };

struct eempleado

{
  char nombre[20] ;
  edireccion direccion ;
  int edad ;
  char sexo ;



};


void main ()
{
   eempleado  empleado[10] ;


   for(int i=0 ; i<10 ; i++)

   {

     printf("\n INGRESE NOMBRE:  ") ;
     fflush(stdin) ;
     gets(empleado[i].nombre) ;

     printf("\n INGRESE CALLE :  ") ;
     fflush(stdin) ;
     gets(empleado[i].direccion.calle) ;

     printf("\n INGRESE LOCALIDAD: ") ;
     fflush(stdin) ;
     gets(empleado[i].direccion.localidad);


     printf("\n INGRESE ALTURA:  ") ;
     scanf("%d",&empleado[i].direccion.altura) ;


     printf("\n INGRESE EDAD:  ") ;
     scanf("%d",&empleado[i].edad) ;

     printf("\n INGRESE SEXO:  ") ;
     fflush (stdin) ;
     gets(empleado[i].sexo) ;

     while (empleado[i].sexo !='m' & empleado[i].sexo !='f')

     {
       printf("\n ERROR REINGRESE:  ") ;
       fflush(stdin) ;
       gets(empleado[i].sexo) ;

     }//WHILE

   }//FOR




  getch();
}