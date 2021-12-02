#include "Person.h"

Person::Person()
{
}
// constructeur pour un utilisateur par defaut
Person::Person(string name, float height, string lastName)
{
    Creature::name = name;
    Creature::height = 175;
    this->weight = 75;
    this->lastName = lastName;
}
// constructeur personnalisé
Person::Person(string name, float height, string email, string lastName, float weight)
{
    Creature::name = name;
    Creature::height = height;
    this->email = email;
    this->lastName = lastName;
    this->weight = weight;
}

Person::~Person()
{
}
// getter setter
string Person::getLastName()
{
    return this->lastName;
}
string Person::getEmail()
{
    return this->email;
}
string Person::getAddress()
{
    return this->address;
}

void Person::setLastName(string lastName)
{
    this->lastName = lastName;
}
void Person::setEmail(string email)
{
    this->email = email;
}
void Person::setAddress(string address)
{
    this->address = address;
}

//functions
void Person::sayHello() const
{
    cout << "Bonjour, je m'appelle " << this->name << "." << endl;
}
void Person::personInfo() const
{
    cout << "Infos de l'utilisateur : " << endl;
    cout << "Nom-pseudo : " << this->name << "." << endl;
    cout << "lastname : " << this->lastName << "." << endl;
    cout << "poids : " << this->weight << "." << endl;
    cout << "taille : " << this->height << "." << endl;
}
