//Martha Winger-Bearskin
//CS 153 section A
//Bender Robot Class Implementation


#include "Bender.h"

float Bender:: speed()
{
    static const float x = 0.3;
    static const float y = 0.02;
    static const float noNeg = 0.0; //sets speed to this value if negative
    float speed;
    speed = ((x * m_powerSource) +(y * m_geo));
    if (speed < 0)
        speed = noNeg;
    return speed;
}


float Bender:: strength()
{
    static const float x= 0.55;
    float strength;
    strength = (x * m_powerSource);
    return strength;
}

float Bender:: toughness()
{
    static const float tough = 3.1415;
    return tough;
}

float Bender:: intelligence()
{
    static const float x = 0.34;
    static const float y = 1.3;
    float IQ;
    IQ =( x + (y * m_geo));
    return IQ;
}

