/* Apellido:  Alvaredo
   Nombre:    German
   Division:  1§A
*/
/*
CONSIGNA:
* El codigo fuente que se presenta tiene errores logicos y sintacticos.
  Modificar las lineas de codigo necesarias para eliminar todos los errores.
* Documentar los errores encontrados en cada linea de codigo a traves de
  comentarios
* No se podran realizar modificaciones en el codigo, que vayan en contra del
  enunciado.
* No deben existir variables que no se usen ni tampoco eliminar las que se
  entregan predefinidas.
* No se podra inicializar la variable maxMonto para el calculo del mayor monto


ENUNCIADO:
Una empresa que se dedica a la comercializacion de articulos para el
hogar, registra de cada articulo la siguiente informacion:
* Codigo
* Descripcion
* Precio unitario
* Stock disponible
Se sabe que la empresa cuenta con 15 articulos distintos.
Se pide:
-Realizar la carga de datos para cada articulo. Por cada articulo se debe
 calcular el monto por articulo, resultante del producto entre el stock y el
 precio unitario.
-Calcular el/los productos con mayor monto. PUEDE SER MAS DE UNO.
-Calcular la cantidad de productos cuyo stock supere las 20 unidades
 exclusive.
-Realizar las lineas de codigo necesarias para validar:
	   -Descripcion del producto no mayor a 50 caracteres. Utilizar un
	    auxiliar.
-Ordenar por descripcion del producto
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P 4

void main() // error en el main
{

float maxMonto, precio, monto, auxPrecio  ; //faltaba ;

char descripcion[P], auxProd[50], maxProd[50] ; //faltaba ;

int codigo, i, j, stock, auxCod, cont=0, flag=0 ; //faltaba ;


clrscr();

for(i=0;i<P-1;i++)
{
	printf("Ingrese descripcion del producto: ");
	fflush(stdin);
	gets(auxProd);

	while ( strlen(auxProd) >49 )

	{      printf("\n ERROR: la descripcion debe ser menor a 50 \n REINGRESE:") ;
	       fflush(stdin) ;
	       gets(auxProd) ;
	}

	 strcpy(descripcion,auxProd) ;     /* *****VALIDACION DESCRIPCION***** */


	 printf("Ingrese codigo del producto: ");
	 scanf("%d",&codigo);  // falta &


	 printf("Ingrese precio del producto: ");
	 scanf("%f",&precio); // falta &


	 printf("Ingrese stock disponible del producto: ");
	 scanf("%d",&stock);// falta &


	 monto = precio * stock;
}



	if(flag==0 || monto>maxMonto)   //1-el ";" en el IF 2-la variable monto[i] dentro del IF no existe  3- el signo "<" 4-falta el flag
	{
	      maxMonto=monto ; // la variable monto[i] no existe
	      strcpy(maxProd,descripcion)  ; // agregado
	      flag=1;
	}


	if(stock>20) //1-la variable stock[i] no existe 2-falta "{" en el IF 3-el "=" del for
	{
	cont++; //1- el getch
	} // falta "{"
	getch() ;
	printf("El Monto mayor es: %.2f y los productos son: %d \n", maxMonto,codigo); //1-el signo "$" 2-falta mascara de entrada 3- falta variable de la mascara de entrada faltante
	printf("Codigo\tDescripcion\n");
	for(i=0;i<P-1;i++) //correcion P-1
	{
	if(flag==0||monto==maxMonto)//1-el "=" en el if 2-agrego flag
	{
	printf("%f\t %c\n",codigo,descripcion[i]);
	}
	}
	getch();
	clrscr(); //correccion "clrscr

/* *****ORDENAMIENTO***** */
printf("Porductos ordenados por descripcion\n");
printf("Codigo\tDescripcion\tPrecio");
for(i=0;i<P;i++)     //reemplazo "," por ";"

{ // falta "{"

printf("\n%d\t%s\t\t%.2f\n", codigo, descripcion[i], precio);
getch();
printf("La cantidad de productos con stock mayor a 20 unidades es: %d ", cont);
getch();
}

}




