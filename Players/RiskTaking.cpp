//
// Created by Guy Friedman on 16/01/2025.
//


#include "Character.h"
#include "Player.h"
#include "RiskTaking.h"
using std::string;



    RiskTaking::RiskTaking(Player* player) : Character(player) {}

    string RiskTaking::getClassName() {
        return "RiskTaking";
    }

    void RiskTaking::tradeMerchant(int price, int healingPower) {
        Player* player = this->player;
        if (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }

    string RiskTaking::getDescription() const{
    return "RiskTaking";
}



