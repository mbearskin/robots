//Martha Winger-Bearskin
//CS 153 section A
//Hover Robot Class Implementation


#include "Hover.h"

float Hover:: speed()
{
    static const float x = 0.59;
    static const float noNeg = 0.0; //sets speed to this value if negative
    float speed;
    speed = (x * m_rocket * m_engines);
    if (speed < 0)
        speed = noNeg;
    return speed;
}

float Hover:: strength()
{
    static const float x = 1.12;
    float strength;
    strength = (x * (1.0/m_engines));
    return strength;
}

float Hover:: toughness()
{
    static const float tough = 0.99;
    return tough;
}

float Hover:: intelligence()
{
    static const float x = 5.2;
    static const float y = 0.8;
    float IQ;
    IQ = (x * (static_cast<float>(m_cpu)/m_apps) - y * (1.0/m_rocket));
    return IQ;
}