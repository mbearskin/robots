//Martha Winger-Bearskin
//CS 153 section A
//Domestic Robot Class


#ifndef DOMESTIC_H
#define DOMESTIC_H

#include <iostream>
#include "Robot.h"

class Domestic: public Robot
{
    
protected:
    int m_cpu;
    int m_apps;
public:
    
    // Purpose: Default Constructor
    // Postconditions: name is set to parameters
    // -- INLINE
    Domestic(string s, int c, int a) : Robot(s), m_cpu(c), m_apps(a) {}
    
    // Purpose: Destructor
    // -- VIRTUAL
    virtual ~Domestic() {};
    
};


#endif