//
//  main.cpp
//  AFRIDIHW72312
//
//  Created by ahmad afridi on 4/30/19.
//  Copyright © 2019 ahmad afridi. All rights reserved.
//

#include <iostream>
#include "Elf.h"
#include "Demon.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include "functions.h"
using namespace std;

int main() {
    srand(time(NULL));
    int menuInput;
    Creature *player1;
    Creature *player2;
    Elf myElf;
    Human myHuman;
    Cyberdemon myCyber;
    Balrog myBalrog;
    cout << "Choose Fighter 1" << endl;
    cout << "1. Elf" << endl;
    cout << "2. Human" << endl;
    cout << "3. Cyber Demon" << endl;
    cout << "4. Balrog Demon" << endl;
    cin >> menuInput;
    switch (menuInput) {
        case 1:
           
            player1 = &myElf;
            break;
            
        case 2:
            player1 = &myHuman;
            break;
        case 3:
            player1 = &myCyber;
            break;
        case 4:
            player1 = &myBalrog;
            break;
            
        default:
            break;
    }
    int userInput;
    int userInput2;
    cout << "Set Strength for " << player1->getSpecies() << endl;
    cin >> userInput;
    player1->setstrength(userInput);
    
    
    cout << "Set hitpoints for " << player1->getSpecies() << endl;
    cin >> userInput2;
    player1->sethitpoints(userInput2);
    
    int menuInput2;
    cout << "Choose Fighter 2" << endl;
    cout << "1. Elf" << endl;
    cout << "2. Human" << endl;
    cout << "3. Cyber Demon" << endl;
    cout << "4. Balrog Demon" << endl;
    cin >> menuInput2;
    switch (menuInput2) {
        case 1:
            player2 = &myElf;
            break;
            
        case 2:
            player2 = &myHuman;
            break;
        case 3:
            player2 = &myCyber;
            break;
        case 4:
            player2 = &myBalrog;
            break;
            
        default:
            break;
            
    }
    
    int userInput3;
    int userInput4;
    cout << "Set Strength for " << player2->getSpecies() << endl;
    cin >> userInput3;
    player2->setstrength(userInput3);
    
    
    cout << "Set hitpoints for " << player2->getSpecies() << endl;
    cin >> userInput4;
    player2->sethitpoints(userInput4);
    
    
    
    if (player1 != player2)
    {
        battleArena(*player1, *player2);
        
        
    }
    
    else
    {
        
        cout << "You can not chose the same player twice" << endl;
    }
    
    
    return 0;
}
