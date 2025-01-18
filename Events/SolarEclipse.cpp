#pragma once
#include "SolarEclipse.h"

SolarEclipse::SolarEclipse() : effect(1){}

void SolarEclipse::startEvent(Player& player){
    if(player.getJob()->getClassName() == "Magical"){
        player.getBuffed(effect);
    }
    else{
        player.getNerfed(effect);
    }
}

std::string SolarEclipse::getDescription() const{
    return "SolarEclipse";
}