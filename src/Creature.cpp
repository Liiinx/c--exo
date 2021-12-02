#include "Creature.h"

Creature::Creature()
{

}

Creature::Creature(string name, float height)
{
    this->name = name;
    this->height = height;
}

Creature::~Creature()
{
    //dtor
}
time_t Creature::getBirthDate()
{
    return this->birthDate;
}
string Creature::getName()
{
    return this->name;
}
float Creature::getHeight()
{
    return this->height;
}
float Creature::getWeight()
{
    return this->weight;
}
void Creature::setName(string name)
{
    this->name = name;
}
void Creature::setheight(float height)
{
    this->height = height;
}
void Creature::setWeight(float weight)
{
    this->weight = weight;
}


