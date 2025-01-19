//
// Created by Guy Friedman on 16/01/2025.
//

//#pragma once
#include "Character.h"
#include "Player.h"

    string Character::getClassName(){
        return "Character";
    }
    
     Character::Character(){}

     Character::Character(Player* player) : player(player) {}

    void  Character::setPlayer(Player* player){
        this->player = player;
    }
string Character::getDescription() const{
    return "Character::getDescription()";
}