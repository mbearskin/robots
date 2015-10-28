

#ifndef STASFUNCTIONS_H
#define STASFUNCTIONS_H

#include <iostream>
#include "Bender.h"
#include "Welder.h"
#include "Legged.h"
#include "Wheeled.h"
#include "Hover.h"


// Function prototypes for stat functions used in main.

float avgSpeed(Robot  * r[], int size);

int highSpeed(Robot *r[], int size);

int lowSpeed(Robot *r[], int size);

float avgStrength(Robot * r[], int size);

int highS(Robot *r[], int size);

int lowS(Robot *r[], int size);

float avgTough(Robot * r[], int size);

int highT(Robot *r[], int size);

int lowT(Robot *r[], int size);

float avgIntel(Robot * r[], int size);

int highI(Robot *r[], int size);

int lowI(Robot *r[], int size);




#endif