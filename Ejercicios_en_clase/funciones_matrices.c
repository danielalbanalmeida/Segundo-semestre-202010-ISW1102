#include<stdio.h>
#define tam 50
void inicializaMatriz(float[][tam]);
float ingresoDatosMatriz(int,int);

void main()
{
	float arreglo[][tam]={{5.4,7.3,10.0},{2.5,8.0,5.0}};
	int op=0,fil,col;
	while(op<=2)
	{
		printf("1.Inicializacion Matriz\n2.Ingreso Datos Matriz\n3.Salir\nn");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaMatriz(arreglo);
				getch();
				system("cls");
			break;
			case 2:
				printf("Ingrese el numero de filas:");
				scanf("%d",&fil);
				printf("Ingrese el numero de columnas:");
				scanf("%d",&col);
				printf("La suma es %.1f\n",ingresoDatosMatriz(fil,col));
			case 3:
				exit(0);
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

float ingresoDatosMatriz(int filas, int colum)
{
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
	return suma;
}





