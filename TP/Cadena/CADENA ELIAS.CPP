#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define i indice

char validar_char (char);
char validar_sn (char);
long int validar_dni (long int);
int validar_dni_unico (long int, long int []);
void validar_cadenas (char [], int);
void validar_categoria (char [], int, int );
float sueldo_neto (float, char[], int);
int Validar_edad (int , int );

void main ()
				{
				 long int dni[40], auxdni;
				 char son, seguir='n', opcion;
				 char nya[40][30], direccion[40][25], localidad [40][20], categoria[40][2], aux[60], auxlocal[50];
				 int j=0,h=0, p=0, indice=0, flag=0, flag1=0, edad, auxdniu;
				 float sueldoN [40], cantHs, auxsueldo, maxsueldo, minsueldo ;

				 do
				 {
						 clrscr();
						 printf ("Menu\n a) Alta\n b) Modificaci¢n\n c) Listar\n d) Buscar por localidad\n e) Buscar empleado con maximo sueldo\n f) Buscar empleado con minimo sueldo\n g) Salir\n");
						 scanf (" %c", &opcion);

						 opcion = tolower (opcion);
						 opcion = validar_char (opcion);

				switch (opcion){
									 case 'a':


												  if (i<40){
																	  clrscr();
																	  printf ("\nIngresar DNI:\n");
																	  fflush (stdin);
																	  scanf (" %ld", &dni[i]);
																	  dni[i] = validar_dni (auxdni);
                                                     auxdniu = validar_dni_unico (auxdni, dni );

                                                     while (auxdniu ==2)
                                                        {
                                                     		clrscr();
																	  		printf ("\nIngresar DNI:\n");
																	  		fflush (stdin);
																	  		scanf (" %ld", &dni[i]);
																	  		dni[i] = validar_dni (auxdni);
                                                     		auxdniu = validar_dni_unico (auxdni, dni );
                                                        }

                                                     if ( auxdniu == 3)
                                                        {
                                                          indice--;
                                                          break;
                                                        }
                                                     if (auxdniu== 1)
                                                      	printf ("\nDNI Registrado\n");


																	  printf ("\nIngresar Nombre y Apellido:\n");
																	  fflush (stdin);
																	  gets (aux);
																	  validar_cadenas (aux, 29);
																	  strcpy (nya[i],aux);

																	  printf ("\nIngresar direcci¢n:\n");
																	  fflush(stdin);
																	  gets (aux);
																	  validar_cadenas(aux, 24);
																	  strcpy (direccion[i], aux);

																	  printf ("\nIngresar Localidad:\n");
																	  fflush(stdin);
																	  gets (aux);
																	  validar_cadenas (aux, 19);
																	  strcpy (localidad[i], aux);
																	  strlwr (localidad[i]);

																	  printf ("\ningresas edad:\n ");
																	  scanf (" %d", & edad);
																	  edad = Validar_edad (edad, 18);

																	  printf ("\nIngresar Categoria: A, B o C\n");
																	  fflush (stdin);
																	  gets (aux);
																	  strlwr (aux);
																	  validar_categoria (aux, 1, i);
																	  strcpy (categoria[indice],aux);

																	  printf ("\nIngresar Cantidad de horas trabajadas\n");
																	  fflush (stdin);
																	  scanf (" %f", &cantHs);

																	  sueldoN[indice] = sueldo_neto (cantHs, categoria[indice], i);


																	 }else{
																			 printf("la fabrica esta llena");
																			 getch();
																			 break;
																			}

												  indice++;
												  getch();
												  break;
									 case 'b':
												  clrscr ();
												  printf ("Ingresar DNI:\n");
												  scanf (" %ld", &auxdni);
														for ( j=0; j<40; j++)
														{
															if (auxdni == dni[j])
															{
																printf ("Reingrese Horas trabajadas:\n ");
																scanf (" %f", &cantHs);
																printf ("\nSeguro desea realizar la modificaci¢n? S/N");
																scanf (" %c", &son);
																son = tolower (son);
																validar_sn (son);

																	if (son== 's')
																	{
																	sueldoN[j] = sueldo_neto (cantHs, categoria[j], j);
																	printf ("Modificaci¢n realizada");
																	flag1 = 1;
																	break;
																	}
														 }
														 if (flag1==0)
														  {

																	  printf ("el DNI no esta registrado");
																	  getch();
														  }
														  break;

									 case 'c':
												  clrscr();
												  for (j=0; j<39; j++)
												  {
														for ( h=j+1; h<40; h++)
														{
															if	(sueldoN [j] > sueldoN[h] )
															{
																auxsueldo = sueldoN [j];
																sueldoN[j] = sueldoN[h];
																sueldoN[h] = auxsueldo;
															}
														}
												  }

												  printf ("DNI\t\tNombre y Apellido\t\tSueldo neto\t\tLocalidad");

												  for ( j=0; j<40; j++)
												  {
													  printf ("\n%ld\t\t%s\t\t%f\t\t%s", dni[j], nya[40], sueldoN[j],localidad[j]);
												  }
												  getch();
												  break;

									 case 'd':
												 clrscr();
												 printf ("Buscar por Localidad, ingresar:\n");
												 fflush(stdin);
												 gets (auxlocal);
												 strlwr (auxlocal);

												 printf ("\nDNI\t\tNombre y Apellido\t\tLocalidad\n");

												 for (j=0; j<40; j++)
												  {
														if (auxlocal == localidad [j])
														{
															for (h=0; h<39; h++)
															{
																for ( p=h+1; p<40; p++)
																{
																	if (strcmp (nya[h], nya[p]) >0 )
																	{
																		strcpy (aux, nya[h]);
																		strcpy (nya[h],nya[p]);
																		strcpy (nya[p],aux);

																		strcpy (auxlocal, localidad[h]);
																		strcpy (localidad[h], localidad[p]);
																		strcpy (localidad [p], auxlocal);

																		auxdni = dni[h];
																		dni[h] = dni[p];
																		dni[p] = auxdni;
																	}
																}
															}
														}else{
																printf ("\nLa localidad no esta registrada");
																getch();
																break;
																}
												  }

												 for (j=0; j<40; j++)

												  {printf ("\n%ld\t\t%s\t\t%s", dni[j], nya[j], localidad[j]);}

												  getch();
												  break;

									 case 'e':
												 printf ("Empleado/s de sueldo neto Maximo");

													for (j=0; j<40; j++)
													{
														if (flag==0 || sueldoN[j] > maxsueldo )
														{
															maxsueldo = sueldoN[j];
														}
														flag=1;
													}

													for ( j=0; j<40; j++)
													{
														if (maxsueldo == sueldoN[j])
														{
														 printf ("\nNombre:%s\tDIN%ld\tSueldo:%f\n", nya [j], dni[j],sueldoN[j]);
														}
													}
												  getch ();
												  break ;
									 case 'f':
												 printf ("Empleado/s de sueldo neto Minimo");
												 flag=0;
													for (j=0; j<40; j++)
													{
														if (flag==0 || sueldoN[j] < minsueldo  )
														{
															minsueldo = sueldoN[j];
														}
														flag=1;
													}

													for ( j=0; j<40; j++)
													{
														if (minsueldo == sueldoN[j])
														{
														 printf ("\nNombre:%s\tDIN%ld\tSueldo:%f\n", nya [j], dni[j],sueldoN[j]);
														}
													}
												  getch ();
												  break;

									 case 'g':
												 printf ("¨Seguro desea salir? s/n");
												 scanf (" %c", & seguir);
												 seguir = tolower (seguir);
												 seguir = validar_sn (seguir);

									}
            }
				}while (seguir=='n');

            }//cierre del main

char validar_char (char opcion)
				{
				 while (opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e' && opcion != 'f' && opcion != 'g')
						 {
						  printf ("Error: Reingrese una opcion");
						  scanf (" %c", &opcion);
						  opcion = tolower (opcion);
						 }
						  return opcion;
				}

char validar_sn (char a)
				{
				 while (a != 's' && a != 'n')
						 {
							printf ("Error: S continuar\n N seguir");
							a = tolower (a);
							scanf (" %c", & a);
						 }
							return a;
				}

long int validar_dni (long int a)
				{
				 while (a< 1000000 || a> 99999999)
						 {
						  printf ("Ingresar un DNI Valido");
						  scanf (" %ld", &a);
						  }
				 return a;
				}

int validar_dni_unico (long int dniu, long int dniv[] )
				{
				int i, flag=0, SoN;
				  for (i=0; i<40; i ++)
				  {
					  if (dniu == dniv[i])
					  {
                   flag=1;
						 printf ("Error: DNI ya registrado");
                   printf ("¿Quiere volver al menu?");
                   scanf (" %d", & SoN);
                   tolower (SoN);

                    if( SoN == 's')
                    {
                    	return 3;
                    			}else{
                        			return 2;
                           	  }
						 	break;
                    }
                 }


				  if (flag==0)
              {
               return 1;
              }

            }


void validar_cadenas (char cadena [], int longitud)
				{
				 while (strlen (cadena) > longitud)
						 {
						  printf ("\nError Reingrese: Demasiados caracteres");
						  gets (cadena);
						 }
				}

int Validar_edad (int Edad, int limite)
				{
				 while (Edad<limite)
						 {
						  printf ("\nError Reingrese: Es menor a 18");
						  scanf (" %d", & Edad);
						 }
				 return Edad;
				}

void validar_categoria (char a[], int longitud, int i)
				{

				  while ( strlen (a) > longitud  || a[i] == 'a' && a[i] == 'b' && a [i]== 'c' )
						  {
							printf ("\nError demasiados carecteres o Categoria incorrecta reingrese:\nA\nB\nC");
							fflush (stdin);
							gets (a);
							strlwr (a);
						  }
				}

float sueldo_neto ( float canths, char cat[], int i)
				{
				 float sueldoN;
					if (cat [i] == 'A')
					{
						sueldoN = 50*canths;
						}else{
								if (cat[i] =='B')
								{
									sueldoN = 30.50 * canths;
									}else{
											sueldoN = 20.67*canths;
											}
					return sueldoN;
				   }
            }

