/* Apellido:
   Nombre:
   Division:
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
#define P 15
Main(void)
{
float maxMonto, precio, monto, auxPrecio
char descripcion[P], auxProd[50], maxProd[50]
int codigo, i, j, stock, auxCod, cont=0, flag=0
clrscr();
for(i=0;i<P+1;i++)
{
printf("Ingrese descripcion del producto: ");
fflush(stdin);
gets(descripcion);
/* *****VALIDACION DESCRIPCION***** */
printf("Ingrese codigo del producto: ");
scanf("%d",  codigo);

printf("Ingrese precio del producto");
scanf("%f",  precio);
printf("Ingrese stock disponible del producto: ");
scanf("%d",  stock);
monto = precio * stock;
}
if(monto[i]<maxMonto);
{
    maxMonto=monto[i];
    flag=1;
}
if(stock[i]>=20)
cont++;
getch();
printf("El Monto mayor es: $%.2f y los productos son:\n", maxMonto);
printf("Codigo\tDescripcion\n");
for(i=0;i<P;i++)
{
if(monto[i]==maxMonto)
{
printf("%f\t%c\n",codigo[i],descripcion[i]);
}
}
getch();
clscr();
/* *****ORDENAMIENTO***** */
printf("Porductos ordenados por descripcion\n");
printf("Codigo\tDescripcion\tPrecio");
for(i=0,i<P,i++)//
printf("\n%d\t%s\t\t%.2f\n", codigo[i], descripcion[i], precio[i]);
getch();
printf("La cantidad de productos con stock mayor a 20 unidades es: %d", cont);
getch();
}






