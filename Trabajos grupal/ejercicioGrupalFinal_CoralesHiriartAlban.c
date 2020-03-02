/******************************************************************************

Ejercicio grupal Portafolio
Luis Corales, Diego Hiriart y Daniel Alban

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define tam 20

void numerosRepetidos(int);
void cosechas(float []);
void ingresosDatosMatriz(float[5][12]);
void sumaTranspuesta(int, int);
void mayorCadena(int);
void converMinMay(char []);

void main()
{
    int m, n, num, op = 0, i, mes, siNo;                 ///Declaración de variables
    float ventasDepart[5][12], COS[tam];
    char cadena[50] = "";
    
    do
    {
        printf("Escoja una opcion\n1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Ejercicio 6\n7. Salir\n");
        scanf("%d", &op);
        
        switch(op)
        {
            case 1:
                
                do
                {
                    printf("Ingrese el numero de elementos del vector (debe ser entre 1 y 100): ");
                    scanf("%d", &num);
                    
                }while(num < 1 || num > 100);
                
                numerosRepetidos(num);
                
                getch();					///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 2:
                printf("Cosechas anuales de cereal.\n");
                
                for(mes = 1, i = 0; mes <= 12; i++)    ///Ciclo que permite ingresar las toneladas cosechdas en el arreglo
                {
                    printf("Ingrese las toneladas de cosechas del mes %d:\n", mes++);     ///Se pide al usuario los datos de cada mes
                    scanf("%f", &COS[i]);     ///Se almacena el dato de toneladas cosechadas ingresado por el usuario
                }
                
                cosechas(COS);      ///Se llama a la función para obtener el promedio, cuantos meses con valores mayor al promedio, y mes con mayor producción
                
                getch();			///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 3:
                ingresosDatosMatriz(ventasDepart);
                
                getch();					///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 4:
                
                do
                {
                    printf("Ingrese las filas M (debe ser entre 1 y 50): ");
                    scanf("%d", &m);
                    
                }while(m < 1 || m > 50);
                    
                do
                {
                    printf("Ingrese las columnas N (debe ser entre 1 y 50): ");
                    scanf("%d", &n);
                    
                }while(n < 1 || n > 50);
                
                sumaTranspuesta(m, n);
                
                getch();					///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 5:
                printf("Ingrese una cadena: ");
                fflush(stdin);
                gets(cadena);
                
                converMinMay(cadena);
                
				getch();				///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 6:
                
                printf("Determinación de cadena de carecteres más larga.\n");
                
                do
                {
                    printf("¿Desea ingresar una cadena de caracteres (Sí:1 ó No:0)?\n");     ///Se pregunta al usuario si desea ingresar una cadena
                    scanf("%d", &siNo);     ///Se guarda la respuesta del usuario 
                }while(siNo!=1 && siNo!=0);
                
                mayorCadena(siNo);      ///Se llama a la función para evaluar la cadena más larga
                
                              
                getch();				///Estas lineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
            
            case 7:
                printf("Se ha salido del programa");
                exit(0);
            break;            
            
            default:
                printf("Opcion no valida\n");
                
                getch();				///Estalineas siguientes permiten limpiar al pantalla tras un enter
                system("cls");
            break;
        }
        
        
    }while(op != 7);
}


//Ejercicio 1	
void numerosRepetidos(int N)		///Definición de función
{
    int i, j, cont;
    float VECA[N], VECB[N];
    
    //Ingreso de datos vector
    for(i = 0; i < N; i++)
    {
        printf("Ingrese el elemento [%d]: ", i);
        scanf("%f", &VECA[i]);
    }
    
    //Impresion de datos vector
    printf("\nImpresion completa del vector\n");
    
    for(i = 0; i < N; i++)
    {
        printf("%.2f\t", VECA[i]);
    }
    
    //Remover datos duplicados
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < cont; j++)
        {
            if(VECA[i] == VECB[j])
            {
                break;
            }
        }
        
        if(j == cont)
        {
            VECB[cont] = VECA[i];
            cont++;
        }
    }
    
    printf("\nImpresion del arreglo sin datos repetidos\n");
    
    for(i = 0; i < cont; i++)
    {
        printf("%.2f\t", VECB[i]);
    }
}

//Ejercicio 2
void cosechas(float COS[])     ///Definición de la función
{
    int i, mesMax, contMayores = 0,mes;     ///Declaración de variables
    float suma = 0, promedio, max = 0;
    
    for(i = 0, mes = 1; i <= 12 ; i++, mes++)     ///Ciclo for para obtener la suma y el mes con la máxima producción
    {
        if(COS[i] > max)     ///Condicional para obtener el mes con mayor cosecha
        {
            max = COS[i];      
            mesMax = mes;
        }
        
        suma = suma + COS[i];     ///Se suman todas la cosechas para hacer el promedio
    }
    
    promedio = suma / 12;     ///Se obtiene el promedio
    
    for(i = 0; i<12; i++)     ///Sentencia iterativa para conocer cuantos meses tuvieron una producción mayor al promedio
    {
        if(COS[i] > promedio)     ///Sentencia if que aumenta del número de meses con producciones superiores al promedio si se cumple la condición
        {
            contMayores++;
        }
    }
    
    ///A continuación, se imprimen los 3 datos requeridos
    printf("a)El promedio de toneladas cosechadas es: %.2f.\n", promedio);
    printf("b)Existieron %d meses con cosechas superiores al promedio.\n", contMayores);
    printf("c)El mes con mayor cantidad de cocecha fue el mes %d.\n", mesMax);
}

//Ejercicio 3
void ingresosDatosMatriz(float ventasDept[5][12])		///Definición de función
{
    int i = 0, j = 0, mes = 1, mayorDept = 0, menorDept = 0;
    float ventasAnual = 0, ventasMensual = 0, mayorVenta = 0, menorVenta = 0, min = 99999999, max = 0;
    
    while(i < 5)
    {
        j = 0;
        
        while(j < 12)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &ventasDept[i][j]);
            j++;
        }
        
        i++;
    }
    
    i = 0;
    j = 0;
    
    printf("\n");
    
    while(j < 5)
    {
        printf("Depart %d\t", j);
        j++;
    }
    
    printf("\n");
    
    j = 0;
    
    while(j < 12)
    {
        i = 0;
        
        while(i < 5)
        {
            printf("%.2f\t\t", ventasDept[i][j]);
            
            ventasAnual = ventasAnual + ventasDept[i][j];
            ventasMensual = ventasMensual + ventasDept[i][j];
            
            i++;
        }
        
        printf("\n");
        
        printf("La venta del mes %d es de %.2f\n", mes++, ventasMensual);
        
        ventasMensual = 0;
        
        j++;
    }
    
    printf("La venta anual de la fabrica es %.2f\n\n", ventasAnual);
    
    i = 0;
    
    ventasMensual = 0;
    
    while(i < 5)
    {
        j = 6;
        
        if(ventasDept[i][j] > max)
        {
            mayorVenta = ventasDept[i][j];
            mayorDept = i;
        }
        else if(ventasDept[i][j] < min)
        {
            menorVenta = ventasDept[i][j];
            menorDept = i;
        }
        
        i++;
    }
    
    printf("La venta total del mes Julio es de %.2f\n", ventasMensual);
    printf("El departamento %d vendió %.2f", mayorDept, mayorVenta);
    
}

//Ejercicio 4
void sumaTranspuesta(int fila, int columna)		///Definición de función
{
    int i = 0, j = 0, filT = 0, colT = 0;
    float matrizA[tam][tam], matrizB[tam][tam], matrizBTrans[tam][tam];
    
    //Ingreso de datos de la matriz A
    while(i < fila)
    {
        j = 0;
        
        while(j < columna)
        {
            printf("Ingrese el elemento [%d][%d] de la matriz A: ", i, j);
            scanf("%f", &matrizA[i][j]);
            j++;
        }
        
        i++;
    }
    
    i = 0;
    
    //Ingreso de datos de la matriz B
    while(i < columna)
    {
        j = 0;
        
        while(j < fila)
        {
            printf("Ingrese el elemento [%d][%d] de la matriz B: ", i, j);
            scanf("%f", &matrizB[i][j]);
            j++;
        }
        
        i++;
    }
    
    i = 0;
    
    //Impresion de la matriz A
    
    printf("\nMatriz A:\n");
    
    while(i < fila)
    {
        j = 0;
        
        while(j < columna)
        {
            printf("%.2f\t", matrizA[i][j]);
            
            j++;
        }
        
        printf("\n");
        
        i++;
    }
    
    i = 0;
    
    //Impresion de la matriz B
    
    printf("\nMatriz B:\n");

    while(i < columna)
    {
        j = 0;
        
        while(j < fila)
        {
            printf("%.2f\t", matrizB[i][j]);
            
            j++;
        }
        
        printf("\n");
        
        i++;
    }
    
    j = 0;
    i = 0;
    
    //Impresion de la matriz B transpuesta
    
    printf("\nMatriz B transpuesta:\n");
    while(filT < fila)
    {
        colT = 0;
        i = 0;
        
        while(colT < columna)
        {
            matrizBTrans[filT][colT] = matrizB[i][j];
            
            printf("%.2f\t", matrizBTrans[filT][colT]);
            
            i++;
            colT++;
        }
        
        printf("\n");
        
        filT++;
        j++;
    }
    
    j = 0;
    i = 0;
    
    //Impresion de la suma de matrices
    
    printf("\nSuma de matrices:\n");
    
    while(i < fila)
    {
        j = 0;
        
        while(j < columna)
        {
            
            matrizBTrans[i][j] = matrizBTrans[i][j] + matrizA[i][j];
            printf("%.2f\t", matrizBTrans[i][j]);
            
            j++;
        }
        
        printf("\n");
        
        i++;
    }
}

//Ejercicio 5					
void converMinMay(char cad[50])		///Definición de función
{
    int i, cont = 0;
	
	cad[0] = toupper(cad[0]);
	
	while(cont < strlen(cad))
	{
		if(cad[cont] == ' ')
		{
			i = cont + 1;
		}
		
		if(cont == i)
		{
			cad[cont] = toupper(cad[cont]);
		}
		
		cont++;
	}
	
	printf("%s",cad);
}

//Ejercicio 6
void mayorCadena(int siNo)     ///Definición de función
{
    int max = 0, cont = 0, cadena;     ///Declaración de variables
    char cad[tam] = " ", larga[tam] = " ";
    
    while(siNo == 1)     ///Ciclo apra obtener las cadenas y compararlas
    {
        
        printf("Ingrese una cadena de caractéres (de 20 caractéres como máximo):\n");     ///Se pide al usuario que ingrese la cadena
        fflush(stdin);
		gets(cad);			///Almacenamiento de la cadena
        cont++;
            
        if(strlen(cad) > max)     ///Condicional para comprar cadenas y almacenar la más larga
        {
            max = strlen(cad);
            cadena = cont;
            strcpy(larga, cad);
        }
        
        do
        {
            printf("¿Desea ingresar una cadena de caracteres (Sí:1 ó No:0)?\n");     ///Se pregunta al usuario si desea ingresar más cadenas
            scanf("%d", &siNo);     ///Se almacena al respuesta
        }while(siNo != 1 && siNo != 0);
        
    }
    
    if(cont = 0)     ///Condicional para controlar el caso de que no se ingresen cadenas
    {
        printf("No se ingresaron cadenas.\n");     ///Se imprime si no se ingresan cadenas
    }
    else
    {
        printf("La cadena más larga ingresada fue cad%d, que contenía los caracteres: %s\n", cadena, larga);     ///Se imprime la cadena más larga
    }
    
}
