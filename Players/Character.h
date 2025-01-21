//
// Created by Guy Friedman on 16/01/2025.
//

//#pragma once
#include<string>
#include <memory>
#include <iostream>
using std::string;
class Player;

//#include "Player.h"
#ifndef CHARACTER_H
#define CHARACTER_H
class Character {
protected:
    //std::unique_ptr<Player> player;
public:
    //virtual void tradeMerchant(int price, int healingPower) = 0;
    virtual ~Character() = default;

    virtual string getClassName();
    virtual string getDescription() const;
    Character();

    //Character(Player* player);

    //void setPlayer(Player* player);

};
#endif //CHARACTER_H
