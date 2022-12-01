#include<stdio.h>
#include <string.h>
#include<math.h>
void main()
{
	double polinomio1[50];
	double polinomio2[50];
	int numerocoeficientes,numerocoef2;
	int coeficientes[20];
	int coeficientes2[20];
	int x;
	float poliresultado;
	int opcion,i;

	printf("1.- Resolver\n2.- Multiplicar\n3.- Dividir");
	printf("\nQue desea hacer?: ");
	scanf_s("%i",&opcion);
	printf("Numero de coeficientes: "); //primer polinomio 
	scanf_s("%i", &numerocoeficientes);
	
	for (i = 0; i < numerocoeficientes; i++)
	{
		printf("Coeficiente %i: ", i);
		scanf_s("%i", &coeficientes[i]);
	}

	if (opcion == 1) //calcular con x
	{
		printf("El valor de X para calcular: ");
		scanf_s("%i",&x);
		float poliresultado = 0;
		for (i = 0; i < numerocoeficientes; i++) //calculo de el polinomio
		{
			poliresultado =poliresultado+ coeficientes[i] * pow(x, i);
		}
		printf("\nValor del polinomio evaluado en %i es: %f", x, poliresultado); //resultado
	}
	if (opcion == 2)
	{
		printf("Multiplicacion de polinomios");
		printf("Numero de coeficientes del segundo polinomio: "); //segundo polinomio 
		scanf_s("%i", &numerocoef2);
		for (i = 0; i < numerocoef2; i++)
		{
			printf("Coeficiente %i: ", i);
			scanf_s("%i", &coeficientes2[i]);
		}
		float poliresultado = 0;
		for (int t=0;t<numerocoef2;t++)
		{
			for (i=0;i<numerocoeficientes;i++)
			{
				poliresultado = poliresultado + (coeficientes[i]) * (coeficientes2[t]);
			}
		}

	}
	if (opcion == 3)
	{
		printf("Division de polinomios");
		printf("\nEscribe el primer polinomio");

	}

}