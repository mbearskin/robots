//Martha Winger-Bearskin
//CS 153 section A
//Hover Robot Class


#ifndef HOVER_H
#define HOVER_H

#include <iostream>
#include "Domestic.h"

class Hover: public Domestic
{
    
protected:
    int m_rocket;
    int m_engines;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Hover(string s, int cpu, int app, int r, int e):
    Domestic(s,cpu,app), m_rocket(r), m_engines(e) {}
    
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
    virtual ~Hover() {};
};
#endif