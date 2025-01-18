//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef RISKTAKING_H
#define RISKTAKING_H
#include "Character.h"
#include "Player.h"
using std::string;



class RiskTaking : public Character {
    public:
    RiskTaking() = default;

    RiskTaking(Player* player) : Character(player) {}

    virtual ~RiskTaking() = default;

    virtual string getClassName() override {
        return "RiskTaking";
    }

    virtual void tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        if (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }


};



#endif //RISKTAKING_H
