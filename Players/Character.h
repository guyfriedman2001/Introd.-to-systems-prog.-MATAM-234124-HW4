#include<string>
#include <memory>
#include <iostream>
#include "../Utilities.h"
using std::string;
class Player;

#ifndef CHARACTER_H
#define CHARACTER_H

/**
 * @brief Represents a character in the game.
 *
 * Serves as a base class for all types of characters with specific attributes and behavior.
 */
class Character {
protected:
    /**
     * @brief Executes a deal between the merchant and the player.
     *
     * @param player The player interacting with the merchant.
     * @param price The cost of each healing action.
     * @param HP The amount of health restored per healing action.
     */
    void makeDeal(Player& player, int price, int HP);
public:

    /**
     * @brief Default destructor for Character.
     */
    virtual ~Character() = default;

    /**
     * @brief Retrieves the class name of the character.
     *
     * @return A string representing the character's class name.
     */
    virtual string getClassName();

    /**
     * @brief Retrieves a description of the character.
     *
     * @return A string describing the character.
     */

    virtual string getDescription() const;

    /**
     * @brief Default constructor for Character.
     */
    Character();

    /**
     * @brief Handles trading with a merchant by paying for healing until the player's health is full or coins are insufficient.
     *
     * @param player The player interacting with the merchant.
     * @param price The cost of each healing action.
     * @param HP The amount of health restored per healing action.
     * @return A string describing the outcome of the trade.
     * 
     */
    virtual string buyPotions(Player& player, int price, int HP) = 0;

};
#endif //CHARACTER_H
