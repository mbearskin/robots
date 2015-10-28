//Martha Winger-Bearskin
//CS 153 section A
//Wheeled Robot Class Implementation


#include "Wheeled.h"

float Wheeled:: speed()
{
    static const float x = 0.33;
    static const float noNeg = 0.0; //sets speed to this value if negative
    float speed;
    speed = (x * (m_wheel * m_wheel));
    if (speed < 0)
        speed = noNeg;
    return speed;
}

float Wheeled:: strength()
{
    static const float strength = 4.444;
    return strength;
}

float Wheeled:: toughness()
{
    static const float x= 5.12;
    static const float y= 0.7;
    float tough;
    tough = (x - ( y * m_wheel));
    return tough;
}

float Wheeled:: intelligence()
{
    static const float x = 1.3;
    float IQ;
    IQ = (x * (static_cast<float>(m_cpu)/m_apps));
    return IQ;
}