#include <iostream>
#include "Jungle.cpp"
#include "Animal.cpp"
#include "DomesticAnimal.cpp"
#include "WildAnimal.cpp"
using namespace std;
int main() {
    int numOfAnimals;
    cin>>numOfAnimals;
    Jungle forest(numOfAnimals);
    for (int i = 0; i < numOfAnimals/2; i++){
        forest.AddAnimal(new DomesticAnimal());
        forest.AddAnimal(new WildAnimal());
    }
    forest.AddAnimal(new DomesticAnimal());
    forest.movement();              //1000 movement
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();
    forest.movement();    //1000 movement
    cout<<"Total Fell Animals in Pits!!: "<< forest.getTotalFall()<<endl;
    return 0;
}
