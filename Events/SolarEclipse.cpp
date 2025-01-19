
#include "SolarEclipse.h"
#include "../Utilities.h"
//#include "../Players/Player.h"
//#include "SpecialEvent.h"


SolarEclipse::SolarEclipse() : effect(1){}

string SolarEclipse::startEvent(Player& player){
    int tempEffect = effect;
    if(player.getJob()->getClassName() == "Magical"){
        player.getBuffed(effect);
    }
    else{
        player.getNerfed(effect);
        tempEffect *= -1;
    }
    return getSolarEclipseMessage(player, tempEffect);
}

std::string SolarEclipse::getDescription() const{
    return "SolarEclipse";
}