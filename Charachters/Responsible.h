#pragma once
#include "Character.h"
#include "Player.h"
using std::string;

class Responsible : public Character {
public:
    Responsible() = default;

    Responsible(Player* player) : Character(player) {}

    virtual ~Responsible() = default;

    virtual string getClassName() override {
        return "Responsible";
    }

    virtual void tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        while (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }
};