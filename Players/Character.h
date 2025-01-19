//
// Created by Guy Friedman on 16/01/2025.
//

#pragma once
#include<string>
using std::string;

//#include "Player.h"
class Player;

class Character {
protected:
    Player* player;
public:
    virtual void tradeMerchant(int price, int healingPower) = 0;
    virtual ~Character() = default;

    virtual string getClassName();
    
    Character();

    Character(Player* player);

    void setPlayer(Player* player);

};
