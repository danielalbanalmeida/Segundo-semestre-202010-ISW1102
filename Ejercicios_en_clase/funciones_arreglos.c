#include <stdio.h>
# define tam 10
void inicialArreglo(int []);
void datosArreglo(int);
void main()
{
	int arreglo[tam]={4,5,6},cant;
	inicialArreglo(arreglo);
	printf("Ingrese el numero de elementos:");
	scanf("%d",&cant);
	datosArreglo(cant);
}
void inicialArreglo(int arreglo[tam])
{
	int cont=0;
	while(cont<3)
	{
		printf("arreglo[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
}

void datosArreglo(int cant)
{
	int cont=0,arreglo[tam],num,cuenta;
	while(cont<cant)
	{
		printf("Ingrese el elemento:",cont+1);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	cont=0;
	while(cont<cant)
	{
		printf("arreglo[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
	printf("Ingrese el numero a buscar:");
	scanf("%d",&num);
	cuenta=0;
	cont=0;
	while(cont<cant)
		{
			if(num==arreglo[cont])
			cuenta++;
			cont++;
		}
printf("El numero se repite %d\n",cuenta);
}


