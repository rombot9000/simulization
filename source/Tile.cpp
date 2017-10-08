#include "Tile.h"

Tile::Tile(double timeStep)
: timeStep(timeStep)
{}

void Tile::iterate(double timeStep)
{
    printf("Iterating Tile");
}

void Tile::addObject(Object &objectToAdd)
{
    this->listOfObjects.push_back(&objectToAdd);
}
