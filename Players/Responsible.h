#pragma once
#include "Character.h"
#include "Player.h"
using std::string;


/**
 * @brief Represents the Responsible character class, inheriting from the Character base class.
 */
class Responsible : public Character {
public:

    /**
     * @brief Default constructor for the Responsible class.
     */
    Responsible() = default;


    /**
     * @brief Constructs a Responsible character associated with a specific player.
     * 
     * @param player The player associated with this character.
     */
    Responsible(Player* player) : Character(player) {}


    /**
     * @brief Destructor for the Responsible class.
     */
    virtual ~Responsible() = default;

    /**
     * @brief Retrieves the class name of the character.
     * 
     * @return The string "Responsible", representing the class name.
     */
    virtual string getClassName() override {
        return "Responsible";
    }

    /**
     * @brief Handles trading with a merchant by paying for healing until the player's health is full or coins are insufficient.
     * 
     * @param price The cost of each healing action.
     * @param healingPower The amount of health restored per healing action.
     */
    virtual void tradeMerchant(int price, int healingPower) override {
        Player* player = this->player;
        while (player->canPurchase(price)&&(!player->isFullHealth())){
            player->payCoins(price);
            player->heal(healingPower);
        }
    }
};