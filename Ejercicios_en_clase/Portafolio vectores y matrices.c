#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define tam 100
void arregloOrdenado (int);
void CosechaMeses (int);
void EmpresaDept (int);
void MatAByC (int, int);
void PletraMay(char[]);
void longitud (char);
void main()
{
	char cad[tam];
    int op,cant=12,fil, col, resp;
    do
    {
        printf("\tSeleccione una opción:\n1.Arreglo Ordenado\n2.Toneladas Cosecha\n3.Departamentos Empresa\n4.Dadas Matrices A y B, C=A+(B(A+BT))T\n5.Frase, primeras letras mayus\n6.Caracter de mayor longitud\n7.Salir\n");
        printf("Ingrese la opción:");
        scanf("%d",&op);
        switch(op)
        {
         case 1:
            printf("Ingrese la cantidad de elementos: ");
            scanf("%d",&cant);
            arregloOrdenado(cant);
            getch();
            system("cls");
        break;
        case 2:
        	CosechaMeses(cant);
            getch();
            system("cls");
        break;
        case 3:
        	EmpresaDept(cant);
            getch();
            system("cls");
        break;
        case 4:
        	printf("El numero de filas de A seran las columnas de B y el numero de columnas de A seran las filas de B.\n");
        	printf("Ingrese las filas que tendra la matriz A: ");
        	fflush(stdin);
        	scanf("%d",&fil);
        	printf("\nIngrese las columnas que tendra la matriz A: ");
        	scanf("%d",&col);
        	MatAByC(fil,col);
            getch();
            system("cls");
        break;
        case 5:
        	printf("Ingrese una cadena de caracteres: ");
        	fflush(stdin);
			gets(cad); 
        	PletraMay(cad);
            getch();
            system("cls");
        break;
        case 6:
            longitud(resp);
            getch();
            system("cls");
        break;
        case 7:
            exit(0);
        break;
        default:
            printf("Opción no válida");
            getch();
            system("cls");
        break;
        }   
    }while(op!=7);
 
}

void arregloOrdenado(int cant)
{
    int v_original [cant];
    int cont=0,num,i,j=0,k;
    for (i=0; i<cant; i++)
    {
        printf("Introduce el valor [%d]: ", i+1);
        scanf("%d",&v_original[i]);
    }
    for (i=0;i<cant;i++)
    {
    	for(j=0;j<cant;j++)
    	{
    		if (v_original[j]>v_original[i])
    		{
    			num=v_original[i];
    			v_original[i]=v_original[j];
    			v_original[j]=num;
			}
		}    
	}
	for(i=0;i<cant;i++)
	{
		num=v_original[i];
		k=0;
		for(j=0;j<cant;j++)
		{
			if(v_original[j]==num&&j!=i)
			{
				k=k+1;
			}
		}
		cont=cont+k;
		i=i+k;
	}
	for (i=0;i<cant;i++)
    {
    	for(j=0;j<cant;j++)
    	{
    		if (v_original[j]==v_original[i])
    		{
    			v_original[i]=v_original[j];
    			v_original[i+1]=v_original[j+1];
			}
		}    
	}
	
    cant=cant-cont;
	for (i=0;i<cant;i++)
    {
    	printf ("%d ",v_original[i]);
    	   
    }
}

void CosechaMeses(int cant)
{
	int i,count=0,cuenta=0,suma=0,mayor=0,menor=99999;
    float promedio=0,COS[cant];
    for(i=0;i<cant;i++)
    {
        printf("Ingrese la cosecha del mes #%d: \n",++i);
        i--;
        scanf("%d",&COS[i]);
        suma=suma+COS[i];
    }
    for(i=0;i<cant;i++)
    {
        printf("La cosecha del mes #%d es: %d\n",i+1,COS[i]);
    }
    promedio=suma/12;
    printf("El promedio anual de toneladas cosechadas es: %.2f\n",promedio);

    for(i=0;i<cant;i++)
    {
        if(COS[i]>mayor)
        {
            mayor=COS[count];
            count=i;
        }
        if(COS[i]>promedio)
        {
            cuenta++;
        }
    }
    if(mayor==promedio)
    {
        printf("Ningun mes tuvo un valor que superara al resto\n");
	}
    else
    {
		printf("estuvieron �%d� meses sobre el promedio\n",cuenta);
        printf("el mes #%d fue el que mayores toneladas tuvo, tuvo %d ton\n",++count,mayor);
    }
}
void EmpresaDept (int cant)
{
	float VEN[5][12],sumaM=0,sumaA=0,mayor=0,menor=999999;
    int i,j,k;
    while(i<5)
	{
		j=0;
		while(j<12)
		{
		    fflush(stdin);
			printf("\nIngrese el monto %d del departamento %d:",j,i);
			scanf("%f",&VEN[i][j]);
			j++;
		}	
	i++;
	}
	for(j=0;j<12;j++)
	{
	    for(i=0;i<5;i++)
	    {
	        sumaM=sumaM+VEN[i][j];
	    }
	    printf("El monto del mes %d es %.2f\n",++j,sumaM);
	    j--;
	    sumaA=sumaA+sumaM;
	}
	printf("El monto anual de la fabrica es %.2f\n",sumaA);
	for(i=0;i<5;i++)
	{
	    if (VEN[i][6]>mayor)
	    {
	        mayor=VEN[i][6];
	        k=i;
	    }
	}
	printf("El departamento que tiene la mayor venta de Julio es %d y el monto es de %.2f\n",++k,mayor);
	for(j=0;j<12;j++)
	{
	    if (VEN[3][j]>mayor)
	    {
	        mayor=VEN[3][j];
	        k=j;
	    }
	    if(VEN[3][j]<menor)
	    {
	        menor=VEN[3][j];
	        i=j;
	    }
	}
	printf("El mes de mayor ganancia para el departamento 3 fue %d y el monto es %.2f\n",++k,mayor);
	printf("El mes de menor ganacia para el departamento 3 fue %d y el monto es %.2f\n",++i,menor);
}

void MatAByC (int fil, int col)
{
	int MatA[tam][tam],MatB[tam][tam],MatC[tam][tam],AyBT[tam][tam],Baybt[tam][tam];
	int i,j,n=0;
	printf("Elementos de la matriz A:\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&MatA[i][j]);		}
	}
	printf("Elementos de la matriz B:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<fil;j++)
		{
			printf("Ingrese el elemento[%d][%d]:",i,j);
			scanf("%f",&MatB[i][j]);
		}
	}
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			AyBT[i][j]=MatA[i][j]+MatB[j][i];
		}
	}
	i=0;
	for (i=0;i<col<i;i++)
	{
		for(j=0;j<col;j++)
		{
			Baybt[i][j]=0;
			for(n=0;n<fil;n++)
			{
				Baybt[i][j]=Baybt[i][j]+(MatB[i][n]*AyBT[n][j]);
			}
		}
	}
	if(fil==col)
	{
		for(i=0;i<fil;i++)
		{
			for(j=0;j<fil;j++)
			{
				MatC[i][j]=0;
				MatC[i][j]=Baybt[i][j]+MatA[i][j];
			}
		}
		for(i=0;i<fil;i++)
		{
			for(j=0;j<fil;j++)
			{
				printf("%d\t",MatC[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Al ser 'A' y (B(A+BT))T de diferente orden, no se puede ejecutar la operacion. El resultado de (B(A+BT))T es: \n");
		for (i=0;i<col<i;i++)
		{	
			for(j=0;j<col;j++)
			{
				printf("%d\t",Baybt[i][j]);
			}
			printf("\n");
		}
	}
}
void PletraMay (char cad[tam])
{
	int i,length,count;
	length=strlen(cad);
	for (count=0;count<length;count++)
	{
		cad[count]=tolower(cad[count]);	
	}
	cad[0]=toupper(cad[0]);
	for(count=1;count<length;count++)
	{
		if(cad[count]==' ')
		{
			i=count+1;
		}
		if(count==i)
		{
			cad[count]=toupper(cad[count]);
		}
	}
	printf("%s",cad);
}
void longitud(char resp)
{
	char cad[tam][20]; 
    int i=0,cont=0,longitud,mayor=0; 
    printf("¿Desea ingresar la cadena [%d]?\n*Si(1)\n*No(2)\nR:",++cont);
    fflush(stdin);
    scanf("%d",&resp);
    for(cont=0;resp!=2;cont++)
    {
	    printf("Introduzca la cadena:\n");
		fflush(stdin); 
	    scanf("%s",cad[cont]); 
	    strlen(cad[i]);
	    printf("La longitud es:%d\n",strlen(cad[cont]));
	    longitud=strlen(cad[cont]);
	    if (longitud>mayor)
	    {
	    	mayor=longitud;
	    	i=cont;
		}
	    printf("¿Desea ingresar la cadena [%d]?\n*Si(1)\n*No(2)\nR:",++cont);
	    scanf("%d",&resp);
	    cont++;
    }
    printf("La cadena %d: %s, es la de mayor longitud (%d)",++i,cad[i],mayor);
}
