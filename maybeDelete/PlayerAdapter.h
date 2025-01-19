#pragma once

#include "Player.h"
#include "Job.h"
#include "Character.h"
#include "PlayerMaker.h"


/**
 * @brief An adapter class for the Player entity. 
 *        Facilitates the creation and management of Player objects with additional flexibility.
 */
class PlayerAdapter {
protected:
    Player* player; /**< Pointer to the Player object being adapted. */

public:

    /**
     * @brief Destructor for the PlayerAdapter class.
     *        Cleans up the Player object managed by the adapter.
     */
    virtual ~PlayerAdapter(){
        delete this->player;
    }

    /**
     * @brief Deleted default constructor. 
     *        A PlayerAdapter cannot be instantiated without a Player.
     */
    PlayerAdapter() = delete;

    /**
     * @brief Constructs a PlayerAdapter with an existing Player object.
     * 
     * @param player Pointer to an existing Player object to be adapted.
     */
    PlayerAdapter(Player* player){
        this->player = player;
    }

    /**
     * @brief Constructs a PlayerAdapter by creating a new Player object.
     * 
     * @param name Name of the player.
     * @param character Name of the character class for the player.
     * @param job Name of the job class for the player.
     */
    PlayerAdapter(const string& name, const string& character, const string& job){
        this->player = PlayerMaker::makePlayer(name, character, job);
    }


};