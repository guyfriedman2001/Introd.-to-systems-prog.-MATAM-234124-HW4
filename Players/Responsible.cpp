#include "Character.h"
#include "Player.h"
using std::string;

   
    Responsible::Responsible(Player* player) : Character(player) {}

    string Responsible::getClassName() {
        return "Responsible";
    }


    void Responsible::tradeMerchant(int price, int healingPower) {
        Player* player = this->player;
        while (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }
    string Responsible::getDescription() const{
    return "Responsible";
}