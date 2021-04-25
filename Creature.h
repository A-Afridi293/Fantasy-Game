//
//  Creature.h
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#ifndef Creature_h
#define Creature_h
#include <string>
#include <iostream>
using namespace std;
class Creature

{
    
protected:
    
    
    // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    
    int strength;
    
    int hitpoints;
    
    // How much damage we can inflict
    
    // How much damage we can sustain
    
     // Returns type of species
    
public:
    
    Creature( );
    
    // Initialize to human, 10 strength, 10 hit points
    
    Creature(int newStrength, int newHit);
    
    // Initialize creature to new type, strength, hit points
    
    // Also add appropriate accessor and mutator functions
    
    // for type, strength, and hit points
    
    virtual int getDamage();
    
    virtual string getSpecies()=0;
    
    // Returns amount of damage this creature
    void setstrength(int _strength)
    {
        strength = _strength;
    }
    int getstrenght()
    {
        
        return strength;
    }
    
    void sethitpoints(int _hitpoints)
    {
        hitpoints = _hitpoints;
    }
    int gethitpoints()
    {
        
        return hitpoints;
    }
    
};
#endif /* Creature_h */
