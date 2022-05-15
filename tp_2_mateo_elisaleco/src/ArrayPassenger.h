/*
 * ArrayPassenger.h
 *
 *  Created on: 14 may. 2022
 *      Author: Mateo Elisaleco
 */
#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "bibliotecainput.h"

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_
struct
{
int id;
char name[51];
char lastName[51];
float price;
char flycode[10];
int typePassenger;
int isEmpty;
}typedef Passenger;


int initPassengers(Passenger* list, int len)
{
return 0;
}

int addPassenger(Passenger* list, int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[])
{
return -1;
}


int findPassengerById(Passenger* list, int len,int id)
{
return NULL
}

int removePassenger(Passenger* list, int len, int id)
{
return -1;
}

int sortPassengers(Passenger* list, int len, int order)
{
return 0;
}

int printPassenger(Passenger* list, int length)
{
return 0;
}

int sortPassengers(Passenger* list, int len, int order)
{
return 0;
}



#endif /* ARRAYPASSENGER_H_ */
