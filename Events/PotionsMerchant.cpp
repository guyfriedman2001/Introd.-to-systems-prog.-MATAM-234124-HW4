#include "PotionsMerchant.h"

PotionsMerchant::PotionsMerchant() : coins(5){}

string PotionsMerchant::startEvent(Player& player){
    int potions = 0;
    if(!(player.isFullHealth())){
        if(player.getCharacterName() == "Responsible"){
                while(!(player.isFullHealth())) {
                    try{
                        makeDeal(player);
                        potions++;
                    }
                    catch(std::runtime_error& e){
                    return getPotionsPurchaseMessage(player, potions);
                    }
                }
            }
            
        if(player.getCharacterName() =="RiskTaking"){
            if(player.getHealthPoints() < 50){
                try{
                    makeDeal(player);
                    potions++;
                }
                catch(std::runtime_error& e){
                    return getPotionsPurchaseMessage(player, potions);
                }
            }
        }
    }
    return getPotionsPurchaseMessage(player, potions);
}

void PotionsMerchant::makeDeal(Player& player){
    try{
        player.payCoins(coins); 
        player.heal(10);
    }
    catch(std::runtime_error* e){
        throw(e);
    }
}


std::string PotionsMerchant::getDescription() const{
    return "PotionsMerchant";
}
