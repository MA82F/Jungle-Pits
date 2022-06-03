#include <iostream>
#include "PetAnimal.h"
Pet::Pet() :Animal() {}
void Pet::fall(){
    std::cout << " $$$$ Pet Animal fell $$$$" << std::endl;
}