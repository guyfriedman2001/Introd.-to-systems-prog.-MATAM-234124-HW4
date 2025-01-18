#pragma once
#include "PotionsMerchant.h"

PotionsMerchant::PotionsMerchant() : coins(5){}

void PotionsMerchant::startEvent(Player& player){
    if((player.isFullHealth())){
        return;
    }
    if(player.getCharachter() == "Responsible"){
        try{
            while(!(player.isFullHealth())) {////TODO getMaxHealthPoints() func in player (protected?)
                makeDeal(player);
            }
        }
        catch(std::runtime_error e){
                return;
        }
    }
    if(player.getCharachter() == "RiskTaking"){
        if(player.getHealthPoints() < 50){
            try{
                makeDeal(player);
            }
            catch(std::runtime_error e){
                return;
            }
        }
    }
}

void PotionsMerchant::makeDeal(Player& player){
    try{
        player.payCoins(5); 
        player.heal(10);
    }
    catch(std::runtime_error e){
        throw(e);
    }
}


std::string PotionsMerchant::getDescription() const{
    return "PotionsMerchant";
}
