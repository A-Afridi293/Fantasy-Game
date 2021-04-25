//
//  Demon.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Demon_h
#define Demon_h
#include "Creature.h"
#include <iostream>
#include <string>
class Demon: public Creature
{
public:
    virtual string getSpecies () = 0;
    int getDamage();
    Demon();
};

#endif /* Demon_h */
