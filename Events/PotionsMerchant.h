#include "SpecialEvent.h"
#ifndef POTIONSMERCHANT_H
#define POTIONSMERCHANT_H

/**
 * @brief Represents a potions merchant, which is a type of SpecialEvent.
 *
 * Allows interactions with a player to make deals involving healing and coins.
 */
class PotionsMerchant : public SpecialEvent{
private:

    static const int MAX_HP_FOR_RISKTAKEING = 50; /**< Maximum HP threshold for risk-taking deals. */
    static const int HEAL_POINTS = 10; /**< Amount of HP restored in a healing deal. */
    static const int COINS = 5; /**< Amount of coins exchanged in a deal. */

    /**
     * @brief Executes a deal between the merchant and the player.
     *
     * @param player The player interacting with the merchant.
     */
    void makeDeal(Player& player);

public:

    /**
     * @brief Executes the potions merchant event with a player.
     *
     * @param player The player interacting with the merchant.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;

    /**
     * @brief Constructs a PotionsMerchant object.
     */
    PotionsMerchant();

    /**
     * @brief Retrieves a description of the potions merchant.
     *
     * @return A string describing the merchant and their offerings.
     */
    std::string getDescription() const override;
};
#endif //POTIONSMERCHANT_H