#include "Object.h"

void Object::iterate(double timeStep, mapResourceTypeToDouble mapOfAvailableResources)
{
    for(const auto &intakePair : this->mapResourcesToIntake)
    {
        printf("Iterating Object\n");
        if( !mapOfAvailableResources.count(intakePair.first) ||
            mapOfAvailableResources[intakePair.first] < intakePair.second
        )
        {
            printf("Missing resource!\n");
            return;
        }
    }
    printf("All resources found.\n");
}
