#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

#define A 2


struct eLocal
	{
		char direccion [25];
		char localidad [20];
	};

struct eSueldo
	{
		float sueldoneto;
		float horast;
      char categoria;
	};

struct eTrabajadores
	{
   	long int dni;
   	int edad;
   	char nya [30];
   	eSueldo sueldo;
   	eLocal local;
   };


   //Menu (switch) y Casos
char menu(void);
void alta(eTrabajadores []);
void Modificar (eTrabajadores []);
void listar (eTrabajadores []);
void listarporlocalidad (eTrabajadores []);
   //validaciones y sueldo neto
long int validardni (long int, eTrabajadores []);
int validaredad (int , int );
void validarcategoria (char);
void calcularsueldoneto (eTrabajadores [], int);
void validarcadena (char [], int );



void main()
{
	eTrabajadores trab[A];
	char seguir='s';



	clrscr();
	do
	{
		switch(menu())
		{
			case '1':
				clrscr();
				alta(trab);
				break;
		  /*	case '2':
				clrscr();
				listar(emp);
				break;
			case '3':
             clrscr();
             modifiicar(emp);
			case '4':
				clrscr();
				buscarlocalidad(emp);
				break;
			case '5':
				clrscr();
				mayorPromedio(alumnitos);
				break;
			case '6':
				seguir='n';
				break; */

		}
	}while(seguir=='s');
	getch();
}

				//DESARROLLO DE FUNCIONES//

char menu()
{
	char c;
	clrscr();
	printf("MENU\n1.ALTA\n2. LISTAR\n3..MODIFICAR\nD. BUSCAR POR LOCALIDAD\nE. \nF. SALIR\n");
	printf("Elija una opcion: ");
	c=getche();
	return c;
}



void alta(eTrabajadores trab[])
{
       int auxedad;
       long int auxdni;
       char aux[50], auxcat;
       int i=0;

       while(i<A)
								 {
											printf("INGRESE DNI: ");
											fflush(stdin);
											scanf(" %ld", &auxdni);
                                 auxdni = validardni(auxdni,trab);

                                 if(auxdni==1)
                                 	{
                                    	break;
                                    }

                                  trab[i].dni = auxdni;



                                 printf("INGRESE NOMBRE Y APELLIDO: \n ");
                                 fflush(stdin);
                                 gets(aux);
                                 validarcadena(aux, 30);
                                 strcpy(trab[i].nya,aux);

                                 printf ("\nINGRESE DIRECCION: \n");
                                 fflush(stdin);
                                 gets (aux);
                                 validarcadena(aux, 24);
                                 strcpy (trab[i].local.direccion, aux);

                                 printf ("\nINGRESE LOCALIDAD:\n");
                         			fflush(stdin);
                                 gets(aux);
                                 validarcadena (aux, 19);
                         			strcpy (trab[i].local.localidad,aux);
                         			strlwr(trab[i].local.localidad);

                                 printf ("\nINGRESE EDAD: \n ");
                                 scanf (" %d", & auxedad);
                                 auxedad = validaredad (auxedad, 18);
                                 trab[i].edad = auxedad;

                                 printf ("\nINGRESE CATEGORIA: A, B o C: \n");
                                 fflush (stdin);
                                 scanf(" %c", & auxcat);
                                 auxcat= tolower(auxcat);
                                 validarcategoria(auxcat);
                                 trab[i].sueldo.categoria = auxcat;

                                 printf ("\nINGRESE CANTIDAD DE HORAS TRABAJADAS \n");
                         			fflush (stdin);
                         			scanf (" %f", &trab[i].sueldo.horast);

                                 calcularsueldoneto(trab,i);

                                 i++;
                                 break;
                          }
    }

//CASO 2
void modificar (eTrabajadores trab[])
{
	long int auxdni;
   int flag=0, i;
   char son;

   clrscr();
   printf ("ingresar DNI: ");
   scanf ("%ld", &auxdni);

   	for (i=0; i<A; i++)
      {
      	if (auxdni == trab[i].dni)
         {
            flag = 1;
         	printf ("\nReingrese horas trabajadas:  ");
            scanf (" %.2f", &trab[i].sueldo.horast);
            printf ("¿Seguro desea realizar la modificación?");
            scanf ("%c", &son);
            son = tolower (son);

            while (son != 's' || son != 'n')
            {
             	printf ("Ingrese respuesta valida");
               scanf (" %c", &son);
            }

            if (son == 's')
            {
            	calcularsueldoneto (trab, i);
               printf ("modificacion realizada con exito");
               break;
            }else{
            			printf ("Modificacion Cancelada");
                     break;
                 }
      	}
      }

      if (flag == 0)
      printf ("\nEl dni no esta registrado");

      printf ("\nPresione una tecla para continuar");
      getch();
}




//CASO 3
void listar (eTrabajadores trab[])
{
	int i, j;
   eTrabajadores aux;

   clrscr();
   for (i=0; i<A-1; i++)
   {
   	for (j=i+1; j<A; i++)
      {
      	if (trab[i].sueldo.sueldoneto > trab[j].sueldo.sueldoneto)
         {
         	aux = trab[i];
            trab[i] = trab[j];
            trab[j] = aux;
         }
      }
   }

   //muestra
   printf ("DNI\tNombre\tSueldo\tLocalidad");

   for (i=0; i<A; j++)
   {
   printf ("%8ld\t%s\t%8.2f\t%s", trab[i].dni, trab[i].nya, trab[i].sueldo.sueldoneto, trab[i].local.localidad);
   }

   getch ();
}

//caso 4


    	//DESARROLLO DE VALIDACIONES

long int validardni (long int a, eTrabajadores trab[])
	{
		int w, r=0;
      fflush(stdin);

			while	(a<1000000 || a>99999999)
				{
               printf("ERROR. DNI NO VALIDO. REINGRESE:  ");
               scanf("%ld",& a);
				}

			for(w=0; w<A;w++)
				{
				 if(a == trab[w].dni)
						{
                  	printf("ya existe");   //se repite
                     getch();
                     r=15;
                     return 1;
                  }
            }

            if(r != 15)
            	{
            return a;   // dni valido
                }
	}

void validarcadena(char a[] , int b)
 	{

     while(strlen(a) > b)
     	{
      	printf("ERROR. NOMBRE Y APELLIDO DEMASIADO LARGO. REINGRESE: ");
         fflush(stdin);
         gets(a);
       }


   }

int validaredad (int edad , int limite)
	{
   	while (edad<limite)
      	{
         	printf ("\nERROR.MENOR DE EDAD. REINGRESE: ");
            scanf (" %d", & edad);
         }

         	return edad;
   }


void validarcategoria (char categoria)
		{
       while (categoria != 'A' && categoria != 'B' && categoria != 'C')
       		{
             	printf("ERROR. CATEGORIA NO VALIDA. REINGRESE:  ");
               scanf(" %c", & categoria);
               categoria = toupper(categoria);
            }

    	}


      //CALCULO
void calcularsueldoneto (eTrabajadores trab[], int c)
{

   if (trab[c].sueldo.categoria == 'A')
   {
   	trab[c].sueldo.sueldoneto = trab[c].sueldo.horast * 50;

      }else{

   		if (trab[c].sueldo.categoria == 'B')
         {
   			trab [c].sueldo.sueldoneto = trab[c].sueldo.horast * 30.50;

   		}else{
              trab[c].sueldo.sueldoneto = trab[c].sueldo.horast * 20.67;
              }
   }

}




/*void listar(alumno losAlumnos[])
{
	int i,j;
	alumno auxAlumno;

	for(i=0; i<A-1;i++)
	{
		for(j=i+1; j<A; j++)
		{
			if(strcmp(losAlumnos[i].apellido,losAlumnos[j].apellido)>0)
			{
				auxAlumno=losAlumnos[i];
				losAlumnos[i]=losAlumnos[j];
				losAlumnos[j]=auxAlumno;
			}
		}
	}

	printf("Legajo\tApellido\tNombre\t\tPromedio\n");
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		   toString(losAlumnos[i]);

	}
	getch();
}
void baja(alumno losAlumnos[])
{
	int legajo, flag=0;
	char opcion;
	printf("Ingrese legajo a dar de baja: ");
	scanf("%d", &legajo);
	for(int i=0; i<A; i++)
	{
		if(legajo==losAlumnos[i].legajo)
		{
			printf("Datos a eliminar:\n");

			toString(losAlumnos[i]);

			printf("\nLegajo encontrado. ¨Seguro desea dar de baja?");
			opcion=getche();
			if(opcion=='s')
			{
				losAlumnos[i].legajo=0;
				printf("­­Registro eliminado!!");
			}
			else
			{
				printf("El registro no fue eliminado!");
			}
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Legajo inexistente");
		getch();
	}
}
void modificar(alumno losAlumnos[])
{
	int legajo, flag=0;
	float prom;
	char opcion;
	clrscr();
	printf("Ingrese legajo a modificar: ");
	scanf("%d",& legajo);
	for(int i=0; i<A; i++)
	{
		if(legajo==losAlumnos[i].legajo)
		{
			printf("Datos encontrados:\n");

			toString(losAlumnos[i]);

			printf("\nIngrese el nuevo promedio: ");
			scanf("%f", &prom);
			printf("Esta seguro que desea modificar? ");
			opcion=getche();
			if(opcion=='s')
			{
				losAlumnos[i].promedio=prom;
				printf("Registro modificado");
			}
			else
			{
				printf("El registro no fue modificado");
			}
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Legajo inexistente");
		getch();
	}
}
void mayorPromedio(alumno losAlumnos[])
{
	int i, flag=0;
	float maxProm;
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		  if(flag==0 || losAlumnos[i].promedio>maxProm)
		  {
			maxProm=losAlumnos[i].promedio;
			flag=1;
		  }
	}
	printf("El o los Alumnos con mayor promedio (%.2f) son:\n", maxProm);
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		  if(losAlumnos[i].promedio==maxProm)
		  {

			toString(losAlumnos[i]);
		  }
	}
	getch();
}

*/


