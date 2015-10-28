//Martha Winger-Bearskin
//CS 153 Section A
//Main Function for Robot census implementation


#include <iostream>
using namespace std;
#include<iomanip>
#include "Bender.h"
#include "Welder.h"
#include "Legged.h"
#include "Wheeled.h"
#include "Hover.h"
#include "statsFunctions.h"

int main()
{
    int type;
    string name;
    int size;
    int high;
    int low;
    
    cin >>  size;
    Robot * allBots[size];
    cin >> type;
    cin >> name;
    for (int i = 0; i < size; i++)
    {
        if (type == BENDER || type == WELDER)
        {
            int pow;
            cin >> pow;
            if (type == BENDER)
            {
                int geo;
                cin >> geo;
                allBots[i] = new Bender(name, pow, geo);
            }
            else
            {
                int plate;
                float den;
                cin >> plate;
                cin >> den;
                allBots[i] = new Welder(name, pow, plate, den);
            }
        }
        if (type == LEGGED || type == WHEELED || type == HOVER)
        {
            int cpu;
            int app;
            cin >> cpu;
            cin >> app;
            if(type == LEGGED)
            {
                int legs;
                cin >> legs;
                if (legs % 2 != 0)
                {
                    cout << "you must have even # of legs" << endl;
                    cout << "Reenter legs: ";
                    cin >> legs;
                }
                allBots[i] = new Legged(name, cpu, app, legs);
            }
            if (type == WHEELED)
            {
                int wheel;
                cin >> wheel;
                allBots[i] = new Wheeled(name, cpu, app, wheel);
            }
            if (type == HOVER)
            {
                int roc;
                int eng;
                cin >> roc;
                cin >> eng;
                allBots[i] = new Hover(name, cpu, app, roc, eng);
            }
            
            
        }
        
    }

    
    cout << setprecision(4);

    //Display speed results
    cout << endl;
    cout << "The average speed is " << avgSpeed(allBots, size);
    cout << " circus-rings per second." << endl;
    high = highSpeed(allBots,size);
    cout << "The highest speed value is " << allBots[high]->speed();
    cout << " by " << allBots[high]->getName() << endl;
    low = lowSpeed(allBots,size);
    cout << "The lowest speed value is " << allBots[low]->speed();
    cout << " by " << allBots[low]->getName() << endl;
    
    //Display strengh results
    cout << "The average stregnth is " << avgStrength(allBots, size);
    cout << " dinosaur-power." << endl;
    high = highS(allBots,size);
    cout << "The highest stregnth value is " << allBots[high]->strength();
    cout << " by " << allBots[high]->getName() << endl;
    low = lowS(allBots,size);
    cout << "The lowest stregnth value is " << allBots[low]->strength();
    cout << " by " << allBots[low]->getName() << endl;
    
    //Display toughness results
    cout << "The average toughness is " << avgTough(allBots, size);
    cout << " wrecking-balls." << endl;
    high = highT(allBots,size);
    cout << "The highest toughness value is " << allBots[high]->toughness();
    cout << " by " << allBots[high]->getName() << endl;
    low = lowT(allBots,size);
    cout << "The lowest toughness value is " << allBots[low]->toughness();
    cout << " by " << allBots[low]->getName() << endl;
    
    //Display intelligence results
    cout << "The average intelligence is " << avgIntel(allBots, size);
    cout << " nano-Turings." << endl;
    high = highI(allBots,size);
    cout << "The highest intelligence value is " << allBots[high]->toughness();
    cout << " by " << allBots[high]->getName() << endl;
    low = lowI(allBots,size);
    cout << "The lowest intelligence value is " << allBots[low]->toughness();
    cout << " by " << allBots[low]->getName() << endl;
    
    for(int i = 0; i < size; i++)
    {
        delete allBots[i];
    }

    return 0;
}

