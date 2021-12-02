#include <iostream>
#include <Person.h>
#include <Cat.h>

using namespace std;

int main()
{
    // START questionnaire en ligne de commande
    char firstName[80];
    printf("Enter your firstname: ");
    scanf("%s", firstName);
    char email[80];
    printf("Enter your email: ");
    scanf("%s", email);

    // information supplémentaire à renseigner par l'utilisateur
    int choice;
    printf("Souhaitez vous renseigner plus d'info ? \n answer[1: yes, 2: no]: ");
    scanf("%d", &choice);

    string lastName;
    float height;
    float weight;
    if (choice == 1) {
        printf("Enter your lastname: ");
        cin >> lastName;
        printf("Enter your height: ");
        scanf("%f", &height);
        printf("Enter your weight: ");
        scanf("%f", &weight);
    } else {
        lastName = "default name";
        height = 0;
        weight = 0;
    }
    // END questionnaire en ligne de commande

    //constructeur default person
    Person * defaultPerson = new Person("john", height, "doe");
    //constructeur avec informations
    Person * myPerson = new Person(firstName, height, email, lastName, weight);

    myPerson->sayHello();
    myPerson->personInfo();
    defaultPerson->personInfo();

    // instance de chat
    Cat * myCat = new Cat("miaou", 13.5, "egyptian");
    myCat->getSpecies();
    cout << "Espèce de mon chat : " << myCat->getSpecies() << "." << endl;
    cout << "Poids de mon chat : " << myCat->getHeight() << "." << endl;
    cout << "Nom de mon chat : " << myCat->getName() << "." << endl;

    string catName;
    printf("Maybe you want to choose a name for your cat : ");
    cin >> catName;
    myCat->setName(catName);

    cout << "Votre chat s'appelle : " << myCat->getName() << ", maintenant." << endl;

    return 0;
}
