//Martha Winger-Bearskin
//CS 153 section A
//Bender Robot Class


#ifndef BENDER_H
#define BENDER_H

#include <iostream>
#include "Industrial.h"

class Bender: public Industrial
{
    
protected:
    int m_geo;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Bender(string s, int p, int g) : Industrial(s,p), m_geo(g) {}
    
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
    virtual ~Bender() {};
    
    
    
    
    
};


#endif