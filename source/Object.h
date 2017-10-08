#pragma once

#include "Definitions.h"

class Object
{
public:
    void iterate(double timeStep, mapResourceTypeToDouble mapOfResources);
protected:
    mapResourceTypeToDouble mapResourcesToIntake;
};
