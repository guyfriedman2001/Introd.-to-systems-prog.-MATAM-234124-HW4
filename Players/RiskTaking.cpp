//
// Created by Guy Friedman on 16/01/2025.
//


#include "Character.h"
#include "Player.h"
#include "RiskTaking.h"
using std::string;



class RiskTaking : public Character {
    public:

    RiskTaking::RiskTaking() = default;

    RiskTaking::RiskTaking(Player* player) : Character(player) {}

    virtual RiskTaking::~RiskTaking() = default;

    virtual string RiskTaking::getClassName() override {
        return "RiskTaking";
    }

    virtual void RiskTaking::tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        if (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }


};


