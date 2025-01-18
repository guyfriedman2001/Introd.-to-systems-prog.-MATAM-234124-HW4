//
// Created by Guy Friedman on 16/01/2025.
//

#pragma once
#include<string>
using std::string;

class Player;

class Character {
protected:
    Player* player;
public:
    virtual void tradeMerchant(int price, int healingPower) = 0;
    virtual ~Character() = default;

    virtual string getClassName(){
        return "Character";
    }
    
    Character(){}

    Character(Player* player) : player(player) {}

    void setPlayer(Player* player){
        this->player = player;
    }

};
