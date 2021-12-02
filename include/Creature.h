#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <string>

using namespace std;

class Creature
{
    protected:
        float height;
        float weight;
        string name;
        time_t birthDate;

    public:
        Creature();
        Creature(string name, float height);
        virtual ~Creature();

        //getter setter
        string getName();
        time_t getBirthDate();
        float getHeight();
        float getWeight();
        void setName(string name);
        void setheight(float height);
        void setWeight(float weight);
        void setBirthDate(string birthDate);

};

#endif // CREATURE_H
