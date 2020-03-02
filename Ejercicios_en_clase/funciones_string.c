#include <stdio.h>
#include <string.h>
#define tam 50
void comparar(char [tam], char [tam]);
void compararn(char [tam], char [tam]);
void copiarcad(char [tam], char [tam]);
void esdigito(char c);
void escaracter(char c1);
void esMayus(char c1);
void esMinus(char c1);
void verifMayus(char c1);
void verifMinus(char c1);

void main()
{
	char cad[tam], cad1[tam],c,c1;
	printf("Ingrese una cadena:");
	gets(cad);
	printf("Ingrese otra cadena:");
	gets(cad1);
	comparar(cad,cad1);
	compararn(cad,cad1);
	copiarcad(cad,cad1);
	esdigito(c);
	escaracter(c);
	esMayus(c);
	esMinus(c);
	verifMayus(c);
	verifMinus(c);
}
void comparar(char cad[tam],char cad1[tam])
{
	if(strcmp(cad,cad1)==0)
			printf("Son iguales\n");	
	else
			printf("Son diferentes\n");	
	
}
void compararn(char cad[tam],char cad1[tam])
{
	if(strncmp(cad,cad1,4)==0)
			printf("Son iguales\n");	
	else
			printf("Son diferentes\n");	
}
void copiarcad(char cad[tam],char cad1[tam])
{
	char completo[tam],cad2[tam];
	printf("Ingrese su apellido:");
	gets(cad2);
	strcpy(completo,cad1);
	strcat(completo," ");
	strcat(completo,cad2);
	printf("%s\n",completo);
}
void esdigito(char c)
{
    printf("Ingrese un caracter: ");
    scanf("%c",&c);

    if (isdigit(c) == 0)//Comprueba si el caracter es una letra.
         printf("%c no es un digito\n",c);
    else
         printf("%c es un digito\n",c);
}
void escaracter(char c)
{
    fflush(stdin);
	printf("Ingrese un caracter:");
    scanf("%c",&c);
		
    if (isalpha(c) == 0)//Comprueba si el caracter es una letra.
         printf("%c no es un caracter\n",c);
    else
         printf("%c es un caracter\n",c);
}	
void esMayus(char c)
{
    fflush(stdin);
	printf("Verifica si es mayuscula");
	printf("Ingrese un caracter:");
    scanf("%c",&c);
		
    if (isupper(c) == 0)//Comprueba si el caracter es una letra.
         printf("%c no es Mayuscula\n",c);
    else
         printf("%c es una Mayuscula\n",c);
}		

void esMinus(char c)
{
    
	fflush(stdin);
	printf("Verifica si es minuscula");
	printf("Ingrese un caracter:");
    scanf("%c",&c);
		
    if (islower(c) == 0)//Comprueba si el caracter es una letra.
         printf("%c no es Minuscula\n",c);
    else
         printf("%c es una Minuscula\n",c);
}		
void verifMayus(char c)
{

	fflush(stdin);
	printf("Convierte a mayuscula\n");
	printf("Ingrese un caracter:");
    scanf("%c",&c);
	printf("%c\n",toupper(c));	
}	
void verifMinus(char c)
{
	fflush(stdin);
	printf("Convierte a minuscula\n");
	printf("Ingrese un caracter:");
    scanf("%c",&c);
	printf("%c",tolower(c));	
    
}	



