#include "Tile.h"

Tile::Tile(double timeStep)
: timeStep(timeStep)
{}

void Tile::iterate(double timeStep)
{
    printf("Iterating Tile\n");
    for(const auto &object : this->listOfObjects)
    {
        object->iterate(timeStep, this->mapOfResources);
    }
}

void Tile::addObject(Object &objectToAdd)
{
    this->listOfObjects.push_back(&objectToAdd);
}
