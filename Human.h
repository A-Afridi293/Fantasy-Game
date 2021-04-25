//
//  Human.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Human_h
#define Human_h
#include "Creature.h"
#include <iostream>
#include <string>
class Human: public Creature
{
    
public:
    string getSpecies ();
    int getDamage();
};

#endif /* Human_h */
