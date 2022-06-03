#include <iostream>
#include "PetAnimal.h"
PetAnimal::PetAnimal() :Animal() {}
void PetAnimal::fall(){
    std::cout << " $$$$ Pet Animal fell $$$$" << std::endl;
}