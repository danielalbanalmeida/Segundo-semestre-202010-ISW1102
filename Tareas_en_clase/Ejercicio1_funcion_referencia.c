#include <stdio.h>
int f1(int *);

int main()
{
	int i, valor;
	for (i = 1; i <= 3; i++)
	{
		printf("Ingrese el valor de k:");
		scanf("%d",&valor);
		printf("\n\nValor de K antes de llamar a la funci�n: %d\n", ++valor);
		printf("\nValor de K despu�s de llamar a la funci�n: %d\n", f1(&valor));
		printf("\n\nValor de K despues de llamar a la funci�n: %d\n", valor);
	}
}
int f1(int *R)
{
*R += *R;
return *R;
}
