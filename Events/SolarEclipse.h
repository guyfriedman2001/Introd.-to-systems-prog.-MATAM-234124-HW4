#include "SpecialEvent.h"
#ifndef SOLARECLIPSE_H
#define SOLARECLIPSE_H

/**
 * @brief Represents a solar eclipse, which is a type of SpecialEvent.
 *
 * A unique event that can have various effects on the player.
 */
class SolarEclipse :public SpecialEvent{
private:

    static const int EFFECT = 1; /**< Represents a positive effect of the solar eclipse. */
    static const int NO_EFFECT = 0; /**< Represents no effect during the solar eclipse. */
    static const int BAD_EFFECT = -1; /**< Represents a negative effect of the solar eclipse. */


public:

    /**
     * @brief Executes the solar eclipse event with a player.
     *
     * @param player The player experiencing the event.
     * @return A string describing the outcome of the event.
     */
    string startEvent(Player& player) override;

    /**
     * @brief Retrieves a description of the solar eclipse.
     *
     * @return A string describing the event and its effects.
     */
    string getDescription() const override;

    /**
     * @brief Constructs a SolarEclipse object.
     */
    SolarEclipse();
};
#endif //SOLARECLIPSE_H