#ifndef JUNGLE_PET_H
#define JUNGLE_PET_H

#include "Animal.h"

class PetAnimal : public Animal{
public:
    PetAnimal();
    virtual void fall() override final;
};


#endif //JUNGLE_PET_H
