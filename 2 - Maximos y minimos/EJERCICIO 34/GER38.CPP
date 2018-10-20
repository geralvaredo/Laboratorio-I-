#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main () {

//declaro variables de puntaje
int ptint,ptcult,ptbel ;


//declaro variables generales
int ptgen, ptgenmax, ptmingen ;


//declaro acumuladores
int acumint=0,acumcult=0, acumbel=0;


//declaro variable del menu
int opcion;


//declaro variable para el slot de memoria
int flag=0 ;


//declaro variable de nombre y apellido
char nomape[25], maxnompe [25], minompe [25];

clrscr () ;
	      for( ; ; ) {
	      printf("\n MENU:\n 1-carga\n 2-concursante mayor puntaje\n 3-puntaje general\n 4-puntaje menor") ;
	      scanf(" %d",&opcion) ;
	      switch(opcion) {
			     case 1:
				    for(int i=0;i<3;i++) {
				    //carga de nombre y apellido
				    gets(nomape); //reconoce espacio
				    printf(" \n ingrese nombre y apellido: ") ;
				    fflush(stdin) ;
				    scanf("%s",&nomape) ;

				    //carga de puntajes
				    printf("\n ingrese puntaje de inteligencia");
				    scanf("%d",&ptint) ;
				    printf("\n ingrese puntaje de cultura") ;
				    scanf("%d",&ptcult) ;
				    printf("\n ingrese puntaje de belleza") ;
				    scanf("%d",&ptbel) ;

				    //opero acumuladores
				    acumint = acumint + ptint  ;
				    acumcult = acumcult + ptcult ;
				    acumbel = acumbel + ptbel   ;

				    // sumatoria general de de los puntajes
				    ptgen =ptgen + ptint + ptcult + ptbel ;


				    //declaro de maximos
				    if (flag=0 ||  ptgen > ptgenmax) {
				    ptgenmax = ptgen  ;
				    strcpy (maxnompe,nomape) ;
				    flag = 1 ;
				    } //cierre del IF

					}//cierre del for

				     //declaro minimo
				    if ( acumcult < acumint && acumcult< acumbel ) {
				     ptmingen = acumcult ;

				    }// Cierre del IF 1

				    if (acumint < acumcult && acumint< acumbel) {
				     ptmingen = acumint;
					   }//cierre del IF 2
				     else {
				      ptmingen = acumbel;


					  }// cierre del ELSE



				    break ;
			     case 2:
				    printf("\n la concursante de mayor puntaje es: %s",maxnompe) ;
				    break ;
			     case 3:
				    printf("\n puntaje total en inteligencia : %d",acumint) ;
				    printf("\n puntaje total en cultura : %d",acumcult);
				    printf("\n puntaje total en belleza: %d",acumbel) ;
				    break ;

			     case 4:
				    printf("\n puntaje menor acumulado: %d",ptmingen) ;
				    break;








	      }//cierre del switch



	      }//cierre del for infinito








 }//cierre del main





