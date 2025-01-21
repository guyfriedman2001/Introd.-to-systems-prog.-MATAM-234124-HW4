//#pragma once

//class SpecialEvent;
#include "SpecialEvent.h"
#ifndef POTIONSMERCHANT_H
#define POTIONSMERCHANT_H
class PotionsMerchant : public SpecialEvent{
    private:
    int coins;
    void makeDeal(Player& player);
    public:
    string startEvent(Player& player) override;
    PotionsMerchant();
    std::string getDescription() const override;
};
#endif //POTIONSMERCHANT_H