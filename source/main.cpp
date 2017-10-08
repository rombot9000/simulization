#include "Config.h"
#include "Tile.h"
#include "Plant.h"

int main(int argc, char const *argv[])
{
    Tile tile;
    Plant plant;
    tile.addObject(plant);
    do
    {
        tile.iterate();
    }
    while(getchar() != '0');

    return 0;
}
