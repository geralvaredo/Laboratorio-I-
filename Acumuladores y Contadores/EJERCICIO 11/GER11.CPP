 #include<stdio.h>
 #include<conio.h>

 void main () {
  //declaro variables
   int num  ;
   char rta ;

   clrscr ();
	       do {
	       printf("ingrese numero de dia") ;
	       scanf("%d",&num) ;
		    while(num<1 && num>7){
			    printf("error reingrese numero de dia");
			    scanf("%d",&num) ;

		      }//cierre del while

		     if(num==1) {
				printf("lunes") ;
		     }//cierre del if

		     if(num==2){
				printf("martes") ;
		     }  //cierre del if
		     if(num==3) {
				printf("miercoles") ;
		     }  //cierre del if
		     if(num==4) {
				printf("jueves") ;
		     } //cierre del if
		     if(num==5) {
				printf("viernes") ;
		     }  //cierre del if
		     if(num==6) {
				printf("sabado") ;
		     }  //cierre del if
		     if(num==7) {
				printf("domingo") ;
		     } //cierre del if
		     printf("desea continuar ?s/n") ;
		     scanf("%c",&rta) ;
		     }//cierre del "do"
		       while(rta=='s') ;





		     getch() ;

	     }//cierre del main



