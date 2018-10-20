   #include<stdio.H>
   #include<conio.H>
   void main () {
      // declaracion de variables
      int num=0,acum=0;
      float prom;
      clrscr();
		for(int i=0;i<5;i++)
		{
		printf("ingrese numero:") ;
		scanf("%d",&num);
		acum=(float)acum + num; }
		prom=acum/5;
		printf("mostrar:%.2f",prom);
		getch();
		}