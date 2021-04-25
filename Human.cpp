//
//  Human.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

string Human::getSpecies()
{
    
    
    
    return "Human";
}


int Human::getDamage()
{
    int damage = Creature :: getDamage();
    
    // All creatures inflict damage which is a
    
    // random number up to their strength
    
    
    
    // Demons can inflict damage of 50 with a 5% chance
    
    
    return damage;
    
    
}
