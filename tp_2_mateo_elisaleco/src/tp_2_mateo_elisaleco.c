/*
 ============================================================================
 Name        : tp_2_mateo_elisaleco.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "bibliotecainput"
int opcIngresada;
int FlagHayPasajero =1;
int opcIngresada;
int opcIngresadab;



int main(void) {
	/* crear estructura max 2000 elementos
	char nombre
	char apellidp
	float precio
	char flycode [10]
	int TipoPasajero
	int estadoDeVuelo
	int estaVacio
	*/
	/*
	  menu
	  1. altas calcula num id
	  2. modificar busca num id y nombre apellido precio tipo codigo
	  3. BAJA da de baja un usuario
	  4.informar (menu sec)
	  	  1. list de pasajeros orden alfa por apellido y tipo de pas
	  	  2. total y promedio de los precios de pasaje y num de pas sobre el prom
	  	  3.listado de cuelos activo  por codigo de vue

	 */
	setbuf(stdout, NULL);
	do
		{

			printf("dar de alta \n");
			printf("ingrese 2 para modificar pasajero \n ");
			printf("ingrese 3 para dar de baja un pasajero \n ");
		    printf("ingrese 4 para menu de informes \n ");
		    scanf("%d", &opcIngresada);

		       switch (opcIngresada)
		       {

		       	   case 1 :
		       		 cargaPasajero();


		       		   break;
		       	   case 2 :
		       		   if(FlagHayPasajero != 0)
		       		   {
		       		cargaPasajero();
		       		   }else
		       		   {
		       			printf("Primero cargue un pasajero ");

		       		   }

		       		   break;
		       		  case 3 :
			       		   if(FlagHayPasajero != 0)
			       		   {
			       		modificarPasajero();
			       		   }else
			       		   {
			       			printf("Primero cargue un pasajero ");

			       		   }


		       			  break;
		       		  case 4 :
			       		   if(FlagHayPasajero != 0)
			       		   {
			       		   printf("ingrese 1 para Listado de los pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero. \n ");
			       		   printf("ingrese 2 Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio ");
			       		   printf("ingrese 3 para Listado de los pasajeros por Código de vuelo y estados de vuelos ‘ACTIVO’ \n ");
			       		   scanf("%d", &opcIngresadab);

			       		   switch(opcIngresadab)
				   {

					case 1 :
					OrdenarLista();
						break;
					case 2 :
						TotalYPromedio();
						break;
					case 3 :
						ListadoPorCodigoActivos();
						break;

					}
			       		   }


		       			  break;


			break;

		}

	}
	while(opcIngresada != 5);

	return EXIT_SUCCESS;
}
