//Martha Winger-Bearskin
//CS 153 section A
//Wheeled Robot Class


#ifndef WHEELED_H
#define WHEELED_H

#include <iostream>
#include "Domestic.h"

class Wheeled: public Domestic
{
    
protected:
    int m_wheel;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Wheeled(string s, int cpu, int app, int w):
    Domestic(s,cpu,app), m_wheel(w) {}
    
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
    virtual ~Wheeled() {};
};
#endif