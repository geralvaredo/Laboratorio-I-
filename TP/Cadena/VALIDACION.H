

 long int ( long int unico, long int dnivect[], int  registro )

{
  int flag=0;
  char seguir;
	      while (unico< 1000000 || unico> 99999999)

	      {
		    printf ("\n ERROR: INGRESE UN DNI CORRECTO:   ");
		    scanf ("%ld", &unico);

	      }

	      for (int i=0; i<registro; i++)

	      {
		   while(unico == dnivect[i])

		   {
			flag=1;
			printf ("\nError: DNI ya registrado");
			printf ("\n Quiere reingresar otro dni?");
			scanf (" %c", &seguir);
			tolower (seguir);

			if (seguir == 's')

			{
			    printf ("\n INGRESE DNI:  ");
			    scanf (" %ld", &unico);

			     while (unico< 1000000 || unico> 99999999)

			     {
			       printf ("\nError: Ingrese un DNI Valido\n");
			       scanf (" %ld", &unico);

			     }//cierre del while

			}//cierre del if

			else

			{

			   unico = 99999999;


			}//cierre else



		   }//while

			if (flag == 1){break;}

	      }//for
	    return dniu;


}//VALIDACION DNI

void validar_nomape (char apeno [], int largo)

{
	 while (strlen (apeno) > largo)

	 {
	     printf ("\nError Reingrese: Demasiados caracteres");
	     gets (apeno);
	 }

}// VALIDACION NOMBRE Y APELLIDO

void validar_direccion (char dir [], int largo)

{
	 while (strlen (dir) > largo)

	 {
	     printf ("\nError Reingrese: Demasiados caracteres");
	     gets (dir);

}//VALIDACION DIRECCION

void validar_localidad (char loc [], int largo)

{
	 while (strlen (loc) > largo)

	 {
	     printf ("\nError Reingrese: Demasiados caracteres");
	     gets (loc);

}//VALIDACION LOCALIDAD

int validar_edad (int ed, int hasta)

{
      while ( ed<hasta)

      {
	printf ("\nError Reingrese: Es menor a 18");
	scanf (" %d", &ed);
      }
	 return ed;

}//VALIDACION EDAD

void validar_categoria (char cat[], int largo, int i)

{
      while ( strlen (cat) > largo  || cat[i] == 'a' && cat[i] == 'b' && cat [i]== 'c' )

      {
		printf ("\nError demasiados carecteres o Categoria incorrecta reingrese:\nA\nB\nC");
		fflush (stdin);
		gets (cat);
		strlwr (cat);
       }

}//VALIDACION CATEGORIA

float validar_sueldoneto ( float horas, char categoria[], int i)
{
   float suneto;
	 if (categoria [i] == 'A')
	 {
	   suneto = 50*horas;
	 }else{
		if (categoria[i] =='B')
		{
		suneto = 30.50 * horas;
		}else{
		      suneto = 20.67*horas;
		}
	  return suneto;
	   }
} //VALIDACION SUELDNO NETO



