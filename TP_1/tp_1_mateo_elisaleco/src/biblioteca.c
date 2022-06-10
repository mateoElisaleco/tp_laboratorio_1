

#include <stdio.h>
#include "biblioteca.h"


float pedirDecimal()
{
	float numero;

	do
	{
		printf("ingrese un numero");
		scanf("%f", &numero);
	}
	while(numero < 5000 || numero > 500000);
	return numero;
}

int pedirNumeroEntero()
{
	int numero;
	do
	{

			printf("ingrese un numero");
			scanf("%d", &numero);
	}
	while(numero < 0 || numero > 14000);
	return numero;

}



float multiplicar(float x , float y )
{
	float resultado;
	resultado = x * y;

	return resultado;
}


float dividir(float x, float y )
{

	float resultado;
	resultado = x / y;
	return resultado ;

}


float resta(float x, float y)
{

	float resultado;
	resultado = x-y;
	return resultado;

}


int validarDatos(int x, float y, float z)
{
	if (x > 0 && x < 14000 && y > 5000 && y < 500000 && z > 5000 && z < 500000)
	{

		return 1;

	}
	else
	{

		return 0;

	}

}



void mostrarDatos(float precioAerolineas, float difDePrecio, float precioLatam, int kmIngresados, float debitoAerolineas, float creditoAerolineas, float bitcoinAerolineas , float precioPorKmAerolineas, float debitoLatam, float creditoLatam, float bitcoinLatam , float precioPorKmLatam)
{

	if( validarDatos(kmIngresados, precioLatam, precioAerolineas ) == 1)
	{

		printf("KMs Ingresados %d \n",kmIngresados);
		printf(" precio Aerolineas %.2f \n",precioAerolineas);
		printf("a) precio con tarjeta de debito Aerolineas %.2f \n",debitoAerolineas);
		printf("b) precio con tarjeta de credito Aerolineas %.2f \n",creditoAerolineas);
		printf("c) precio en bitcoin Aerolineas %.2f \n",bitcoinAerolineas);
		printf("d) precio por km Aerolineas %.2f \n \n",precioPorKmAerolineas);

		printf(" precio Latam %.2f \n",precioLatam);
		printf("a) precio con tarjeta de debito Latam %.2f \n",debitoLatam);
		printf("b) precio con tarjeta de credito Latam %.2f \n",creditoLatam);
		printf("c) precio en bitcoin Latam %.2f \n",bitcoinLatam);
		printf("d) precio por km Latam %.2f \n \n",precioPorKmLatam);

		if(difDePrecio < 0)
		{
		printf("Aerolineas es %.2f pesos mas barata \n",difDePrecio * -1 );
		}
		else
		{

			printf("Latam es %.2f pesos mas barata \n",difDePrecio );

		}

	}
	else
	{
		printf("hay datos mal ingresados reviselos y vuelva a intentar \n");


	}
}


