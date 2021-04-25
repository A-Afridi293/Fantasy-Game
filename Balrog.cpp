//
//  Balrog.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Balrog.h"
using namespace std;
string Balrog::getSpecies()
{
    
    
    
    return "Balrog";
}


int Balrog::getDamage()
{
    
    
    int damage = Demon :: getDamage();
    
    // All creatures inflict damage which is a
    
    // random number up to their strength
    
    // Elves inflict double magical damage with a 10% chance
    
    
    
    // Balrogs are so fast they get to attack twice
    
    int damage2 = (rand() % strength) + 1;
    
    cout << "Balrog speed attack inflicts " << damage2 <<
    
    " additional damage points!" << endl;
    
    damage = damage + damage2;
    
    
    
    return damage;
}

Balrog::Balrog():Demon()
{
    
    
}
