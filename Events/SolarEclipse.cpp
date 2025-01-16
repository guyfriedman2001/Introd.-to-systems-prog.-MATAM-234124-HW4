#pragma once
#include "SolarEclipse.h"

SolarEclipse::SolarEclipse() : effect(1){}

void SolarEclipse::startEvent(Player* player){
    if(player->getJobType() == "Magical"){
        player->forceUp(effect);  //TODO forceUp() func in player (protected?)
    }
    else{
        player->forceDown(effect);  //TODO forceDown() func in player (protected?)
    }
}
