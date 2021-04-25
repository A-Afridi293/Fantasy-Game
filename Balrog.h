//
//  Balrog.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Balrog_h
#define Balrog_h
#include "Demon.h"
#include <iostream>
#include <string>
class Balrog: public Demon
{
public:
    string getSpecies ();
    int getDamage();
    
    Balrog();
};



#endif /* Balrog_h */

