#include<stdio.h>
#include<stdlib.h>
#define tam 10
void numerosVector(int []);
void datosVector(int);
void numBuscar(int,int);
void main()
{
	int arreglo[tam]={5,3,2},cant,op,num;
	while(op<=2)
	{
		printf("1.Inicializacion Vector\n2.Datos vector\n3.Busqueda de un Numero\n4.Salir\n");
		printf("Escoja la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				numerosVector(arreglo);
				getch();
				system("cls");
			break;
			case 2:
				printf("Ingrese la cantidad de numeros:");
				scanf("%d",&cant);
				datosVector(cant);
				getch();
				system("cls");
			break;
			case 3:
				printf("Ingrese la cantidad de numeros:");
				scanf("%d",&cant);
				printf("Ingrese el numero a buscar:");
				scanf("%d",&num);
				
				numBuscar(cant,num);
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("Opcion invalida");
			break;
		}
	}
}
void numerosVector(int arreg[tam])
{
	int cont=0;
	while(cont<3)
	{
		printf("arreglo[%d]=%d\n",cont,arreg[cont]);
		cont++;
	}
}

void datosVector(int cantidad)
{
	int cont=0;
	float arreglo[tam];
	while(cont<cantidad)
	{
		printf("Ingrese el elemento:");
		scanf("%f",&arreglo[cont]);
		cont++;
	}
	cont=0;
	printf("Elementos del Arreglos\n");
	while(cont<cantidad)
	{
		printf("Elemento[%d]=%.2f\n",cont,arreglo[cont]);
		cont++;
	}
}

void numBuscar(int cantidad,int numero)
{
	int cont=0,arreglo[tam],cuenta=0;
	while(cont<cantidad)
	{
		printf("Ingrese el elemento:");
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	cont=0;
	printf("Elementos del Arreglos\n");
	while(cont<cantidad)
	{
		printf("Elemento[%d]=%d\n",cont,arreglo[cont]);
		if(numero==arreglo[cont])
		cuenta++;
	cont++;
	}
	printf("El numero %d se repite %d veces",numero,cuenta);
}

