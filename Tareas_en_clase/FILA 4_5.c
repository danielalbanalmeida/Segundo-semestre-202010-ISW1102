#include <stdio.h>
#include <stdlib.h>
#define tam 10

void inicializaArreglo(int[]);
void datosArreglo(int);
void numBuscar(int);
void parImpares(int[]);
void multiplos(int);
void main()
{
    int arreglo[tam]={3,-1,5,9},cantNum,par, impar, op=1;
	while(op<=2)
	{
		printf("1.Inicializacion Arreglo\n2.Datos Arreglo\n3.Numero Buscar\n4.Par Impar\n5.Multiplos\n6.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaArreglo(arreglo);
				getchar();
				system("clear");
			break;
			case 2:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				datosArreglo(cantNum);
				getchar();
				system("clear");
			break;
			case 3:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				numBuscar(cantNum);
				getchar();
				system("clear");
			break;
			case 4:
			    parImpares(arreglo);
			    getch();
        	    system("cls");
			break;
			case 5:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
			    multiplos(cantNum);
			    getch();
        	    system("cls");
			break;
			default:
				printf("Opcion Invalida\n");
			break;
						
		}
	}
		
}
void inicializaArreglo(int arreg[tam])
{
	int cont=0;
	while(cont<5)
	{
		printf("Elemento[%d]=%d\n",cont,arreg[cont]);
		cont++;
	}
}

void datosArreglo(int cant)
{
	int cont=0,arreglo[tam];
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Elementos del vector\n");
	cont=0;
	while(cont<cant)
	{
		printf("Elemento[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
}

void numBuscar(int cant)
{
	int cont=0,arreglo[tam],buscar,cuenta=0;
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Ingrese el elemento a buscar\n");
	scanf("%d",&buscar);
	cont=0;
	while(cont<cant)
	{
		if(buscar==arreglo[cont])
			cuenta++;
		cont++;
	}
	printf("El numero %d se repite %d",buscar,cuenta);
}
void parImpares(int arreglo[tam])
{
	int cont=0, par=0,impar=0;
	while (arreglo[cont]!=0)
    {
        	cont=cont+1;//Permite incrementar la posicion del arreglo
			printf("Ingrese un numero[%d]:",cont-1);
    		scanf("%d",&arreglo[cont]);
    		while(arreglo[cont]<0)
    		{
    			printf("Ingrese un numero positivo:");
    			scanf("%d",&arreglo[cont]);
    		}
    		if(arreglo[cont]%2==0&&arreglo[cont]!=0)
    		  par++;
    		else if(arreglo[cont]!=0)
    		  impar++;
    		
    }	
    printf("Pares %d\n",par);
    printf("Impares %d\n",impar);
}

void multiplos(int cant)
{
	int cont=0,arreglo[tam],mul=0,suma=0;
	while(cont<cant)
	{
		mul=mul+3;
		arreglo[cont]=mul;
		printf("%d\n",arreglo[cont]);
		suma=suma+arreglo[cont];
		printf("La suma de los multiplos es %d\n",suma);
		cont++;
	}
	
	
}
    	


