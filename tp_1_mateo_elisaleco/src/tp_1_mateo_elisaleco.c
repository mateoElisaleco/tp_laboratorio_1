

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
	int opcIngresada= 0;  //
	int aerolineaIngresada; //
	int kmIngresados= 0; //
	float precioAerolineas= 0; //
	float precioLatam= 0; //3
	float debitoAerolineas; //
	float debitoLatam; //
	float difDePrecio; //
	float precioPorKmLatam; //
	float precioPorKmAerolineas; //
	float creditoLatam; //
	float creditoAerolineas; //
	float bitcoinAerolineas; //
	float bitcoinLatam; //
	float precioBitcoin = 4606954.55; //
	int banderaResultados = 0;

	setbuf(stdout, NULL);

	do
		{

			printf("ingrese 1 para ingresar km \n ");
				if(precioAerolineas != 0 && precioLatam != 0)
				{
					printf("ingrese 2 para ingresar precio de vuelo \n Precio Vuelo Aerolineas-%.2f \n Precio Vuelo Latam-%.2f \n ", precioAerolineas, precioLatam);
				}
				else
				{

					printf("ingrese 2 para ingresar precio de vuelo \n Precio Vuelo Aerolineas \n Precio Vuelo Latam \n ");

				}
			printf("ingrese 3 para calcular los costos \n ");
		    printf("ingrese 4 para informar resultados \n ");
		    printf("ingrese 5 para carga forzada de datos \n ");
		    printf("ingrese 6 para salir \n");
		    scanf("%d", &opcIngresada);

		       switch (opcIngresada)
		       {

		       	   case 1 :
		       		   kmIngresados = pedirNumeroEntero();

		       		   break;
		       	   case 2 :

		       		   printf("ingrese 1 para cambiar precio de aerolineas: %.2f \n ", precioAerolineas);
		       		   printf("ingrese 2 para cambiar precio LATAM: %.2f \n ",precioLatam);
		       		   scanf("%d", &aerolineaIngresada);
		       		   switch(aerolineaIngresada)
			   {

				case 1 :
					precioAerolineas = pedirDecimal();
					aerolineaIngresada = 0;
					break;
				case 2 :
					precioLatam = pedirDecimal();
					aerolineaIngresada = 0;
					break;

				}

		       		   break;
		       		  case 3 :
		       			  if(validarDatos(kmIngresados, precioAerolineas, precioLatam) == 1)
		       			  {

		       				  debitoAerolineas= multiplicar(precioAerolineas, 0.9);
		       				  debitoLatam= multiplicar(precioLatam, 0.9);
		       				  creditoAerolineas= multiplicar(precioAerolineas, 1.25);
		       				  creditoLatam= multiplicar(precioLatam, 1.25);
		       				  bitcoinAerolineas = dividir(precioAerolineas, precioBitcoin);
		       				  bitcoinLatam = dividir(precioLatam, precioBitcoin);
		       				  precioPorKmAerolineas = dividir(precioAerolineas, kmIngresados);
		       				  precioPorKmLatam = dividir (precioLatam , kmIngresados);
		       				  difDePrecio = resta(precioAerolineas, precioLatam);
		       				  banderaResultados = 1;
		       			  }
		       			  else
		       			  {

		       				  printf("hay datos que no han sido ingresados \n");

		       			  }


		       			  break;
		       		  case 4 :
		       			  if(banderaResultados ==1)
		       			  {

		       				  mostrarDatos(precioAerolineas, difDePrecio, precioLatam, kmIngresados, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioPorKmAerolineas, debitoLatam, creditoLatam, bitcoinLatam, precioPorKmLatam);

		       			  }
		       			  else
		       			  {

		       				  printf("ingrese todos los datos y calcule los costos antes de elegir esta opcion \n");

		       			  }


		       			  break;
		       		  case 5 :

		       			  kmIngresados = 7090;
		       			  precioAerolineas= 162965;
		       			  precioLatam= 159339;


		       			  debitoAerolineas= multiplicar(precioAerolineas, 0.9);
		       			  debitoLatam= multiplicar(precioLatam, 0.9);
		       			  creditoAerolineas= multiplicar(precioAerolineas, 1.25);
		       			  creditoLatam= multiplicar(precioLatam, 1.25);
		       			  bitcoinAerolineas = dividir(precioAerolineas, precioBitcoin);
		       			  bitcoinLatam = dividir(precioLatam,precioBitcoin );
		       			  precioPorKmAerolineas = dividir(precioAerolineas, kmIngresados);
		       			  precioPorKmLatam = dividir (precioLatam , kmIngresados);
		       			  difDePrecio = resta(precioAerolineas, precioLatam);

				mostrarDatos(precioAerolineas, difDePrecio, precioLatam, kmIngresados, debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioPorKmAerolineas, debitoLatam, creditoLatam, bitcoinLatam, precioPorKmLatam); // FX a armar


			break;
		case 6 :


			break;

		}

	}
	while(opcIngresada != 6);

		return 0;

}

