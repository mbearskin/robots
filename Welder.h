//Martha Winger-Bearskin
//CS 153 section A
//Welder Robot Class


#ifndef WELDER_H
#define WELDER_H

#include <iostream>
#include "Industrial.h"

class Welder: public Industrial
{
    
protected:
    int m_armorPlate;
    float m_armorDensity;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Welder(string s, int p, int plate, float density) :
    Industrial(s,p), m_armorPlate(plate), m_armorDensity(density) {}
    
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
    virtual ~Welder() {};
};
#endif