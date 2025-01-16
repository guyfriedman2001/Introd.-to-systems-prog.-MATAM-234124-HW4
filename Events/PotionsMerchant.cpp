#pragma once
#include "PotionsMerchant.h"

PotionsMerchant::PotionsMerchant() : coins(5){}

void PotionsMerchant::startEvent(Player* player){
    if(player->getCharacterType() == "Responsible"){
        try{
            while((player->getHealthPoints() < player->getMaxHealthPoints())) {////TODO getMaxHealthPoints() func in player (protected?)
                player->setCoins(-5);  //TODO setCoins() func in player (protected?)
                player->setHealthPoints(10); //TODO setHealthPoints() func in player (protected?)
            }
        }
        catch(std::runtime_error e){
                return;
            }
    }
    if(player->getCharacterType() == "RiskTaking"){
        if((player->getHealthPoints() < player->getMaxHealthPoints()) && player->getHealthPoints() < 50){
            try{
                player->setCoins(-5);  //TODO setCoins() func in player (protected?) + throw
                player->setHealthPoints(10); //TODO setHealthPoints() func in player (protected?)
            }
            catch(std::runtime_error e){
                return;
            }
        }
    }
}
