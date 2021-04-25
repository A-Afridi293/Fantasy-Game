//
//  Cyberdemon.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Cyberdemon_h
#define Cyberdemon_h
#include "Demon.h"
#include <iostream>
#include <string>
class Cyberdemon: public Demon
{
public:
    string getSpecies ();
    //virtual int getDamage()=0;
    Cyberdemon();
};

#endif /* Cyberdemon_h */
