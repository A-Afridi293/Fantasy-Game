//
//  Elf.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Elf_h
#define Elf_h
#include "Creature.h"
#include <iostream>
#include <string>
using namespace std;

class Elf: public Creature
{
    
    
public:
   string getSpecies ();
    int getDamage();
    
};


#endif /* Elf_h */
