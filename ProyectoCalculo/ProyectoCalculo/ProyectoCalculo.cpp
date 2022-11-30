#include<stdio.h>
#include <string.h>
void main()
{
	double polinomio1[50];
	double polinomio2[50];
	double x;
	double poliresultado;
	int opcion;

	printf("1.- Resolver\n2.- Multiplicar\n3.- Dividir");
	printf("\nQue desea hacer?: ");
	scanf_s("%i",&opcion);

	if (opcion == 1)
	{
		printf("Escribe el polinomio");
	}
	if (opcion == 2)
	{
		printf("Multiplicacion de polinomios");
		printf("\nEscribe el primer polinomio");
	}
	if (opcion == 3)
	{
		printf("Division de polinomios");
		printf("\nEscribe el primer polinomio");
	}

}