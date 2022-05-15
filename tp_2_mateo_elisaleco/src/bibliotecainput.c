/*
 * bibliotecainput.c
 *
 *  Created on: 14 may. 2022
 *      Author: Mateo Elisaleco
 */

#include <stdio.h>
#include <stdlib.h>
int id;

void cargaPasajero(void)
{

passenger.id = idPassajero();
passenger.name = pedirString();
passenger.lastname = pedirString();
passenger.price = PedirFloat();
passenger.flycode =	pedirString();
passenger.typePassenger = PedirInt();
passenger.statusFlight = PedirInt();
passenger.isEmpty =PedirInt();
if(FlagHayPasajero != 0)
{
	FlagHayPasajero = 0;
}
		return;

}

int idPassajero()
{

}
