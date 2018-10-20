#include<stdio.h>
#include<conio.h>

int suma1(int num1, int num2);
float suma2();
void suma3(float num1, int num2);
void suma4();

void main()
{
	int resultado1;
	float resultado2;
   	clrscr();

	resultado1=suma1(5,4);
	printf("La sumatoria de los numeros es: %d", resultado1);
	getch();
	clrscr();

	resultado2=suma2();
	printf("La sumatoria de los numeros es: %.2f", resultado2);

	getch();
	clrscr();
	suma3(4.5, 6);

	getch();
	clrscr();
	suma4();
	getch();
}

int suma1(int num1, int num2)
{
	printf("Estoy en la funcion suma1\n");
	int suma;
	suma=num1+num2;
	return suma;
}
float suma2()
{
	float num1, num2, suma;
	printf("Estoy en la funcion suma2\n");
	printf("Ingrese un numero: ");
	scanf("%f", &num1);
	printf("Ingrese otro numero: ");
	scanf("%f", &num2);

	suma=num1+num2;
	return suma;
}
void suma3(float num1, int num2)
{

	printf("Estoy en la funcion suma3\n");
	printf("La sumatoria de numeros es: %.2f", num1+num2);

}
void suma4()
{
	int suma, num1, num2;

	printf("Estoy en la funcion suma4\n");
	printf("Ingrese un numero: ");
	scanf("%d", &num1);

	printf("Ingrese otro numero: ");
	scanf("%d", &num2);
	suma=num1+num2;
	printf("La sumatoria de los numeros es: %d", suma);
}






