//
//  Elf.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Elf.h"
using namespace std;
string Elf :: getSpecies ()
{
    
    
    
    
    return "Elf";
}

int Elf::getDamage()
{
    int damage = Creature :: getDamage();
    
    // All creatures inflict damage which is a
    
    // random number up to their strength

    
    // Demons can inflict damage of 50 with a 5% chance
    
    
    // Elves inflict double magical damage with a 10% chance
    
    
    
    if ((rand() % 10)==0)
        
    {
        
        cout << "Magical attack inflicts " << damage <<
        
        " additional damage points!" << endl;
        
        damage = damage * 2;
        
    }
    
    
    
    return damage;
    
    
}
