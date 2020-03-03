/*Daniel Albán Fila 1 Factorial
Realizar un programa usando funciones, que permita generar la serie n 
de numeros pares y la tabla de multiplicar de cualquier numero */

#include <stdio.h>
#include <locale.h>

void ingresoDatosPares(int);
void ingresoDatosTabla(int, int);
void seriePares(int);
void tablaMultiplicar (int, int);
FILE*archivo;//declaracion global
void main()
{
	int cantNum, tabla, lim;
	archivo=fopen("datos.txt", "w");
	setlocale(LC_ALL,"spanish"); /* al inicio del main*/
	ingresoDatosPares(cantNum);
	ingresoDatosTabla(tabla,lim);
	
}
void ingresoDatosPares(int cantNum)
{
	/*printf("Ingrese la cantidad de n%cmeros",163);*/
	printf("Ingrese la cantidad de números:\n");
	fputs("Ingrese la cantidad de números:",archivo);
	scanf("%d", &cantNum);
	fprintf(archivo,"%d\n", cantNum);
	seriePares(cantNum);
}
void ingresoDatosTabla(int tabla, int lim)
{
	printf("Ingrese la tabla que desea imprimir:");
	fputs("Ingrese la tabla que desea imprimir:", archivo);
	scanf("%d",lim);
	fprintf(archivo,"%d\n",lim);
		
}
void seriePares(int cantNum)
{
	int cont=1, par=0;
	while (cont<=cantNum)
	{
		par=par+2;
		printf("%d\n", par);
		fprintf(archivo,"%d\n", par);
		cont++;
	}
}
void tablaMultiplicar(int tabla, int lim)
{
	int cont=1, mult=1;
	printf("Tabla de Multiplicar\n:");
	fputs("Tabla de Multiplicar:\n", archivo);
	while(cont<=lim);
	{
		
		mult=cont*tabla;
		printf("%dX%d=%d\n", cont,tabla,mult);
		fprintf(archivo, "%dX%d=%d\n", cont,tabla,mult);
		cont++;
	}
}
