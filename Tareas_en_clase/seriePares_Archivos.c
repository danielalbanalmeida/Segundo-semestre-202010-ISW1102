/*Realizar un programa que genere la serie de n
numeros pares usando archivos*/
#include<stdio.h>
#include<locale.h>
void ingresoDatosPares(int);
void ingresoDatosTabla(int, int);
void seriePares(int);
void tablaMultiplicar(int, int);
FILE *archivo;//Declaración variable global
void main()
{
	int cantNum,lim,tabla;
	setlocale(LC_ALL,"spanish");
	archivo=fopen("pares.txt","w");
	ingresoDatosPares(cantNum);
	ingresoDatosTabla(lim,tabla);
}
void ingresoDatosPares(int cantNum)
{
	printf("Serie de Números Pares\n");
	fputs("Serie de Números\n",archivo);
	printf("Ingrese la cantidad de numeros:");
	fputs("Ingrese la cantidad de numeros:",archivo);
	scanf("%d",&cantNum);
	fprintf(archivo,"%d\n",cantNum);
	seriePares(cantNum);
}

void ingresoDatosTabla(int tabla, int lim)
{
	printf("Tabla de Multiplicar\n");
	fputs("Tabla de Multiplicar\n",archivo);
	printf("Ingrese la tabla de multiplicar:");
	fputs("Ingrese la tabla de multiplicar:",archivo);
	scanf("%d",&tabla);
	fprintf(archivo,"%d\n",tabla);
	printf("Ingrese el límite:");
	fputs("Ingrese el límite:",archivo);
	scanf("%d",&lim);
	fprintf(archivo,"%d",lim);
	tablaMultiplicar(tabla,lim);
}
void seriePares(int cantNum)
{
	int cont=1,par=0;
	while(cont<=cantNum)
	{
		par=par+2;
		printf("%d\n",par); 
		fprintf(archivo,"%d\n",par);
		cont++;
	}
}
void tablaMultiplicar(int tabla, int lim)
{
	int cont=1,mult=1;
	while(cont<=lim)
	{
		mult=cont*tabla;
		printf("%dX%d=%d\n",tabla,cont,mult);
		fprintf(archivo,"%dX%d=%d\n",tabla,cont,mult);
		cont++;
	}
}
