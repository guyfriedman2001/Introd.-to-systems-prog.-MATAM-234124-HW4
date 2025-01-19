#include "Character.h"
#include "Player.h"
using std::string;



class Responsible : public Character {
public:


    Responsible::Responsible() = default;



    Responsible::Responsible(Player* player) : Character(player) {}



    virtual Responsible::~Responsible() = default;


    virtual string Responsible::getClassName() override {
        return "Responsible";
    }


    virtual void Responsible::tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        while (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }
};