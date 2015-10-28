
#include "statsFunctions.h"


float avgSpeed(Robot  * r[], int size)
{
    float total= 0;
    float avg;
    for (int i = 0; i < size; i++)
        total+= r[i]->speed();
    avg = (total/size);
    return avg;
}


int highSpeed(Robot *r[], int size)
{
    float high = 0;
    int index;
    for (int i = 0; i < size; i++)
    {
        if(r[i]->speed() > high)
        {
            high = r[i]->speed();
            index = i;
        }
        
    }
    return index;
}

int lowSpeed(Robot *r[], int size)
{
    int index;
    float low = r[0]->speed();
    for (int i = 1; i < size; i++)
    {
        if(r[i]->speed() < low)
        {
            low = r[i]->speed();
            index = i;
        }
        
    }
    return index;
}

float avgStrength(Robot * r[], int size)
{
    float total= 0;
    float avg;
    for (int i = 0; i < size; i++)
        total+= r[i]->strength();
    avg = (total/size);
    return avg;
}


int highS(Robot *r[], int size)
{
    float high = 0;
    int index;
    for (int i = 0; i < size; i++)
    {
        if(r[i]->strength() > high)
        {
            high = r[i]->strength();
            index = i;
        }
        
    }
    return index;
}



int lowS(Robot *r[], int size)
{
    int index;
    float low = r[0]->strength();
    for (int i = 1; i < size; i++)
    {
        if(r[i]->strength() < low)
        {
            low = r[i]->strength();
            index = i;
        }
        
    }
    return index;
}


float avgTough(Robot * r[], int size)
{
    float total= 0;
    float avg;
    for (int i = 0; i < size; i++)
        total+= r[i]->toughness();
    avg = (total/size);
    return avg;
}


int highT(Robot *r[], int size)
{
    int index;
    float high = 0;
    for (int i = 0; i < size; i++)
    {
        if(r[i]->toughness() > high)
        {
            high = r[i]->toughness();
            index = i;
        }
    }
    return index;
}


int lowT(Robot *r[], int size)
{
    int index;
    float low = r[0]->toughness();
    for (int i = 1; i < size; i++)
    {
        if(r[i]->toughness() < low)
        {
            low = r[i]->toughness();
            index = i;
        }
    }
    return index;
}


float avgIntel(Robot * r[], int size)
{
    float total= 0;
    float avg;
    for (int i = 0; i < size; i++)
        total+= r[i]->intelligence();
    avg = (total/size);
    return avg;
}


int highI(Robot *r[], int size)
{
    int index;
    float high = 0;
    for (int i = 0; i < size; i++)
    {
        if(r[i]->intelligence() > high)
        {
            high = r[i]->intelligence();
            index = i;
        }
    }
    return index;
}


int lowI(Robot *r[], int size)
{
    int index;
    float low = r[0]->intelligence();
    for (int i = 1; i < size; i++)
    {
        if(r[i]->intelligence() < low)
        {
            low = r[i]->intelligence();
            index = i;
        }
    }
    return index;
}
