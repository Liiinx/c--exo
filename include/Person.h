#ifndef PERSON_H
#define PERSON_H
#include "Creature.h"
#include <iostream>
#include <string>

using namespace std;


class Person : public Creature
{
    private:
        string lastName;
        string email;
        string address;

    public:
        //constructor
        Person();
        Person(string name, float height, string lastName);
        Person(string name, float height, string email, string lastName, float weight);
        virtual ~Person();
        //getter setter
        string getLastName();
        string getEmail();
        string getAddress();
        void setLastName(string lastName);
        void setEmail(string email);
        void setAddress(string address);
        // functions
        void sayHello() const;
        void personInfo() const;

    protected:

};

#endif // PERSON_H
