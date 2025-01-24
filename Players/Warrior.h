#include "Strong.h"
#ifndef WARRIOR_H
#define WARRIOR_H


/**
 * @brief Represents the Warrior job class, inheriting from the Strong base class.
 */
class Warrior : public Strong {

public:

    /**
     * @brief Destructor for the Warrior class.
     */
    virtual ~Warrior() = default;

    /**
     * @brief Default constructor for the Warrior class.
     */
    Warrior();

    /**
     * @brief Calculates the Warrior's combat power.
     * 
     * @return The combat power, calculated as 2 times the force plus the level of the Warrior.
     */
    int getCombatPower() const override;

    /**
     * @brief Retrieves the description of the Warrior class.
     * 
     * @return A string representing the Warrior's description.
     */
    virtual string getDescription() const override;

};



#endif //WARRIOR_H
