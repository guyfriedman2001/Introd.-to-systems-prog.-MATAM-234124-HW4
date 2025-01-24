#include <string>
using std::string;

#include "Job.h"
#include "Character.h"
#include "PlayerMaker.h"



#ifndef PLAYER_H
#define PLAYER_H
class Player {
private:
    string name;
    Character* character;
    Job* job;
    
public:

    /**
     * @brief Constructs a new Player object.
     * 
     * @param name The name of the player.
     * @param character A pointer to the character associated with the player.
     * @param job A pointer to the job associated with the player.
     */
    Player(const string& name, Character* character, Job* job);

    /**
     * @brief Retrieves the description of the player.
     * 
     * @return A string representing the player's description.
     */
    string getDescription() const;

    /**
     * @brief Retrieves the name of the player.
     * 
     * @return The player's name.
     */
    string getName() const;

    /**
     * @brief Retrieves the current level of the player.
     * 
     * @return The player's level.
     */
    int getLevel() const;

    /**
     * @brief Retrieves the player's force points.
     * 
     * @return The player's force points.
     */
    int getForce() const;

    /**
     * @brief Retrieves the player's current health points.
     * 
     * @return The player's health points.
     */
    int getHealthPoints() const;

    /**
     * @brief Retrieves the number of coins the player has.
     * 
     * @return The player's coin count.
     */
    int getCoins() const;

    /**
     * @brief Deducts a specified amount of coins from the player.
     * 
     * @param ammount The number of coins to deduct.
     */
    void payCoins(int ammount);

    /**
     * @brief Reduces the player's health by a specified amount of damage.
     * 
     * @param ammount The amount of damage to apply.
     */
    void takeDamage(int ammount);

    /**
     * @brief Adds a specified amount of coins to the player.
     * 
     * @param ammount The number of coins to add.
     */
    void recieveCoins(int ammount);

    /**
     * @brief Restores the player's health by a specified amount.
     * 
     * @param ammount The number of health points to restore.
     */
    void heal(int ammount);

    /**
     * @brief Checks if the player is knocked out.
     * 
     * @return True if the player is knocked out, false otherwise.
     */
    bool isKOd() const;

    /**
     * @brief Retrieves the player's combat power.
     * 
     * @return The player's combat power.
     */
    int getCombatPower() const;

    /**
     * @brief Checks if the player is at full health.
     * 
     * @return True if the player is at full health, false otherwise.
     */
    bool isFullHealth() const;

    /**
     * @brief Checks if the player can afford a purchase of a specified price.
     * 
     * @param price The price of the item.
     * @return True if the player can afford it, false otherwise.
     */
    bool canPurchase(int price) const;

    /**
     * @brief Assigns a new character to the player.
     * 
     * @param character A pointer to the new character.
     */
    void setCharacter(Character* character);

    /**
     * @brief Assigns a new job to the player.
     * 
     * @param job A pointer to the new job.
     */
    void setJob(Job* job);

    /**
     * @brief Retrieves the player's current job.
     * 
     * @return A pointer to the player's job.
     */
    Job* getJob();

    /**
     * @brief Retrieves the player's current job (const version).
     * 
     * @return A pointer to the player's job.
     */
    Job* getJob() const;

    /**
     * @brief Retrieves the player's maximum health points.
     * 
     * @return The player's maximum health points.
     */
    int getMaxHealth();

    /**
     * @brief Buffs the player's combat power by a specified amount.
     * 
     * @param ammount The amount to buff.
     */
    void getBuffed(int ammount);

    /**
     * @brief Reduces the player's combat power by a specified amount.
     * 
     * @param ammount The amount to nerf.
     */
    void getNerfed(int ammount);

    // /**
    //  * @brief Engages the player in a fight with a specified monster.
    //  * 
    //  * @param monster A pointer to the monster.
    //  */
    // void fight(Monster* monster);

    /**
     * @brief Retrieves the name of the player's job.
     * 
     * @return A string representing the name of the job.
     */
    string getJobName();

    /**
     * @brief Retrieves the name of the player's job.
     * 
     * @return A string representing the name of the job.
     */
    string getCharacterName();

    Character* getCharacter();
    
    void levelUp();

    ~Player();
    string getJobType();

};
#endif //PLAYER_H