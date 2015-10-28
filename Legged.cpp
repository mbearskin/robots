//Martha Winger-Bearskin
//CS 153 section A
//Legged Robot Class Implementation


#include "Legged.h"

float Legged:: speed()
{
    static const float x = 7.15;
    static const float y = 0.04;
    static const float noNeg = 0.0; //sets speed to this value if negative
    float speed;
    speed = (x - (y * (m_legs * m_legs)));
    if (speed < 0)
        speed = noNeg;
    return speed;
}

float Legged:: strength()
{
    static const float strength = 0.123;
    return strength;
}

float Legged:: toughness()
{
    static const float x= 1.4;
    float tough;
    tough = (x * (1.0/m_legs));
    return tough;
}

float Legged:: intelligence()
{
    static const float x = 2.4;
    float IQ;
    IQ = (x * (static_cast<float>(m_cpu)/m_apps));
    return IQ;
}
