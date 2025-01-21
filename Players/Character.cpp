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

     //Character::Character(Player* player) : player(std::make_unique<Player>(player)) {}

    // void  Character::setPlayer(Player* player){
    //     this->player = std::make_unique<Player>(player);
    // }
string Character::getDescription() const{
    return "Character::getDescription()";
}