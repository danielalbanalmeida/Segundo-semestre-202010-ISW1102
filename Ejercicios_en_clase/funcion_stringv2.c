# include <stdio.h>
# include <string.h>
#define tam 50
void ingreso(int,char [][tam],char [][tam]);
void imprimir(int, char [][tam],char [][tam],float []);
void concatenar(char [][tam],char [][tam],int);
void longitud(char [][tam], int );

void main()
{
	char nombre[tam][tam],ape[tam][tam];
	int num;
	printf("Ingrese el numero de empleados:");
	scanf("%d",&num);
	ingreso(num,nombre,ape);
}
void ingreso(int num, char nombre[][tam],char ape[][tam])
{
	int i=0;
	float sueldo[tam];
	while(i<num)
	{
		fflush(stdin);
		printf("Ingrese el nombre del empleado:");
		gets(nombre[i]);
		printf("Ingrese el apellido del empleado:");
		gets(ape[i]);
		printf("Ingrese el sueldo:");
		scanf("%f",&sueldo[i]);
		i++;
	}
	imprimir(num,nombre,ape,sueldo);
	longitud(nombre, num);
	concatenar(nombre,ape, num);
}
void imprimir(int num,char nombre[][tam],char ape[][tam],float sueldo[tam])
{
	int i=0;
	printf("Datos del empleado\n");
	while(i<num)
	{
		printf("Nombre: %s\n",nombre[i]);
		printf("Apellido: %s\n",ape[i]);
		printf("Sueldo:%.1f\n",sueldo[i]);
		i++;
	}
}
void longitud(char nombre[][tam], int num)
{
	int i=0;
	while(i<num)
	{
		printf("El nombre del empleado %d tiene una longitud de %d\n",i+1,strlen(nombre[i]));
		i++;
	}
}
void concatenar(char nombre[][tam],char ape[][tam], int num)
{
	int i=0;
	while(i<num)
	{
		strcat(nombre[i]," ");
		printf("Nombres y Apellidos: %s\n",strcat(nombre[i],ape[i]));
		i++;	
	}
}
