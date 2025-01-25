#include "Character.h"
#include "Player.h"

using std::string;

    string Responsible::getClassName() {
        return "Responsible";
    }

    string Responsible::getDescription() const{
    return "Responsible";
}
string Responsible::buyPotions(Player& player, int price, int HP){
    int potions = 0;
    while((!(player.isFullHealth())) && player.canPurchase(price)){
            Character::makeDeal(player, price, HP);
            potions++;
    }
    return getPotionsPurchaseMessage(player, potions);
}