//
// Created by Guy Friedman on 16/01/2025.
//

#pragma once

class Player;

class Character {
    Player* player;
public:
    virtual void tradeMerchant() = 0;
    virtual ~Character() = default;
    
    Character(){}

    Character(Player* player) : player(player) {}

    void setPlayer(Player* player){
        this->player = player;
    }

};
