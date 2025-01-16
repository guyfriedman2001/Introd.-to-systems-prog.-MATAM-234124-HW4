#pragma once
#include "Balrog.h"

Balrog::Balrog(): Monster(15, 100, 9001){}
void Balrog::startEvent(Player* player){
    Monster::startEvent(player);
    Monster::setCombatPower(2);
}