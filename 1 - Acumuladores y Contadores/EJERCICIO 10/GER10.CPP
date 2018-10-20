 #include<stdio.h>
 #include<conio.h>

 void main () {
   //declaro variables
   int conta=0 ,conte=0 ,conti=0 ,conto=0 ,contu=0, contc=0 , car=0 ;
   char carac ;
   clrscr () ;
		for (car=0 ;car<20;car++) {
		    printf("ingrese caracter") ;
		    scanf(" %c",& carac) ;

				switch(carac){
				  case'a':
					  conta++;
					  break ;
				  case'e':
					  conte++;
					  break;
				  case'i':

					  conti++;
					  break;
				  case'o':
					  conto++;
					  break;
				   case'u':
					  contu++;
					  break;
				  default:
					  contc++ ;
					  break ;
				   }//cierre del switch

				  }//cierre del for
			       printf("\n la cantidad de letras 'a' son: %d",conta) ;
			       printf("\n la cantidad de letras 'e' son: %d",conte) ;
			       printf("\n la cantidad de letras 'i' son: %d",conti) ;
			       printf("\n la cantidad de letras 'o' son: %d",conto) ;
			       printf("\n la cantidad de letras 'u' son: %d",contu) ;
			       printf("\n la cantidad de consolantes son: %d",contc) ;
	     getch()  ;

	   }//cierre del main
