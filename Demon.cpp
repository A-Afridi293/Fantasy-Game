//
//  Demon.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Demon.h"
using namespace std;
int Demon::getDamage()
{
    
    int damage = Creature :: getDamage();
    
    // All creatures inflict damage which is a
    
    // random number up to their strength
    
    
    // Demons can inflict damage of 50 with a 5% chance
    
    
    
    if ((rand() % 100) < 10)
    
    {
        
        damage = damage + 50;
        
        cout << "Demonic attack inflicts 50 "
        
        << " additional damage points!" << endl;
        
    }
    
    
    
     return damage;
    }


    Demon :: Demon()
    {
        
        
    }
