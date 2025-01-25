#include "Player.h"
#include "RiskTaking.h"
using std::string;

    string RiskTaking::getClassName() {
        return "RiskTaking";
    }
    string RiskTaking::getDescription() const{
    return "RiskTaking";
}

string RiskTaking::buyPotions(Player &player, int price, int HP)
{
    int potions = 0;
    if(!(player.isFullHealth()) && player.canPurchase(price) && (player.getHealthPoints() < MAX_HP_FOR_RISKTAKEING)){
        Character::makeDeal(player, price, HP);
        potions++;
    }
    return getPotionsPurchaseMessage(player, potions);
}
