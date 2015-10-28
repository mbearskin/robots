//Martha Winger-Bearskin
//CS 153 section A
//Legged Robot Class


#ifndef LEGGED_H
#define LEGGED_H

#include <iostream>
#include "Domestic.h"

class Legged: public Domestic
{
    
protected:
    int m_legs;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Legged(string s, int cpu, int app, int leg):
    Domestic(s,cpu,app), m_legs(leg) {}
    
    // Purpose: calculates and returns the speed of a robot.
    virtual float speed();
    
    // Purpose: calculates and returns the strength of a robot.
    virtual float strength();
    
    // Purpose: calculates and returns the toughness of a robot.
    virtual float toughness();
    
    // Purpose: calulates and returns the intelligence of a robot.
    virtual float intelligence();
    
    
    // Purpose: Destructor
    // -- VIRTUAL
    virtual ~Legged() {};
};
#endif