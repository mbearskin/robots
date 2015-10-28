//Martha Winger-Bearskin
//CS 153 section A
//Welder Robot Class Implementation


#include "Welder.h"

float Welder:: speed()
{
    static const float x = 0.1;
    static const float y = 0.22;
    static const float noNeg = 0.0; //sets speed to this value if negative 
    float speed;
    speed = ((x * m_powerSource) - (y * m_armorPlate * m_armorDensity));
    if (speed < 0)
        speed = noNeg;
    return speed;
}


float Welder:: strength()
{
    static const float x= 3.15;
    float strength;
    strength = (x * m_powerSource);
    return strength;
}

float Welder:: toughness()
{
    static const float x= 5.19;
    float tough;
    tough = (x * m_armorPlate * m_armorDensity);
    return tough;
}

float Welder:: intelligence()
{
    static const float IQ= 0.45;
    return IQ;
}