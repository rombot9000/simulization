#pragma once

#include <map>
#include <list>
#include "Definitions.h"
#include "Object.h"

class Tile
{
public:
    //constructor
    Tile(double timeStep = 1);
    //public functions
    void iterate(double timeStep = 1);
    void addObject(Object &objectToAdd);
    //public members
    std::list<Object*> listOfObjects;
protected:
    std::map<groundType, double> mapGroundComposition;
    mapResourceTypeToDouble mapOfResources;
    double timeStep;
private:
};
