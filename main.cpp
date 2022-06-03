#include <iostream>
#include "Jungle.cpp"
#include "Animal.cpp"
#include "DomesticAnimal.cpp"
#include "WildAnimal.cpp"
#include "PetAnimal.cpp"
using namespace std;
int main()
{
    int numOfAnimals;
    cin >> numOfAnimals;
    Jungle forestFor2Types(numOfAnimals);
    for (int i = 0; i < numOfAnimals / 2; i++)
    {
        forestFor2Types.AddAnimal(new DomesticAnimal());
        forestFor2Types.AddAnimal(new WildAnimal());
    }
    if (numOfAnimals % 2 == 1)
        forestFor2Types.AddAnimal(new DomesticAnimal());
    forestFor2Types.AddAnimal(new DomesticAnimal());
    forestFor2Types.movement(); // 1000 movement
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement();
    forestFor2Types.movement(); // 1000 movement
    cout << "Total Fells Animals in Pits!!: " << forestFor2Types.getTotalFall() << endl;
    // now with pet & wild & domestic
    cin >> numOfAnimals;
    Jungle forestFor3Types(numOfAnimals);
    for (int i = 0; i < numOfAnimals / 3; i++)
    {
        forestFor3Types.AddAnimal(new DomesticAnimal());
        forestFor3Types.AddAnimal(new WildAnimal());
        forestFor3Types.AddAnimal(new PetAnimal());
    }
    if (numOfAnimals % 3 == 2)
    {
        forestFor3Types.AddAnimal(new DomesticAnimal());
        forestFor3Types.AddAnimal(new PetAnimal());
    }
    else if (numOfAnimals % 3 == 1)
        forestFor3Types.AddAnimal(new DomesticAnimal());
    forestFor3Types.AddAnimal(new DomesticAnimal());
    forestFor3Types.movement(); // 1000 movement
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement();
    forestFor3Types.movement(); // 1000 movement
    cout << "Total Fells Animals in Pits!!: " << forestFor3Types.getTotalFall() << endl;
    return 0;
}
