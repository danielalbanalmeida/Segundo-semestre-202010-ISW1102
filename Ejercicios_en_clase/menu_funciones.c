/*Realizar un programa en C que permita determinar si un numero es par o impar,
tabla de multiplicar y el factorial de un numero usando funciones*/
#include<stdio.h>
#include<stdlib.h>
/*Generación de prototipo de funciones*/
void parImpar(int);
int tablaMult(int, int);
int factorial(int);
void posNegCeros(int);
void parImpares(int);
float promedioNotas(int,int);
void main()
{
	int num,lim,op,cant,nest,nnotas;//declaración de variables locales
	do
	{
		
	printf("1.Par o Impar\n2.Tabla Multiplicar\n3.Factorial\n4.Positivos Negativos\n5.Pares e Impares\n.6.Promedio Estudiantes\n7.Salir");
	printf("Escoja la opcion:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Ingrese un numero:");
			scanf("%d",&num);
			parImpar(num);//llamada a la función
			getch();
			system("cls");//Limpiar la pantalla
		break;
		case 2:
			printf("Ingrese la tabla a multiplicar:");
			scanf("%d",&num);
			printf("Ingrese el limite:");
			scanf("%d",&lim);
			tablaMult(num,lim);	
			getch();
			system("cls");	
		break;
		case 3:
			printf("Ingrese un numero:");
			scanf("%d",&num);
			printf("El factorial de %d es %d\n", num,factorial(num));
			getch();
			system("cls");
		break;
		case 4:
			printf("Ingrese la cantidad de numeros:");
			scanf("%d",&cant);
			posNegCeros(cant);
			getch();
			system("cls");
		break;
		case 5:
			parImpares(num);
		break;
		case 6:
			printf("Ingrese el numero de estudiantes:");
			scanf("%d",&nest);
			printf("Ingrese el numero de notas:");
			scanf("%d",&nnotas);
			promedioNotas(nest,nnotas);
		break;	
		
		case 7:
			exit(0);
		break;
		default:
			printf("Opcion invalida");
		break;
	}
	
}while(op<=4);
	
}
void parImpar(int num)
{
	if(num%2==0&&num!=0)
		printf("Es par\n");
	else if(num!=0)
		printf("Es impar\n");
}
int tablaMult(int num,int lim)
{
	int cont=1,mult=1;
	while(cont<=lim)
	{
		mult=num*cont;
		printf("%dX%d=%d\n",num,cont,mult);
		cont++;
	}
	return mult;
}
int factorial(int num)
{
	int cont=1,fact=1;
	while(cont<=num)
	{
		fact=fact*cont;
		cont++;
	}
	return fact;
}

void posNegCeros(int cant)
{
	int cont=1,num,pos=0,neg=0,ceros=0;
	while(cont<=cant)
	{
		printf("Ingrese un numero:");
		scanf("%d",&num);
		if(num>0)
		  	pos++;
		else if(num<0)
			neg++;
		else
		    ceros++;
	cont++;
	}
	printf("Positivos %d\n",pos);	
	printf("Negativos %d\n",neg);	
	printf("ceros %d\n",ceros);	
}  

void parImpares(int num)
{
	int par=0,impar=0;
	num=1;
	while(num!=0)
	{
		printf("Ingrese un numero:");
		scanf("%d",&num);
		while(num<0)
		{
			printf("Ingrese un numero positivo:");
			scanf("%d",&num);
		}
		if(num%2==0&&num!=0)
		  par++;
		else if(num!=0)
		  impar++;
	}	
	printf("Pares %d\n",par);
	printf("Impares %d\n",impar);
}
float promedioNotas(int nest,int nnotas)
{
	int cont=1,cont1;
	float suma,prom=0,notas;
	while(cont<=nest)
	{
		printf("Estudiante %d\n",cont);
		cont1=1;
		suma=0;
		while(cont1<=nnotas)
		{
			printf("Ingrese la calificacion:");
			scanf("%f",&notas);
			suma=notas+suma;
			cont1++;
		}
		prom=suma/nnotas;
		printf("El promedio es %.2f\n",prom);
		cont++;
	}
	return prom;
}
