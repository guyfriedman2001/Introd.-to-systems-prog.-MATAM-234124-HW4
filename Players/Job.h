#include <iostream>
using std::string;
#ifndef JOB_H
#define JOB_H


/**
 * @brief Represents a base Job class for players.
 * 
 * This class provides the fundamental attributes and functionalities
 * for various job types.
 */
class Job {
protected:
    int level;
    int force;
    int currentHealth;
    int MAX_HEALTH;
    int coins;

public:

    /**
     * @brief Virtual destructor for the Job class.
     */
    virtual ~Job();

    /**
     * @brief Default constructor for the Job class.
     * Initializes attributes to their default values.
     */
    Job();

    /**
     * @brief Deducts coins from the job's balance.
     * 
     * @param ammount The amount of coins to deduct.
     * @throws std::runtime_error if the resulting coins are negative.
     */
    virtual void payCoins(int ammount);
    
    /**
     * @brief Gets the maximum health of the job.
     * 
     * @return The maximum health.
     */
    virtual int getMaxHealth();

    /**
     * @brief Reduces the current health of the job by a specified amount.
     * 
     * @param ammount The amount of damage to take.
     */
    virtual void takeDamage(int ammount);

    /**
     * @brief Adds coins to the job's balance.
     * 
     * @param ammount The amount of coins to add.
     */
    virtual void recieveCoins(int ammount);

    /**
     * @brief Heals the job by a specified amount.
     * 
     * @param ammount The amount of health to restore.
     */
    virtual void heal(int ammount);

    /**
     * @brief Checks if the job is knocked out (KO'd).
     * 
     * @return true if KO'd, false otherwise.
     */
    bool isKOd() const;

    /**
     * @brief Increases the job's force by a specified amount.
     * 
     * @param ammount The amount to increase the force by.
     */
    virtual void getBuffed(int ammount);

    /**
     * @brief Decreases the job's force by a specified amount.
     * Ensures force does not drop below 0.
     * 
     * @param ammount The amount to decrease the force by.
     */
    virtual void getNerfed(int ammount);

    /**
     * @brief Calculates the combat power of the job.
     * 
     * @return The combat power.
     */
    virtual int getCombatPower() const;

    /**
     * @brief Checks if the job is at full health.
     * 
     * @return true if health is at its maximum, false otherwise.
     */
    virtual bool isFullHealth() const;

    /**
     * @brief Checks if the job can afford a specified purchase.
     * 
     * @param price The price to check.
     * @return true if the job can afford to pay the price, false otherwise.
     */
    virtual bool canPurchase(int price) const;

    /**
     * @brief Gets the class name of the job.
     * 
     * @return The name of the job's class.
     */
    virtual string getClassName() const;

    /**
     * @brief Gets a description of the job.
     * 
     * @return A string description of the job.
     */
    virtual string getDescription() const;

    /**
     * Gets the current level of the player
     *
     * @return - level of the player
    */
    int getLevel() const;

    /**
     * Gets the of force the player has
     *
     * @return - force points of the player
    */
    virtual int getForce() const;

    /**
     * Gets the amount of health points the player currently has
     *
     * @return - health points of the player
    */
    virtual int getHealthPoints() const;

    /**
     * Gets the amount of coins the player has
     *
     * @return - coins of the player
    */
    virtual int getCoins() const;

    /**
     * @brief Levels up the job.
     */
    virtual void levelUp();

    /**
     * @brief Gets the specific job type.
     * 
     * @return A string representing the job type.
     */
    virtual string getJobType() = 0;
};



#endif //JOB_H
