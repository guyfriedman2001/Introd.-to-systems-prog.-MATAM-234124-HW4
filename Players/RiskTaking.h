#include "Character.h"
using std::string;

#ifndef RISKTAKING_H
#define RISKTAKING_H
/**
 * @brief Represents the RiskTaking character class, inheriting from the Character base class.
 */
class RiskTaking : public Character {
    private:
    static const int MAX_HP_FOR_RISKTAKEING = 50; /**< Maximum HP threshold for risk-taking deals. */

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

    /**
     * @brief Destructor for the RiskTaking class.
     */
    virtual ~RiskTaking() = default;

    /**
     * @brief Retrieves the class name of the character.
     * 
     * @return The string "RiskTaking", representing the class name.
     */
    virtual string getClassName() override;

    /**
     * @brief Retrieves a description of the RiskTaking character.
     * 
     * @return A string containing the description of the character.
     */
    virtual string getDescription() const override;

    /**
     * @brief costimizes the tradeMerchant function for the RiskTaking character.
     * 
     * @param player The player associated with this character.
     * @param price The cost of each healing action.
     * @param HP The amount of health restored per healing action.
     */
    string buyPotions(Player& player, int price, int HP) override;

};



#endif //RISKTAKING_H
