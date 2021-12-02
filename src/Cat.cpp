#include "Cat.h"

Cat::Cat(string name, float height, string species)
{
    Creature::name = name;
    Creature::height = height;
    this->species = species;

}

Cat::~Cat()
{
    //dtor
}

string Cat::getSpecies()
{
    return this->species;
}

void Cat::setSpecies(string species)
{
    this->species = species;
}
