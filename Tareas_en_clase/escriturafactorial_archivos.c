#include <stdio.h>
int factorial(int);
void ingresoDatos(int);
FILE *archivo;
void main()
{
	int num;
	ingresoDatos(num);
}
void ingresoDatos(int num)
{
	archivo=fopen("factorial.txt","w");
	printf("Ingrese el numero:");
	fputs("Ingrese el numero\n",archivo);
	scanf("%d",&num);
	fprintf(archivo,"%d\n",num);
	while(num<0)
	{
		printf("Ingrese el numero:");
		scanf("%d",&num);
		fprintf(archivo,"Ingrese el numero:%d\n",num);
	}
	printf("El factorial es %d",factorial(num));
	fprintf(archivo,"El factorial es:%d",factorial(num));
}
int factorial(int num)
{
	int fact=1,cont=1;
	while(cont<=num)
	{
		fact=fact*cont;
		cont++;	
	}
	return fact;
}

