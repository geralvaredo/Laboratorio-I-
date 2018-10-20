




	void suma ( )

	{
	 int sum ;
	 int num1 ;
	 int num2 ;
		    printf(" \n\n INGRESE PRIMER NUMERO:  " ) ;
		    scanf("%d",&num1) ;
		    printf("\n\n INGRESE SEGUNDO NUMERO:  " ) ;
		    scanf("%d",&num2) ;

		    sum = num1 + num2;



		    printf("\n\n LA SUMA ES: %d",sum) ;

		    getch () ;

	}//SUMA


	void resta ()

	{

	 int res ;
	 int num1;
	 int num2 ;
		    printf(" \n\n INGRESE PRIMER NUMERO:  " ) ;
		    scanf("%d",&num1) ;
		    printf("\n\n INGRESE SEGUNDO NUMERO:  " ) ;
		    scanf("%d",&num2) ;

		    res =num1 - num2 ;

		    printf("\n\n LA RESTA ES: %d ",res) ;

		    getch() ;

	}//RESTA




	int multi ( )

	{

	 int  multipli  ;
	 int num1 ;
	 int num2 ;

			printf(" \n\n INGRESE PRIMER NUMERO:  " ) ;
			scanf("%d",&num1) ;
			printf("\n\n INGRESE SEGUNDO NUMERO:  " ) ;
			scanf("%d",&num2) ;

			multipli = num1 * num2 ;


			return multipli ;





	}//MULTIPLICACION


	float division ( )

	{

	 float divi ;
	 int num1;
	 int num2 ;
			printf(" \n\n INGRESE PRIMER NUMERO:  " ) ;
			scanf("%d",&num1) ;
			printf("\n\n INGRESE SEGUNDO NUMERO:  " ) ;
			scanf("%d",&num2) ;

				while (num2==0)

				{
				  printf("\n ERROR, DIVISION POR 0, REINGRESE") ;
				  scanf("%d",&num2) ;

				}


			divi = (float) num1 / num2 ;
			return divi ;



	}//DIVISION



		 void potencia ( )
	     {
                int base, exp ;
		int pot ;



				printf(" \n\n INGRESE LA BASE:  ") ;
				scanf("%d",&base) ;

				      while(base<=0)
				   {
				    printf("\n\n LA BASE DEBE SER MAYOR A 0, REINGRESE NUMERO:  ") ;
				    scanf("%d",base) ;

				   }//REESTRINCION A LA BASE


				printf("\n\n INGRESE EXPONENTE:  ") ;
				scanf("%d",&exp) ;

				      while(exp<=0)
				   {
				    printf("\n\n EL EXPONENTE NO PUEDE SER NEGATIVO NI 0, REINGRESE NUMERO:  ") ;
				    scanf("%d",&exp) ;

				   }//REESTRINCION AL EXPONENTE



		pot =  pow(base,exp) ;

		printf("\n\n BASE : %d \n\n EXPONENTE: %d \n\n RESULTADO: %d",base,exp,pot) ;

		getch() ;


	     }//POTENCIA



		void raiz_cuadrada ( )
	     {
		int num1 ;
		float raiz ;
 		                printf("\n \n INGRESE NUMERO:  " ) ;
				scanf("%d",&num1) ;

				raiz = (float) sqrt(num1) ;

				printf("\n\n LA RAIZ CUADRADRA DE: %d \n\n ES: %.2f",num1,raiz) ;

				getch() ;



	     }// RAIZ CUADRADA




