#include "SolarEclipse.h"

SolarEclipse::SolarEclipse(){}

string SolarEclipse::startEvent(Player& player){
    int tempEffect = player.getJob()->SolarEclipseEffect(EFFECT);
    return getSolarEclipseMessage(player, tempEffect);
}

std::string SolarEclipse::getDescription() const{
    return "SolarEclipse";
}