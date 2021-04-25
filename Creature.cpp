//
//  Creature.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include "Creature.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*string Creature::getSpecies()

{
    
    switch (type)
    
    {
            
        case 0:
            
        case 1:
            
        case 2:
            
        case 3:
 
            return "Human";
            
            return "Cyberdemon";
            
            return "Balrog";
            
            return "Elf";
            
    }
    
    return "Unknown";
    
}
*/



int Creature::getDamage()

{
    
    int damage;
    
    // All creatures inflict damage which is a
    
    // random number up to their strength
    
    damage = (rand() % strength) + 1;
    
    cout << getSpecies() << " attacks for " <<
    
    damage << " points!" << endl;
    
    
    return damage;
    
}


Creature::Creature (){}
