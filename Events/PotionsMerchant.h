#include "SpecialEvent.h"
#ifndef POTIONSMERCHANT_H
#define POTIONSMERCHANT_H
class PotionsMerchant : public SpecialEvent{
    private:
    static const int MAX_HP_FOR_RISKTAKEING = 50;
    static const int  HEAL_POINTS = 10;
    static const int COINS = 5;
    void makeDeal(Player& player);
    public:
    string startEvent(Player& player) override;
    PotionsMerchant();
    std::string getDescription() const override;
};
#endif //POTIONSMERCHANT_H