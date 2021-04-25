//
//  functions.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 5/6/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include "Elf.h"
#include "Demon.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"

void battleArena(Creature &creature1, Creature &creature2)
{
    while (creature1.gethitpoints() > 0 && creature2.gethitpoints() > 0 )
    {
        creature2.sethitpoints(creature2.gethitpoints()-creature1.getDamage());
        creature1.sethitpoints(creature1.gethitpoints()-creature2.getDamage());
        
        
        
        
        
    }
    
    if (creature1.gethitpoints() < 0 && creature2.gethitpoints() < 0 )
    {
        
        
        cout << "There has been a tie" << endl;
    }
    else if (creature1.gethitpoints()< 0)
    {
        cout << creature2.getSpecies() << " has won the battle" << endl;
        
    }
    else
    {
        cout << creature1.getSpecies() << " has won the battle" << endl;
        
    }
    cout << "Final Hit points: " << endl;
    cout << creature1.getSpecies() << ": " << creature1.gethitpoints() << endl;
    cout << creature2.getSpecies() << ": " << creature2.gethitpoints() << endl;
}
