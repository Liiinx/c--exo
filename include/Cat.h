#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Creature.h"

using namespace std;

class Cat : public Creature
{
    private:
        string species;
    public:
        Cat();
        Cat(string name, float height, string species);
        virtual ~Cat();

        //getter setter
        string getSpecies();
        void setSpecies(string species);

};

#endif // CAT_H
