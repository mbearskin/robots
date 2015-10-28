//Martha Winger-Bearskin
//CS 153 section A
//Industrial Robot Class


#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

#include <iostream>
#include "Robot.h"

class Industrial: public Robot
{

protected:
    int m_powerSource;
public:

// Purpose: Default Constructor
// Postconditions: name is set to parameters
// -- INLINE
Industrial(string s, int p) : Robot(s), m_powerSource(p) {}
    
// Purpose: Destructor
// -- VIRTUAL
virtual ~Industrial() {};
    
    
    
};


#endif