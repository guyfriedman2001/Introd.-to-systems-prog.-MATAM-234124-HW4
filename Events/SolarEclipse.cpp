
#include "SolarEclipse.h"
// #include "../Utilities.h"
//#include "../Players/Player.h"
//#include "SpecialEvent.h"


SolarEclipse::SolarEclipse() : effect(1){}

string SolarEclipse::startEvent(Player& player){
    int tempEffect = effect;
    if(!player.getJobType().compare("Magical")){
        player.getBuffed(effect);
    }
    else{
        int tempPlayerForce =  player.getForce();
        player.getNerfed(effect);
        if(player.getForce() != tempPlayerForce){
            tempEffect *= -1;
        }
        else{
            tempEffect = 0;
        }
    }
    return getSolarEclipseMessage(player, tempEffect);
}

std::string SolarEclipse::getDescription() const{
    return "SolarEclipse";
}