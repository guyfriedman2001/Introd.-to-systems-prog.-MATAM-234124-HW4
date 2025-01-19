#pragma once
#include "SpecialEvent.h"

class PotionsMerchant :public SpecialEvent {
    private:
    unsigned int coins;
    void makeDeal(Player& player);
    public:
    string startEvent(Player& player) override;
    PotionsMerchant();
    std::string getDescription() const override;
};