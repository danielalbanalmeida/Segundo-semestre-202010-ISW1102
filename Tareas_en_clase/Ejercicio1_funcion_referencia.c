#include <stdio.h>
int f1(int *);

int main()
{
	int i, valor;
	for (i = 1; i <= 3; i++)
	{
		printf("Ingrese el valor de k:");
		scanf("%d",&valor);
		printf("\n\nValor de K antes de llamar a la función: %d\n", ++valor);
		printf("\nValor de K después de llamar a la función: %d\n", f1(&valor));
		printf("\n\nValor de K despues de llamar a la función: %d\n", valor);
	}
}
int f1(int *R)
{
*R += *R;
return *R;
}
