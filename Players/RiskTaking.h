//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef RISKTAKING_H
#define RISKTAKING_H
#include "Character.h"
#include "Player.h"
using std::string;


/**
 * @brief Represents the RiskTaking character class, inheriting from the Character base class.
 */
class RiskTaking : public Character {
    public:

    /**
     * @brief Default constructor for the RiskTaking class.
     */
    RiskTaking() = default;

    /**
     * @brief Constructs a RiskTaking character associated with a specific player.
     * 
     * @param player The player associated with this character.
     */
    RiskTaking(Player* player) : Character(player) {}

    /**
     * @brief Destructor for the RiskTaking class.
     */
    virtual ~RiskTaking() = default;

    /**
     * @brief Retrieves the class name of the character.
     * 
     * @return The string "RiskTaking", representing the class name.
     */
    virtual string getClassName() override {
        return "RiskTaking";
    }

    /**
     * @brief Handles trading with a merchant by paying for healing if the player can afford it and is not at full health.
     * 
     * @param price The cost of the healing action.
     * @param healingPower The amount of health restored per healing action.
     */
    virtual void tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        if (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }


};



#endif //RISKTAKING_H
