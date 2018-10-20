#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
   int miVector[10], i, posicion;
   char seguir='s';
	clrscr();
   //Carga secuencial de un vector:
   printf("CARGA SECUENCIAL\n");
   for(i=0;i<10;i++)
   {
   	printf("Ingrese un valor para el elemento %d ----> ", i+1);
      scanf("%d", &miVector[i]);
   }

   //Muestreo del vector completo
   printf("\n");
  	printf("Valores guardados en el vector:\n");
   for(i=0;i<10;i++)
   {
   	printf("%d\n", miVector[i]);
   }
   getch();
   clrscr();

   //Carga Aleatoria de un vector:

   //Inicializo el vector a 0:
   for(i=0;i<10;i++)
   	miVector[i]=0;

   printf("CARGA ALEATORIA\n");
   while(seguir=='s')
   {
   	printf("Ingrese una posicion: ");
      scanf("%d", &posicion);
      printf("Ingrese un valor para guardar en el elemento %d: ", posicion);
      scanf("%d", &miVector[posicion-1]);
      printf("Desea continuar guardando en el vector? \n");
      seguir=tolower(getche());
      printf("\n");
   }
   //Muestreo del vector completo
   printf("Vector completo:\n");
   for(i=0;i<10;i++)
   {
   	printf("%d\n", miVector[i]);
   }
   getch();
   clrscr();
   //Muestreo de las posiciones con valores cargados.
   printf("Valores guardados en el vector (SOLO LOS QUE SE CARGARON):\n");
   for(i=0;i<10;i++)
   {
      if(miVector[i]!=0)
   		printf("%d\n", miVector[i]);
   }

   getch();
}

