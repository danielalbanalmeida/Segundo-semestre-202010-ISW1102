/******************************************************************************
Realizar un programa que permita ingresar el número de estudiantes y el numero de notas,
imprima las notas de cada estudiante, determine el promedio de cada estudiante, el mayor y menor promedio.
*******************************************************************************/
#include<stdio.h>
#define tam 50  /*variable global tam max matriz*/

void inicializaMatriz(float[][tam]); 
void ingresoNumEst(int, int);
float ingresoNumNotas(float, float);
void promedioEst (int);


void main()
{
	float arreglo[][tam]={{5.4,7.3,10.0},{2.5,8.0,5.0}}; /* variables declaradas*/
	int op=0,fil,col, cantNum;
	while(op<=4) /* permite que el programa corra varias veces*/
	{
		printf("1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Ingreso Numero Esudiantes\n4. Ingreso Numero Notas\n5.Salir\nn");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaMatriz(arreglo);
				getchar();
				system("clear");
			break;
			case 2:
				printf("Ingrese el numero de filas:");
				scanf("%d",&fil);
				printf("Ingrese el numero de columnas:");
				scanf("%d",&col);
				printf("La suma es %.1f\n",ingresoDatosMatriz(fil,col));
			case 3:
			    printf ("Ingrese la cantidad de Estudiantes:");
			    scanf("%d",&cantNum);
			    getchar();
			    system("clear");
			break;
			case 4:
			    printf("Ingrese el Numero de Notas:");
			    scanf("%d",&cantNum);
			    promedioEst(cantNum);
			    getchar();
			    system("clear");
			break;
			default:
				printf("Opcion Invalida\n");
			break;
		}
	}
}
void inicializaMatriz(float arreglo[tam][tam])
{
	int i=0,j=0;
	while(i<2)
	{
		j=0;
		while(j<3)
		{
			printf("arreglo[%d][%d]=%.2f\n",i,j,arreglo[i][j]);
			j++;
		}
	i++;
	}
}

float ingresoDatosMatriz(int filas, columnas)

	int i=0,j=0;
	float arreglo[filas][colum],suma=0;
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&arreglo[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	printf("Elementos de la Matriz\n");
	while(i<filas)
	{
		j=0;
		while(j<colum)
		{
			printf("%.2f\t",arreglo[i][j]);
			suma=suma+arreglo[i][j];
			j++;
		}
		printf("\n");
	i++;
	}
}
void promedioEst (int cant)
{
int i=0,j;
	char nombre[nestu][20];
	float notas[nestu][nnota],suma=0,prom=0,mayor=0,menor=9999;
	while(i<nestu)
	{
		j=0;
		printf("Estudiante %d\n",i+1);
		fflush(stdin);
		printf("Ingrese el nombre del estudiante:");
		gets(nombre[i]);
		while(j<nnota)
		{
			printf("Ingrese la calificacion %d:",j+1);
			scanf("%f",&notas[i][j]);
			j++;
		}
	i++;
	}
	i=0;
	puts("Calificaciones de Estudiantes\n")
	while(i<nest)
	{
		printf("Ingrese la calificacion:", i+1);
		while (j<nnotas)
		{
			printf("Nota %d=%.2f\n",j+1,notas[i][j]);
			suma=suma+notas[i][j];
			j++;
		}
	
		suma=suma+notas[cont];
		
		if (notas[cont]>mayor)
		
			mayor=notas[cont];
			
		if (notas[cont]<menor)
		
			menor=notas[cont];
			
		cont++;
	}
	prom=suma/cant;
	
	printf("El promedio es %.2f\n",prom);
	printf("La mayor nota es %.2f\n",mayor);
	printf("La menor nota es %.2f\n",menor);
}


