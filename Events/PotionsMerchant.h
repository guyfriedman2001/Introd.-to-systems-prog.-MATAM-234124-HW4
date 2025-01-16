#pragma once
#include "SpecialEvent.h"

class PotionsMerchant :public SpecialEvent{
    private:
    unsigned int coins;
    public:
    void startEvent(Player* player) override;
    PotionsMerchant();
};