#include "SolarEclipse.h"

SolarEclipse::SolarEclipse(){}

string SolarEclipse::startEvent(Player& player){
    int tempEffect = EFFECT;
    if(!player.getJobType().compare("Magical")){
        player.getBuffed(EFFECT);
    }
    else{
        int tempPlayerForce =  player.getForce();
        player.getNerfed(EFFECT);
        if(player.getForce() != tempPlayerForce){
            tempEffect = BAD_EFFECT;
        }
        else{
            tempEffect = NO_EFFECT;
        }
    }
    return getSolarEclipseMessage(player, tempEffect);
}

std::string SolarEclipse::getDescription() const{
    return "SolarEclipse";
}