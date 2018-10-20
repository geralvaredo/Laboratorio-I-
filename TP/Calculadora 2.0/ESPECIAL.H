		void raices_cuadratica (float x , float y, float z )
   {
		int disc,b2 ;
		float x1,x2 ;


		b2= pow (y,2) ;

		disc = b2  - (4*x*z) ;


		printf("\n %.fx^2 +%.fx +%.f  ",x,y,z) ;




			if ( disc >0 )

			{


				x1 = (-b2 +sqrt(disc))/(2*x) ;
				x2 = (-b2 -sqrt(disc))/(2*x) ;

				printf("\n\n TIENE 2 RAICES: \n X1: %.2f \n X2: %.2f",x1,x2) ;



			}// DISCRIMINANTE MAYOR A 0




			if ( disc==0)

			{
				x1 = -b2 / (2*x) ;

				printf("\n\n TIENE 1 SOLA RAIZ \n X1: %.2f",x1) ;



			}// DISCRIMINANTE IGUAL A 0



			if ( disc<0)

			{
				printf( "\n\n NO TIENE RAIZ LA ECUACION") ;



			}//DISCRIMINANTE MENOR A 0


			getch () ;


   }//ECUACION DE SEGUNDO GRADO



		int factorial (int x=0 )
	{

		int fact=0 ;

		fact = x ;


		for(int i=x-1;i>=1;i--)
	      {

		fact = fact*i;



	      }//ITERACION FACTORIAL

		return fact ;



}//FACTORIAL
