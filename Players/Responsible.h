#include "Character.h"
using std::string;
#ifndef RESPONSIBLE_H
#define RESPONSIBLE_H

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

    /**
     * @brief Destructor for the Responsible class.
     */
    virtual ~Responsible() = default;

    /**
     * @brief Retrieves the class name of the character.
     * 
     * @return The string "Responsible", representing the class name.
     */
    virtual string getClassName() override;

    /**
     * @brief Handles trading with a merchant by paying for healing until the player's health is full or coins are insufficient.
     * 
     * @param price The cost of each healing action.
     * @param healingPower The amount of health restored per healing action.
     */
    //virtual void tradeMerchant(int price, int healingPower) override;
    virtual string getDescription() const override;

    /**
     * @brief costimizes the tradeMerchant function for the Responsible character.
     * 
     * @param player The player associated with this character.
     * @param price The cost of each healing action.
     * @param HP The amount of health restored per healing action.
     */
    string buyPotions(Player& player, int price, int HP) override;
};

#endif //RESPONSIBLE_H