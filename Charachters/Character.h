//
// Created by Guy Friedman on 16/01/2025.
//

#pragma once

class Player;

class Character {
    unsigned int* health;
    Player* player;
public:
    virtual void tradeMerchant() = 0;
    virtual ~Character() = default;
};
