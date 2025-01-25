#include "PotionsMerchant.h"

PotionsMerchant::PotionsMerchant(){}

string PotionsMerchant::startEvent(Player& player){
    return player.getCharacter()->buyPotions(player, COINS, HEAL_POINTS);
}

std::string PotionsMerchant::getDescription() const{
    return "PotionsMerchant";
}
